
// scanf with %%i, will auto detect base

#include <stdio.h>

int main()
{
    int somenumber;

    printf("Enter a value in octal base (scanf with %%i, will auto detect base): ");
    scanf("%i", &somenumber);
  
    printf("somenumber = %i \n", somenumber); 
    return 0;
}
