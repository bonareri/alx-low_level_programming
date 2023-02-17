#include <stdio.h>
/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, p;

	for (i = '0'; i <= '98'; i++)
	{

	for (p = i + 1; p <= '99'; p++)
	{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	if (i == '98' && p == '99')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
