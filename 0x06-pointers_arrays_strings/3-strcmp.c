#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if the two strings are equal,
 * otherwise a value that is not 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}
