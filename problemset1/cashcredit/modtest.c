#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Credit Card Number: ");

    long i = 10;
    long j = 100;
    int sum = 0;
    int last = 0;
    int x = 0;
    do
    {
        int temp = number % i;
        x = (temp - (i / 10));
        last = x / (i / 10);

        int temp2 = number % j;
        int other = (temp2 - last) / i;

        sum += last;
        j *= 100;
        i *= 100;
    }
    while (j < number);
    printf("%d\n", sum);

}
