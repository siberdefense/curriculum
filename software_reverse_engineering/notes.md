# Software Reverse Enginneering Instruciton Ideas

## Pre-reqs
- Programming
- Operating systems: memory

## Assembly Intro

### Godbolt

- Use https://godbolt.org/ to see assembly for various C/C++ programs.
- See how changing the architecture changes the assembly.
- Notice the actual byte values corresponding to instructions.
- Use a hex editor to open a binary file and see if we can find byte values
  corresponding to what we saw from the [dis]assember.

### Ghidra
- Open a simple C program that we wrote in Ghidra.
- View the decompiler output and how it does (and doesn't) match our original.
- View the raw bytes of file alongside the assembly and decompiler views.

## Writing Code in Assembly

- TODO: maybe?