#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

int main(int argc, char* argv[]){
	if(argc < 3)
		return -1;

	int* x = (int*)malloc(sizeof(int));
	int* y = (int*)malloc(sizeof(int));

	*x = atoi(argv[1]);
	*y = atoi(argv[2]);

	printf("x: %d\n", *x);
	printf("y: %d\n", *y);

	swap(x, y);
	printf("swapping ...\n");
	
	printf("x: %d\n", *x);
	printf("y: %d\n", *y);

	return 0;
}
