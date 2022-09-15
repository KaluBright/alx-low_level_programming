#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: parameter
 * Return: return nothing
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (a == 0)
		_putchar('\n');
}
