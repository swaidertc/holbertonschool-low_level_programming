/*
 * File: 3-print_numbers.c
 * Auth: Swaidertc
*/

#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
int number;

for (number = 0; number <= 9; number++)
_putchar(number + '0');

_putchar('\n');
}
