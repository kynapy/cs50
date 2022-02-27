#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Credit Card Number: ");
    if ((number > 5599999999999999) || (number < 4000000000000))
    {
        printf("INVALID\n");
    }
    else
    {
        long i = 10;
        long j = 100;
        int sum = 0;
        do
        {
            int last = number % i;
            int temp = number % j;
            int other = (temp - last) / i;

            sum = last + other + other;
            j *= 100;
            i *= 100;
        }
        while (j < number);
        printf("%d\n", sum);


    }
}