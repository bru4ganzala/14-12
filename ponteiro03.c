#include <stdio.h>
#include <stdlib.h>

int main() {
	int vetor[5];
	int *p = vetor;
	int i;

	for (i=0; i<5; i++) {
		printf("Digite o valor para a posicao %d: ", (i+1));
		scanf("%d", (p+i));
	}

	putchar('\n');

	for (i=0; i<5; i++)
		printf("[%d]: %d\n", (i+1), *(p+i));

	return 0;
}
