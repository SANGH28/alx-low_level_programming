#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
int i;
int j;
for (i = '0' ; i <= '8' ; i++)
{
for (j = '1' ; j <= '9' ; j++)
	if (i < j && i != j)
	{
	putchar(i);
	putchar(j);
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
