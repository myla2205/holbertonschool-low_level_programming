#include <stdio.h>

/**
 * print number
 *
 * Return- Always (Sucess)
 */
int main(void)
{
	int n;
	for (n = 0 ; n <= 9; n++)
	{
		putchar (n + '0');
	}
	putchar ('\n');
	return 0;
}
