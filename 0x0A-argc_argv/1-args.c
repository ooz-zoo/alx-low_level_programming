#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguements you passed into it
 * @argv: An arguments values
 * @argc: counter of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
