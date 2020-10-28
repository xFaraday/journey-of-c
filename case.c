#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Took me approx 5 minutes to get a value at 77
*/


void winnerwinner(int num) {
	printf("\n\n\n\n\n7 | 7 | 7\n\n\n\n\n");
	printf("Number at %p", &num);
}

void chaos_counter() {
	int upper = 100;
	int lower = 1;

	srand(time(NULL));
	int num = (rand() % (upper - lower + 1)) + lower;
	printf("\n%d", num);

	switch(num) {
		case 20:
			printf("fifth");
			break;
		case 69:
			printf("Niiiiceeee");
			break;
		case 76:
			printf("Almost...");
			break;
		case 77:
			winnerwinner(num);
			break;
		default:
			break;
		}
	}

int main() {
	unsigned long long int poll_rate = 200000;

	while (1) {
	chaos_counter();
	usleep(poll_rate);
	}
}

