#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digitOne, digitTwo;

	for (digitOne = 0; digitOne < 9; digitOne++)
	{
		for (digitTwo = digitOne + 1; digitTwo < 10; digitTwo++)
		{
			putchar((digitOne % 10) + '0');
			putchar((digitTwo % 10) + '0');

			if (digitOne == 8 && digitTwo == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
