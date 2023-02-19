#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Followed by a new line, except q & e
 * Return: Always 0 (success)
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

	return (0);
}
