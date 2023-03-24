#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: the string to be added
 * @f: pointer to function
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
i}
