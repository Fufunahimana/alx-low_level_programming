#include "main.h"


/**
* print_binary - This function prints the binary representation of a number
* @n: number to print in binary
* main - check the code
* Return: no return
*/
void print_binary(unsigned long int n)
{
int y, count = 0;
unsigned long int current;
for (y = 63; y >= 0; y--)
{
current = n >> y;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
