#include "main.h"
/**
 * main: - entry point
 *
 * Description : prints alphabets in lowercase followed by a new line'
 * Return : Alwats 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

