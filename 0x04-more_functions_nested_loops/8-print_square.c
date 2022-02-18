/*
 * File: 8-print_square.c
 * Auth: Swaidertc
 */

#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
int hight, wid;

if (size > 0)
{
for (hight = 0; hight < size; hight++)
{
for (wid = 0; wid < size; wid++)
_putchar('#');

if (hight == size - 1)
continue;
_putchar('\n');
}
}

_putchar('\n');
}
