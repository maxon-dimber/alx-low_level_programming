#include <stdio.h>
/*
 * Print all lowercase letters except q and e
 * return always (0) (success)
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		if ((x != 'q' || x != 'e') && x <= 'z')
			putchar (x);
		x++;
	}
	putchar('\n');
	return (0);
}
