#include <stdio.h>

//declaring other functions so C doesnt get mad :(
int inches();
int centimeters();

int main() {
	int option;
	printf("Enter a value, Inches is 1 and Centimeters is 2:");
	scanf("%d",&option);

	if (option == 1) {
		inches();
	}
	else {
		centimeters();
	}
}

int inches() {
	float inches;
	float inchesresult;
	printf("Feed your unit to me:");
	scanf("%f",&inches);
	inchesresult = inches*2.54;
	printf("%f", "/n", inchesresult, "/n");
}

int centimeters() {
	float centimeters;
	float centimetersresult;
	printf("Feed your unit to me:");
	scanf("%f",&centimeters);
	centimetersresult = centimeters/2.54;
	printf("%f", "/n", centimetersresult, "/n");
}