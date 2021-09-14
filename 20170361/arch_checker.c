#include <stdio.h>

int main() {
	int length = sizeof(int *);

	if (length == 8) {
		printf("%dbit architecture\n", length * 8);
	}
	else if (length == 4) {
		printf("%dbit architecture\n", length * 4);
	}
	else {
		printf("The architecture of this system is not 32 or 64 bit.\n");
	}

	return 0;
}

