#include "holberton.h"

/**
* print_sign- int n
* @n: sign
*
* description: prints sign of number
* Return: 1 if c is a L/letter, otherwise 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
return (0);
}
else
{
(n < 0);
_putchar('-');
return (-1);
}
}
