#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a specific index in a linked list
 * @head: first node
 * @index: index of the node to return
 *
 * Return: pointer to the node being sought for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;
	listint_t *temp = head;

	while (temp && z < index)
	{
		temp = temp->next;
		z++;
	}

	return (temp ? temp : NULL);
}
