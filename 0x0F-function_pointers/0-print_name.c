#include "function_pointers.h"

/**
*print name - prints a name
*@name: pointer to name
*@f: function to print with
*
*Return: void.
*/
void print_name(char *name, void (*f)(char *))
	{
		if (name != NULL && f != NULL)
			f(name);
	}

