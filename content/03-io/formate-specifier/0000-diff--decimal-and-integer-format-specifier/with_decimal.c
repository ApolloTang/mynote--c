
#include <stdio.h>
#include <limits.h>

int main()
{
    int a;

    printf("Entered values should be in %lu bytes \n", sizeof(int));
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);

    printf("Enter value (scanf with %%d, value must be base 10): ");
    scanf("%d", &a);
  
    printf("a = %i \n", a); 
    return 0;
 
    return 0;
}
