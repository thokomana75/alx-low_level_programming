#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @r:the list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *r)
{
	size_t num = 0;

	while (r)
	{
		printf("%d\n", r->n);
		num++;
		r = r->next;
	}

	return (num);
}
