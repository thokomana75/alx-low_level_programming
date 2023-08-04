#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r = 0;

	for (; r < n; r++)
	{
	dest[r] = src[r];
	}

	return (dest);
}
