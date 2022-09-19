#include "main.h"
/**
 * puts2 - print one char out of two of a string
 * @str: char array string type
 * Description: Print 1st char, then 3rd, then 5th,then.....
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
