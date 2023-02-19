<<<<<<< HEAD
#!/bin/bash
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
=======
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * descirption: get random number and print number
 * return 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND_MAX / 2;
	if (n >0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i zero\n", n);
>>>>>>> d4d7e176dcd04908abf54a95bc984f1bfbd8db17
	return (0);
}
