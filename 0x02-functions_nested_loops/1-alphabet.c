#include "main.h"

/**
* main - Entry point
* Description - A function that prints the alphabet, in lowercase
* Return: 0 (success
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
