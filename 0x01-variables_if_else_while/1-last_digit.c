#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated number
 * Description: negatuve positive et null
 * Return: Always 0.
 */
int main(void)
{
int n;
int ld = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (ld > 5)
printf("%d and is greater than 5\n", ld);
else if (ld == 5)
printf("%d and is 0\n", ld);
else
printf("%d and is less than 6 and not 0\n", ld);
return (0);
}
