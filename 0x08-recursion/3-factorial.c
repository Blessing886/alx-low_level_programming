#include "main.h"

/**
 * factorial - Returns the factorial form of a given number
 * @n: The number to return to the factorial form
 * Return: Factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
