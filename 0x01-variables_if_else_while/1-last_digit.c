/**
* main- void
* description: assign random number based on last digit
* Return: 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d\n", n, n % 10);
if (n % 10 > 5)
{
printf("and is greater than 5\n");
}
if else(n % 10 < 6 && (n % 10 != 0)
{
printf("and is less than 6 and not 0\n");
}
else
{
printf("and is 0\n");
}
return (0);
}
