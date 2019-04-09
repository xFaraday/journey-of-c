#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fptr;

	char filename[1000], c;

	printf("Enter filepath:");
	scanf("%s", filename);
	fptr = fopen(filename, "r");
	if (fptr == NULL) {
		printf("filepath is wrong \n");
		exit(0);
	}
	else {
	c = fgetc(fptr);
	while (c != EOF) {
		printf("%c", c);
		c = fgetc(fptr);
	}
	fclose(fptr);
	return 0;
	}
}
