#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - This function copy string to new str created with malloc
 * @str: string
 * Return: Pointer to new string
 */
char *_strdup(char *str)
{
	char *new_string;
	int i = 0, length = 0;

	if (str == NULL)
		return (NULL);

	for (; str[length]; length++)
	{
	}

	new_string = malloc(sizeof(char) * (length + 1));

	if (!new_string)
		return (NULL);

	for (; i < length; i++)
		new_string[i] = str[i];

	new_string[i] = '\0';

	return (new_string);
}
