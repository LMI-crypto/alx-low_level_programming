#include <stdio.h>
/**
 * main - Entry point
 * prints all single digit numbers of base 10 starting from 0, then a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
