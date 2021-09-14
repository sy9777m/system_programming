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
		printf("%d\n", length);
	}

	return 0;
}

