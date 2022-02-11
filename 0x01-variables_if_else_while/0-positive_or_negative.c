#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and stater wheter
 *	it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;
	srand(time(0));
	n = ran() - RAND_MAX / 2;

	if (n > 0)
		printf("%zu is positive\n", n);
	else if (n < 0)
		printf("%zu is negative\n", n);
	else
		printf("%zu is zero\n", n);

	return (0);
}
