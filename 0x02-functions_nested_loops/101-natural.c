#include <stdio.h>

/**
 * main - print the sum of all the multiples of 3 or 5 below 1024
 * Return : 0
 */

int main()
{
    int a, b, i, Sum = 0;

    for (i = 1; i < 1024; i++)
    {
        a = i % 3;
        b = i % 5;
        if (a == 0 || b == 0)
        {
            Sum = Sum + i;
        }
    }

    printf("%d", Sum);
}
