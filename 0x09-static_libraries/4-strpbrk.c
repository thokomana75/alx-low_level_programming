#include <stdio.h>

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: Always 0 (success)
 * Return: pointer to the byte in s that matches, or NULL if no
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
