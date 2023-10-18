#include <stdio.h>

int main()
{
	int i;
	i = 0;
	
	while (i <= 100) {
		++i;
		if (i % 3 == 0 && i % 5 == 0) {
			printf("fizzbuzz");
		} if (i % 3 == 0) {
			printf("fizz");
		} else if (i % 5 == 0) {
			printf("buzz");
		} else {
			printf("%d",i);
		}
		printf("\n");
	}
}
