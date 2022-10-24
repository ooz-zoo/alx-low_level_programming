#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all the elements of a list_t list
 * @h: data type pointer of struct
 * Return: elements of the str
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		
			printf("[0] (nil)\n");
		
		else
		
			printf("[%d] %s\n",h->len, h->str);

		nodes++;
		h = h->next;
	}
	
	return (nodes);
}
