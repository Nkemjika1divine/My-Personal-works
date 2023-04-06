#include <stdio.h>

/**
 * main - this program takes measurement of triangles and checks
 * if they are isosceles, equilateral or scalene
 *
 * Return: Equilateral, Isosceles or scalene.
 */

int main(void)

{
	int a;
	int b;
	int c;

	/* Enter the sides of the triangle */
	printf("Side A: ", a);
	scanf("%d", &a);
	printf("Side B: ", b);
	scanf("%d", &b);
	printf("Side C: ", c);
	scanf("%d", &c);

	if ((a == b) && (b == c) && (c == a))
		printf("Triangle is Equilateral");
	else if ((a == b) || (a == c) || (c == b))
		printf("Triangle is Isosceles");
	else
		printf("Triangle is Scalene");
	printf("\n");

}
