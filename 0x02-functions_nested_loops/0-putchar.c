#include "main.h"

/**
 * main - Prints "_putchar".
 *
 * Return: Always 0.
*/
int main(void)
{
	char nameP[] = "_putchar";
	int i = 0;

	while (nameP[i] != '\0')
	{
		_putchar(nameP[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
