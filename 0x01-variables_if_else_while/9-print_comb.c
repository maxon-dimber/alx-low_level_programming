#include <stdio.h>
/*
 * Prints all single and two digit numbers in ascending order
 * separated by a comma and space from 0 to 99
 */

int main(void)
{
	int x;

	for (x = 0; x < 100; x++)
	{
	putchar(x + '0');
	putchar(',');
	putchar(' ');
	}
	return (0);
}
