#include <stdio.h>
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	while (i < 10)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! :(\n");
	return (0);
}
