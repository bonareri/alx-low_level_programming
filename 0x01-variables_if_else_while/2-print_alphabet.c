#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char c;

	c = "a";
	while
		(c <= "z") {
			putchar(c);
			c++;
		}
	putchar("\n");
	return (0);
}
