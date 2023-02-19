#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: returns 0 if code is successful
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 98 ; i++)
	{	putchar(' ');
	{
		for (j = 01 ; j <= 99 ; j++)
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
	}
	}
		putchar('\n');
		return (0);
}
