#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * followed by a new line.
 * Description: Prints the numbers excluding 2 and 4
 * Return: the numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i == 2 || i == 4)
	{
	continue;
	}
	else
	{
	putchar(i + '0');
	}
	}
	putchar('\n');
}

