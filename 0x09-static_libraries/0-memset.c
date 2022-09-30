#include "main.h"

/**
 * _memset - Fills a memory block with a constant byte
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
