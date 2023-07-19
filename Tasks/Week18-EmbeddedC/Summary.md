# README.md

## Pointer
A pointer is a variable that holds a memory address. This address is the location of another object (typically another variable) in memory. For example, if one variable contains the address of another variable, the first variable is said to point to the second.

### Why do we need Pointers?
- Configure the peripheral register addresses.
- Read/Write into peripheral data registers.

### Pointer Size
- Pointers generally have a fixed size, depending upon different factors like the operating system and CPU architecture.
- The pointer size is equivalent to the memory location address size.

## typedef
The `typedef` keyword in C is used to create an alias name for user-defined data types or primitive and derived data types.

Syntax: `typedef <primitive or derived data type> <new_name>;`

## Compilation Process
When we want to write a program, it goes through a flow called the compilation process, which consists of stages:

1. Compiler Stage:
   - Preprocessing stage: Resolves preprocessing directives, macros, `#include`, `#ifdef`, etc. The input of this stage is `app.c`, and the output is `app.i`.
   - Code generating stage: Converts higher-level language code (C) into assembly. The input of this stage is `app.i`, and the output is `app.s`.
   - Assembler stage: Converts assembly into an object file. The input of this stage is `app.s`, and the output is `app.o`.

2. Linker Stage:
   - Resolves symbols and relocates data and code. After generating the object file `app.o`, the linker links libraries, linker script, and this object file together to generate an executable file and debug file (e.g., `app.elf` / `app.hex` / `app.bi` / `app.out`).

Compile-time binding: The object file has virtual addresses, while linking puts absolute addresses that already exist in physical memory.

## Startup
Startup code is code that runs before `main()` starts executing. The startup code is located inside the executable file.
Startup code can be written in two ways:
1. `.c` C file
2. `.s` assembly

Startup Actions:
1. Disable all interrupts.
2. Create a vector table from the MCU.
3. Copy `.data` section from ROM to RAM.
4. Zero uninitialized data (`.bss` section).
5. Allocate space and initialize the stack.
6. Initialize the processor Stack Pointer (SP).
7. Create and initialize the heap (if applicable).
8. Enable interrupts.
9. Call `main()`.

## Linker Script
The linker script is a text file that specifies:
1. The available memory.
2. How to use memory.

It reflects the memory resources and memory map of the target MCU.
