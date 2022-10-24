#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: The pointer address to header node.
 * @str: Pointer to the string of the node.
 *
 * Description: This function adds a new node at the beginning
 * of a list_t list.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL )
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
}
