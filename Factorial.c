#include <stdio.h>

int factorial(int number)
{
    if (number <= 1)
        return 1;
    else
        return number*factorial(number - 1);
}

void main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("%d",factorial(num));
}
