#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height;
    do /* Do while loop to repeatedly ask for an integer between 1 and 8*/
    {
        height = get_int("What height?\n"); /*To get an integer between 1 and 8 for the height of the pyramid*/
    }
    while ((height > 8) || (height < 1));

    for (int i = 0; i < height; i++)
    {
        for (int space = height - 1; space > i; space--) /*As the number of hash increases the number of spaces decreases for each row*/
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}