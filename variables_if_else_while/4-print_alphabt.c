#include<stdio.h>
/**
 * main-Prints the alphabetic in lower case except q, e
 *
 * Return:Always(Sucess)
 */
{
	char c;
	for (c='a';c<='z';c++)
	{
		if (c != 'q'&& c != 'e')
		{
			putchar c;
		}
	}
	putchar ('\n');
	return 0;
}
