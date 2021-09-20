#include <stdio.h>

typedef unsigned char *pointer;

int main(void) {
	int a = 1;
	char *p = (char*)&a;

	if (p[0] == 1) {
		printf("Big-endian\n");
	}
	else {
		printf("Little-endian\n");
	}

	return 0;
}
