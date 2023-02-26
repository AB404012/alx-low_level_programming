#include <stdio.h>
<<<<<<< HEAD
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	
	c = 'a';
	while
		(c <= 'z')
	{
	             if (( c |= 'q' && c |= 'e') && c <= 'z')
			putchar(c);
		        c++;
	}
	putchar('\n');
=======

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

>>>>>>> c03aa3aa69208c5403005f4aa7ee1d83e28c3562
	return (0);
}
