#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print char, integer, float and string
 * @format: format
 *
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = i;
			break;
		case 'i':
			printf("%i", va_arg(valist, int)), c = i;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = i;
			break;
		case 's':
			str = va_arg(valist, char*), c = i;
			if (!str)
			{
				printf("(nil)", p);
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(list);
}
