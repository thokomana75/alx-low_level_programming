#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @z: pointer to the list_t list
 *
 * Return: number of elements in z
 */
size_t list_len(const list_t *z)
{
	size_t w = 0;

	while (z)
	{
		w++;
		z = z->next;
	}
	return (w);
}
