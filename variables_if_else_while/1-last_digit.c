#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a random
 *
 * Return:always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n  > 5)
{
	printf("last digit of %d is %d and is greater than 5\n");
}
	else if (n == 0)
{
	printf("last digit of %d is %d an is 0\n";
}
	else ( n < 6)
	{
	printf("last digit of %d is %d an is less than 6 and not 0/n");
	}
	return (0);
}
