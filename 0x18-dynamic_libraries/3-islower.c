#include "main.h"
/**
 * _islower(int c)- checks for a lowercase letter
 *
 * @c: is the char to be checked
 *
 * Return: 1 if the char is lowercase otherwise zero
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
