#include <stdio.h>
/*
 * prints numbers 1 to 10 using putchar function only
 */

int main(void)
{
	int add;

	add = 0;
	while (add < 10)
	{
		putchar(add + '0');
		add++;
	}
	putchar('\n');
	return (0);
}
