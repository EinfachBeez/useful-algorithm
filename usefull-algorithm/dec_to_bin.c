#include <stdio.h>
#include <stdbool.h>

int main() {
	// 10 digits = decimal from 0 to 9
	int dec[10], i, k;

	printf("Decimal Input: ");
	scanf_s("%d", &k);
	
	// until the number is greater than 0
	for (i = 0; k > 0; i++) {
		// devide and store rest in dec
		dec[i] = k % 2;
		// devide k through 2
		k /= 2;
	}

	printf("Binary Value: ");
	
	// print dec from the opposit side
	for (i = i - 1; i >= 0; i--) {
		printf("%d", dec[i]);
	}

	return 0;
}