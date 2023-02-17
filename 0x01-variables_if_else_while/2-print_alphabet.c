#include <stdio.h>

/**
 * This program prints the alphabet in lowercase
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alpha[a]);
	}
	putchar ('\n');
	return (0);
}
