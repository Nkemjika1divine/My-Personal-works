#include <stdio.h>

/**
  * main - this code prints the body mass index of an individual
  * with special empasis on the obesity
  *
  * Return: 0
  */

int main(void)
{
	float weight;
	float height;
	float bmi;


	printf("Enter your Weight in grams: ");
	scanf("%f", &weight);

	printf("Enter your Height in metres: ");
	scanf("%f", &height);

	/*This is the formula for Body mass index*/
	bmi = weight / (height * height);

	printf("Body Mass Index: %f\n", bmi);

	if (bmi < 18)
	{
		printf("Underweight\n");
	}
	else if (bmi < 25)
	{
		printf("Normal weight\n");
	}
	else if (bmi < 30)
	{
		printf("Overweight\n");
	}
	else
	{
		printf("Obesity\n");
		{
			if (bmi < 35)
				printf("Class I Obesity\n");
			else if (bmi < 40)
				printf("Class II Obesity\n");
			else if (bmi >= 40)
				printf("You have Class III Obesity\n");
		}
	}

	return (0);

}
