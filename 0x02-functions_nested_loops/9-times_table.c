#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0
 *
 */

void times_table(void)
{
	int a, b, x, mult, chek;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0, x = 1; b < 9; b++, x++)
	{
	mult = a * b;
	chek = a * x;

	if (chek > 9 && b != 9)
		_putchar('%d, ', mult);
	else if (b == 9)
		_putchar('%d', mult);
	else
		_putchar('%d,  ', mult);
	}
	_putchar('\n');
	}
}
