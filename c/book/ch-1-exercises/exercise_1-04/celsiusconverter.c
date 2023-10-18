#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP  20

main()
{
	float celsius, fahr;

	celsius = LOWER;
	printf("Celsius\t\t Fahr\n");
	printf("-----------------------\n");
	while (celsius <= UPPER) {
		fahr = ((5.0/9.0) * celsius) + 32.0;
		printf("%3.0f C\t\t%6.1f F\n", celsius, fahr);
		celsius = celsius + STEP;
	}
}
