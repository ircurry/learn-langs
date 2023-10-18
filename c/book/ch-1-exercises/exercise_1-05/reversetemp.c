#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP  20

main()
{
	float fahr, celsius;

	fahr = UPPER;
	printf("Fahr\t\tCelsius\n");
	printf("-----------------------\n");
	while (fahr >= LOWER) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f F\t\t%6.1f C\n", fahr, celsius);
		fahr = fahr - STEP;
	}
}
