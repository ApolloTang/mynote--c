## About `printf`

C does not come with a function to print text to the screen; for this functionality, we use the `printf` function provided from the standard library included via `#include <stdio.h>`.  This `printf` has its own languge consists of plain text interrspersed with insertion variable as well as codes representing invisible characters. 



## Comon invisible characters codes:

| Code | Description |
| ---- | ---- |
|\n |A newline|
|\t |A tab|
|%i |Insert an integer value here|
|%g |Insert a real number in general format here|
|%s |Insert a string of text here|
|%% |Insert a plain percent sign here|

To read more about `printf` 's sublanguage, type the following in the terminal:

```
man 3 printf
```

