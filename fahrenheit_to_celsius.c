#include <stdio.h>

void main()
{
    //initialize float variables to hold floating numbers
    float celsius, fahrenheit;

    // Reads temperature in fahrenheit
    printf("\nEnter temperature in Fahrenheit:");
    scanf("%f", &fahrenheit);

    // Fahrenheit to celsius conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;
    // Print the result
    printf("\nCelsius = %.3f", celsius); //.3f means correct to 3 decimal places
}