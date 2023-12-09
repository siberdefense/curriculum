/*
 * Build this program using the following command:
 * 	gcc -g -static -o sleepy_mmap.bin sleepy_mmap.c
 *
 * Run this program using the following invocation:
 * 	./sleepy_mmap.bin <num_bytes_to_alloc>
 *
 * The program will attempt to allocate the specified amount of memory and 
 * then infinite sleep loop until kllled (man kill) or interrupted with ctlc+c
 * 
 */

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
	int status = 0;
	char * ptr = NULL;
	if (argc != 2) {
		printf("Usage: %s <num bytes to mmap>\n", argv[0]);
		return EINVAL;
	}
  	unsigned long size = strtoul(argv[1], NULL, 0);

	printf("mmap()ing %lu bytes\n", size);
	ptr = mmap(NULL, size, PROT_EXEC | PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_SHARED, -1, 0);

	if (ptr == -1) {
		perror("Error: ");
		status = -1;
	} else {
		printf("mmap()ed %lu bytes at %p\n", size, ptr);
		printf("Getting very sleep()y.\nYawn");
		fflush(stdout);
		while(1) {
			sleep(10);
			printf(".");
			fflush(stdout);
		}
	}


	return status;
}
