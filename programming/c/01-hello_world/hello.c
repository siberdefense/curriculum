/* 
 * This is a comment. The compiler won't build this part into our program. 
 * It's just here as a note for us developers reading the source code.
 *
 * Use the following command to compile and assemble this program:
 * 	gcc -g -o hello.bin hello.c
 *
 * gcc is a program called a compiler. It's used to turn source code into 
 * program files that your operating system knows how to execute (run).
 *
 * The -g flag tells gcc to add in debugging information to our 
 * executable program file.
 * 
 * The -o <filename> tells gcc what to name our output executable program 
 * file. In this case, our program will be called "hello.bin".
 * 
 * Finally, the last argument is the name(s) of the file(s) containing the
 * source code of our program. These files are how we tell the compiler 
 * what our executable program file should do. 
 * 
 * Now, try building this file and then running it with the following 
 * command:
 *	./hello.bin
*/

#include <stdio.h>

int main() {
   /* my first program in C */
   printf("Hello, World! \n");
   
   return 0;
}
