# Identifiers

Identifiers are the names that are given to various program elements such as variables, symbolic constants, and functions.

## Rules to Know when Talking about Identifiers:
- An identifier name must be a sequence of letters and digits and must begin with a letter.
- Names shouldn't be a keyword (such as int, float, if, break, for, etc.).
- No special characters, such as semicolon, period, blank space, slash, or comma, are permitted.

## Optimization

Optimization is used to:
- Reduce the number of instructions.
- Decrease memory access time.
- Minimize power consumption.

### Optimization Levels:
1. Level 00:
   - No optimization.
   - Can be used when debugging.
   - Fastest compilation time.

2. Level 01:
   - Moderate to decrease memory access and code spaces.

3. Level 02:
   - Not debugging-friendly.
   - Slow compilation.

4. Level 03:
   - Full optimization with aggressive steps.
   - Slowest compilation time.
   - May cause bugs.
   - Not debugging-friendly.

## `volatile` Type Qualifier

The `volatile` keyword in C is a qualifier that tells the compiler that the value of the variable may change at any time. It prevents the compiler from optimizing operations related to that variable.

### Proper Use of the `volatile` Keyword:
- Memory-mapped peripheral registers.
- Global variables modified by an ISR.
- Global variables modified by multiple tasks within multi-thread applications.

## Variable Definition VS Variable Declaration

- Definition: A variable is defined when the compiler allocates storage for the variable.
- Declaration: A variable is declared when the compiler is informed about the variable's existence and type.

## Functions

Functions consist of:
- Function Name: Should follow the rules for identifiers.
- Input Parameters: The types and names of the parameters.
- Return Type: The data type of the function output, use `void` if there is no output.
- Function Body: Performs the specific function operation.
- Return Statement: Indicates the completion of the function execution and supplies the output to the caller.

### Pass by Value VS Pass by Reference:
- Pass by Value: The value of the argument is copied into the function parameter. Changes inside the function do not affect the argument.
- Pass by Reference: The address of the argument is passed into the function parameter. Changes inside the function affect the argument.

## Storage Class in C

Storage Class in C determines the scope, lifetime, and visibility of a variable or function.

1. `auto`:
   - Automatic variables are allocated memory automatically at runtime.
   - Their visibility is limited to the block in which they are defined.
   - Local variables are automatic in C by default.
   - Automatic variables are initialized to garbage by default.

2. `extern`:
   - The external storage class is used to declare variables with external linkage.
   - It indicates that the variable is defined elsewhere in the program.
   - Variables declared as `extern` are not allocated any memory.
   - Default initial value of external integral type is 0, otherwise null.
   - Can only be initialized as a global variable.

3. `static`:
   - Static variables hold their value between multiple function calls as they are stored in Data Memory.
   - The visibility of static local variables is limited to the function or block in which they are defined.
   - A static variable can be declared multiple times but assigned only once.
   - Default initial value of static integral variable is 0, otherwise null.
   - The visibility of static global variable is limited to the file in which it is declared.

## Preprocessor Directives

Before a C program is compiled, the source code is processed by a program called the preprocessor. Preprocessor directives begin with the `#` symbol.

1. Macros:
   - Macros are text replacements in code.
   - They are written using `#define` preprocessor directives.
   - No semicolon is needed to end a macro definition.

