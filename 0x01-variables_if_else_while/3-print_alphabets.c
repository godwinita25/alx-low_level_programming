#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description - a prog that prints alphabet in lowercase and in uppercase.
* Return: Always 0 (success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
