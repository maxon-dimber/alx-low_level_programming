#include <stdio.h>

/**
 * This program prints the alphabet in lowercase
 */
int main(void)
{
	char x;

	x = "a";
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar ('\n');
	return (0);
}
