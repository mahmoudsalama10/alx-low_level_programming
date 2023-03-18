#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *	in ascending order, separated by a comma followed by a space.
 *
 * Discription: A C program prints.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			putchar((digit1) + '0');
			putchar((digit2) + '0');
			putchar((digit3) + '0');

			if (digit1 == 7 && digit2 == 8 && digit3 == 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
