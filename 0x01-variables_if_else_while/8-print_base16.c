#include <stdio.h>
/*
 * Prints all the hexadecimal numbers
 */

int main(void)
{
	int g;
	char h;

	g = 0;
	h = 'a';
	while (g < 10)
	{
		putchar(g + '0');
		g++;
	}
	while (h <= 'f')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
