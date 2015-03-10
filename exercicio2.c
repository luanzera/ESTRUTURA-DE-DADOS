#include <stdio.h>

int main() {
	
	int opcao;
	
	opcao = 0;
	while(opcao < 4) {
		
		printf("\n \n | 1 - VETOR | 2 - MATRIZ | 3 - PONTEIROS | 4 - SAIR | \n \n Escolha a opcao do menu: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1: { printf("\n Voce escolheu a opcao Vetor."); break; };
			case 2: { printf("\n Voce escolheu a opcao Matriz."); break; };
			case 3: { printf("\n Voce escolheu a opcao Ponteiros."); break; };
			case 4: { printf("\n Voce escolheu a opcao Sair."); break; };
			default: { printf("\n Opcao invalida."); break; };
		}
	}
	
	printf("\n Voce saiu do menu.");
	system("PAUSE");
	
	return 0;
}
