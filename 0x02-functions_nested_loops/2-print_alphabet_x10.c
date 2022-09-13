#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet x10
 *
 */

void print_alphabet_x10(void)
{
	int letter;
	int letter2;

	for (letter = 0; letter <= 9; letter++)
	{
		for (letter2 = 0; letter <= 9; letter2++)
		{
															_putchar(letter2);
		}
		_putchar('\n');
	}
}
