#include "main.h"

/**
* _strlen_recursion - calculate the length of a string
* @s: The string to count
* Return: integer value
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strien_recursion(s) + 1);
}
