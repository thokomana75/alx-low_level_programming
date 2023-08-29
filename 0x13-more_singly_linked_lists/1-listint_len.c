#include "lists.h"

/**
 * listint_len - returns the elements in a linked lists
 * @d: the list to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *d)
{
	size_t num = 0;

	while (d)
	{
		num++;
		d = d->next;
	}

	return (num);
}
