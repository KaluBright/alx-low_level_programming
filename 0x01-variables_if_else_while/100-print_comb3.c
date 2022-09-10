#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */


int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; &&i < j)
		{
			putchar(i);
			putchar(j);
			if (j == 57 && i == 56)
			{
				break
					;
			}
		}
	}
	putchar('\n');
	return (0);
}
