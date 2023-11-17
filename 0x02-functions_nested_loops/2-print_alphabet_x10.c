#include "main.h"
/**
 * main: - 'Entry point'
 * Description: 'prints alphabets in lowercase 10times'
 *
 * Return: Always o
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
