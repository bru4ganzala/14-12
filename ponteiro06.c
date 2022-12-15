#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	int *b = &a;
	int **c = &b;
	int ***d = &c;

	printf("\nDigite o valor base: ");
	scanf("%d", &a);

	printf("\nDobro: %d", (*b * 2));
	printf("\nTriplo: %d", (**c * 3));
	printf("\nQuadruplo: %d", (***d * 4));

	return 0;
}
