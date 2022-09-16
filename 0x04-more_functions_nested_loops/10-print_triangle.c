#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int inc1, inc2;

	for (inc1 = 0; inc1 < size; inc1++)
	{
		for (inc2 = 1; inc2 <= size; inc2++)
		_putchar(inc2 < (size - inc1) ? ' ' : '#');
		_putchar('\n');
	}
	if (inc1 == 0)
	_putchar('\n');
}
