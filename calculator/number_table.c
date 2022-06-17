#include <stdio.h>
/**
 * number_table - program that perform and print multiplication tables
 * condition - loop will be exited when condition 2 is == 12
 * @return: 0
 */

int main(void)
{
    // num = variable that holds number to be multiplied
    // i = variable that holds operator 1 - 12 to be multiplied by num
    // a = variable that holds the result of the multiplication
    int num, i, a;

    printf("Enter a number to multiply: ");
    scanf("%d\n", &num);

    // For Loop iteration
    for (i = 1; i <= 12; i++)
    {
        a = num * i;
        printf("%d x %d = %d\n", num, i, a);
    }

    return 0;
}
