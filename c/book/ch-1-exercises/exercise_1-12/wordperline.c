#include <stdio.h>

#define TRUE  1
#define FALSE 0

main()
{
	int c, wasnewline;
	wasnewline = FALSE;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (wasnewline == 0)
				putchar('\n');
			wasnewline = TRUE;
		} else {
			putchar(c);
			wasnewline = FALSE;
		}
	}
}
