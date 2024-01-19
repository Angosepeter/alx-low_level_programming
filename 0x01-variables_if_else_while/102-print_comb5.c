#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
    int num1;
    int num2;
    int num3;

    for (num1 = 0; num1 <= 7; num1++)
    {
        for (num2 = num1 + 1; num2 <= 8; num2++) 
	{
            for (num3 = num2 + 1; num3 <= 9; num3++) 
	    {
                putchar((num1 % 10) + '0');
                putchar((num2 % 10) + '0');
                putchar((num3 % 10) + '0');

                if (num1 == 7 && num2 == 8 && num3 == 9) 
		{

                    continue;
                }

                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');
    return (0);
}
