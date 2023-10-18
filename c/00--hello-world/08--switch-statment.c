#include <stdio.h>

int main() {
	int c;
	printf("Enter a Character: ");
	c = getc(stdin);
	printf("\n");

	switch(c) {
	case 'a':
		printf("You put a!\n");
		break;
	case 'b':
		printf("You put b!\n");
		break;
	default:
		printf("Error: Invalid Character!\n");
		break;
	}

	return 0;
}
