#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: the char to be checked
 *
 * Return: 1 if char is a letter lower or upper, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
