#include <stdio.h>
/*
 * prints the lowercase alphabet in reverse and new line at the the end
 */

int main(void)
{
	char d;

	d = 'z';
	while (d >= 'a')
	{
		putchar (d);
		d--;
	}
	putchar('\n');
	return (0);
}
