#include <time.h>
#include <stdio.h>
/**
 * main - is a program that prints all of the value of 52! to a file
 * Return: value is alway true.
 */

int main(void)
{
	long long unsigned int value;
	/**
	 * max is the maximum value a c integer can hold. Since i can't print
	 * beyond here, finna kill the program when it goes beyond here ＞︿＜
	*/
	int i;
	FILE *out;

	value = 1;
	/*max = 18446744073709551615;*/
	out = fopen("output.txt", "w");

	fprintf(out, "The factorials of 10 are;\n");
	for ( i = 2; i <= 52; i++)
	{
		value = value * i;
		
		if (value >= '18446744073709551615')
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
