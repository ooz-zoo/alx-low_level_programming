#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * in a linked list_t list
 * @h:head of the list
 *
 * Return: counter of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
