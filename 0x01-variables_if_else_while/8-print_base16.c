#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char ch;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
