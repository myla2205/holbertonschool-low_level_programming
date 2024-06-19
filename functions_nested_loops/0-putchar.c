#include "main.h"

/**
 * main- Print Putchar
 *
 *Description: This function prints "_putchar" followed by a newline
 * character to standard output using the write system call
 *
 * Return- Always (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int n = 0;
		for(n = 0; n < 8; n++)
		{
			_putchar(str[n]);
		}
	_putchar('\n');

	return (0);
}
