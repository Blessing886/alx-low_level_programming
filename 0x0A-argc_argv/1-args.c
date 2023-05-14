#include "main.h"
#include <stdio.h>

/**
 * main - Will print the number of arguments
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
