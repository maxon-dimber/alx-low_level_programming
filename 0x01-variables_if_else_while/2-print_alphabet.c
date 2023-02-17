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
	for (a = 0; a < 26; a++)
	{
		putchar(x);
		x++;
	}
	putchar ('\n');
	return (0);
}
