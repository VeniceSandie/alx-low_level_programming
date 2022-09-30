#include <stdio.h>
#include "main.h"

/**
* main - print name
* @argc: int.
* @argv: char.
*
* Return: Always 0.
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	rintf("%d\n", argc - 1);
	return (0);
}
