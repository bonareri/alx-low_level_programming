#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the number to be checked
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n > 98)
		{
			printf("%d, ", n--);
			printf("%d\n", n);
		}	else
		{
			printf("%d, ", n++);
			printf("%d\n", n);
		}
	}
}
