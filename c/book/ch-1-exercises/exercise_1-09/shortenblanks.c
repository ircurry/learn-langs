#include <stdio.h>

#define NOBLANK   0
#define POSTBLANK 1

main()
{
	int c, bl;

	bl = NOBLANK;
	// putchar(EOF); 
	while ((c = getchar()) != EOF) {
		if (bl == 0) {
			putchar(c);
			if (c == ' ') {
				bl = POSTBLANK;
			}
		} else if (c != ' ') {
			putchar(c);
			bl = NOBLANK;
		} else {
			;
		}
	}
}
