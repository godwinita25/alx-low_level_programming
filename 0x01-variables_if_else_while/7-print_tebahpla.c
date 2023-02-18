#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description - Prints th elower alphabet in reverse
* Return: Returns 0 (success)
*/

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);

	putchar('\n');
	return (0);
}
