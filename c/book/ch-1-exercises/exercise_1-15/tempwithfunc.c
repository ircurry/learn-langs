#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP  20

float tocelsius(float t);

float tocelsius(float fahr)
{
	float celsius;
	celsius = (5.0/9.0) * (fahr - 32);
	return celsius;
}

int main()
{
	float fahr;

	fahr = LOWER;
	printf("Fahr\t\tCelsius\n");
	printf("-----------------------\n");
	while (fahr <= UPPER) {
		printf("%3.0f F\t\t%6.1f C\n", fahr, tocelsius(fahr));
		fahr = fahr + STEP;
	}
	
	return 0;
}
