#include "main.h"


/**
* flip_bits - This function that returns the number
* of bits wich you would need to flip
* to get from one number to another
* to get from one number to another
* @n: first number
* @m: second number
* Whriten by Fulgence Nahimana
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int Myvar, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (Myvar = 63; Myvar >= 0; Myvar--)
{
current = exclusive >> Myvar;
if (current & 1)
count++;
}
return (count);
}
