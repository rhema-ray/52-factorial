#include <time.h>
#include <stdio.h>
/**
 * main - is a program that prints all of the value of 10! to a file
 * Return: value is alway true.
 */

int main(void)
{
	unsigned int value;
	int i, input;
	FILE *out;

	printf("Enter a number to find its factorial: ");
	scanf("%d\n", &input);
	
	value = 1;
	out = fopen("output.txt", "w");

	fprintf(out, "The factorials of 10 are;\n");
	for ( i = 1; i <= input; i++)
	{
		value = value * i;
		
		if (value >= (unsigned long int)'18446744073709551615')
		{
			printf("BING BONG!\n We've gotten to the maximum number C can hold ");
			return (0);
		}

		fprintf(out, "factorial %d is: %llu\n", i, value);
		fclose(out);
	}
	double time;
	time = clock();
	printf("Compilations time is >=: %f\n", time / CLOCKS_PER_SEC);
	return (0);
	return (0);
}
