#include <stdio.h>
int main()
{
    int x, y, sum;

    printf("Enter two numbers to add\n");
    scanf("%d%d", &x, &y);

    sum = x + y;

    printf("Sum of the numbers = %d\n", sum);

    return 0;
}