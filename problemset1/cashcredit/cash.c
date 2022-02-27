#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("How much change?\n");
    }
    while (dollars < 0); /*Amount of change to return*/
    int cents = round(dollars * 100); /*Change is converted from dollars to cents*/

    int cents2 = cents % 25;
    int quarters = (cents - cents2) / 25;


    int cents3 = cents2 % 10;
    int dimes = (cents2 - cents3) / 10;


    int cents4 = cents3 % 5;
    int nickels = (cents3 - cents4) / 5;


    printf("Minimum number of coins: %d\n", quarters + dimes + nickels + cents4);
}