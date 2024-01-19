#include <stdio.h>
/**
 * main - prints base 10 numbers from 0 using putchar ony with no char.
 *
 * return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar('\n');
	return (0);
}
