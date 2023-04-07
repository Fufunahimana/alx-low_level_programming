#include "main.h"


/**
* The function will convert a binary number to an unsigned int
* @b: pointing a string of the binary number(0&1)
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
int y;
unsigned int Myvar = 0;
if (!b)
return (0);
for (y = 0; b[y]; y++)
{
if (b[y] < '0' || b[y] > '1')
return (0);
Myvar = 2 * Myvar + (b[y] - '0');
}
return (Myvar);
}
