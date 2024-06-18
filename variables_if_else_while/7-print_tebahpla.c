#include <stdio.h>

/**
 * Print lower case in reverse
 *
 * Return- Always (sucess)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}

	putchar ('\n');

	return (0) ;

