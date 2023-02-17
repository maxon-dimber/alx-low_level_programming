#include <stdio.h>
/*
 * This program prints the alphabet in uppercase then lowercase followed by a new line
 * return always (0) (success)
 */
int main(void)
{
        int main(void)
{
        char ALPHA[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int a;

        for (a = 0; a < 26; a++)
        {
                putchar(ALPHA[a]);
        }
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
        int b;

        for (b = 0; b < 26; b++)
        {
                putchar(alpha[b]);
        }
        putchar ('\n');
        return (0);
}
