#include <stdio.h>

/**
 * main - This program checks if an input is negative or positive or zero
 *
 * Return: positive, negative or zero
 */

int main(void)

{
	int a;

	printf("Enter a number: %d", a);
	scanf("%d", &a);

	if (a > 0)
		printf("Positive\n");
	else if (a < 0)
		printf("Negative\n");
	else
		printf("Zero\n");
}
