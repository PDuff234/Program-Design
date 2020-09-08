#include <stdio.h>

#define FREEZING_POINT 32.0
#define SCALE_FACTOR (5.0 / 9.0)

//This program will convert a Fahrenheit Temperature to Celsius

int main (void)
{
    double fahrenheit, celsius;

    printf ("Enter Fahrenheit temperature: ");
    scanf ("%lf", &fahrenheit);

    celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

    printf ("In Degrees Celsius: %.1f\n", celsius);

    return 0;
}
