#include <stdio.h>
#include <stdlib.h>

//figure out whether to use %d or %c.  %d would be using numeric data types which might
//make it way easier to actually calculate entropy

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

//possible method
/*



*/
