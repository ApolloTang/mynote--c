
// When using scanf with %d, the input must be in base 10.

#include <stdio.h>
#include <assert.h>


int main()
{
    int somenumber;

    printf("Enter '010' :> ");
    scanf("%d", &somenumber);
    printf("Explanation: the value you entered above, 010, is in octal base, or 8 in decimal base.\n");

    printf("Result: The number you entered was %i in decimal base.\n", somenumber);
    printf("Explanation: You have entered 010, a number in the octal base, so it should print the value of 8 in the decimal base.\n");
    assert(somenumber != 010); // 
    
    return 0;
}
