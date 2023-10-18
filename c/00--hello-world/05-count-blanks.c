#include <stdio.h>

main()
{
	int bl, tb, nl, c;
	bl = tb = nl = 0;
	while ((c=getchar()) != EOF) {
		if (c == '\t')
			++tb;
		if (c == ' ')
			++bl;
		if (c == '\n')
			++nl;
	}
	printf("\nTabs:\t\t%6d\n", tb);
	printf("Blanks:\t\t%6d\n", bl);
	printf("New Lines:\t%6d\n", nl);
}
