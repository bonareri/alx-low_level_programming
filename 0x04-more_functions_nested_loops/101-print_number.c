#include "main.h"
#include <math.h>

/**
 * print_number -  prints an integer
 * @n: The integer to be printed
 * Return: Always 0 (success)
 */

void print_number(int n)
{
	unsigned int k = 0;

	if (n < 0)
	{
	n * -1;
	k = n;
	_putchar('_');
	}
	k / 10;
	if (k != 0)
	{
	print_number(k);
	_putchar((unsigned int)n % 10 + '0');
	}
}

