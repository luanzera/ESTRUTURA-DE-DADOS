/* Crie um programa em C que pegue o endereço de memória do tipo int e desloque dez posições anteriores,
mostrando respectivamente o endereço e seu conteúdo. */

#include <stdio.h>

int main() {
	
	int iValor = 100, x;
	int *pValor = &iValor;
	
	for(x = 1; x <= 10; x++) {
		printf("[%d] Endereco de memoria: %#x e valor da variavel: %d\n", x, pValor, *pValor);
		pValor--;
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
