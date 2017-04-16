#include <cs50.h>
#include <stdio.h>
int square(int x);
/* Converts time in shower to equivilent bottles of drinking water*/

int main(void)
{
    printf("Shower length (minutes): ");
    int m = get_int();
    printf("Minutes: %i\nBottles: %i\n", m, m * 12);
    
    int x = square(m);
    printf("x^2 is: %i\n", x);
    
}

int square(int x)
{
    return x*x;
}