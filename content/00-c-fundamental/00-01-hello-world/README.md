# The Hello World Program in C

```c
/*
    The Hello World Program in C
 */

/* C math and I/O libraries */
#include <math.h>
#include <stdio.h>

/* main function definition: */
int main(void) {
    // statements end in a semicolon (;)
    printf("Hello World\n");
    printf("sqrt(4) is %f\n", sqrt(4));

    return 0;  // main returns value 0
}
```



## Things to remember about c programming

### The `main` function

- Return type must be `int`.
- Contains an explicit `return` statement to return an `int` value.
- by convention, a `0` is returned if executed without errors.

### Statements:

- Statements must be within the body of some function.
- Statements end with a semicolon. Statements are delineated not by line breaks.

### Output:

- You must manually add `\n` when using `printf`.



## Compiling a c program:

```
gcc main.c -o main
```
[link to notebook](,/ipynb--hello-world/index.ipynb)


## Compile with debug information

Often when compiling with gcc, you want to enable more compiler warnings and build a binary executable with extra debugging information:

```
gcc -Wall -g -o hello-extra hello.c
```
[link to notebook](,/ipynb--compile-with-extra-debugging-info/index.ipynb)
