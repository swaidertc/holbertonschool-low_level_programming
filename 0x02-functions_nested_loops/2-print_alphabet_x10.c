#include "main.h"
/**
 * main - Print alphabet
 *  
*/
void print_alphabet_x10(void)
{
int count = 0;
char alphabet;

while (count++ <= 9)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
}
}
