#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
		else if ((num % 3) == 0)
		}
		else if ((num % 5) == 0)
		{
				printf("Buzz ");
		}
			else
		{
				printf("Buzz");
		}
	}
	printf("\n");

	return (0);
}
