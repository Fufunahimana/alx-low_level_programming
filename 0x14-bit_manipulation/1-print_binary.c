#include "main.h"

/**
* this function will print the binary representation of a number
* @n: number to print in binary
* main - check the code
* Return: no return
*/
void print_binary(unsigned long int n)
{
if (n >> 0)
{
if (n >> 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
else
{
_putchar('0');
}
}
