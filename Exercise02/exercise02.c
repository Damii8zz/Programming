

#include <stdio.h>

int main()
{
	int number01 = 0;
	int number02 = 0;

	printf("Introduce a number:");
	scanf_s("%i\n" &number01);

	printf("Introduce another number:");
	scanf_s("%i\n" &number02);
	
	printf("The sum of this two numbers is: %i\n", number01 + number02);
	
	return 0;
}