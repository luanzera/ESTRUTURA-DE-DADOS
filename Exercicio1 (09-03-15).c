/* Estrutura de Dados com Algoritmos e C antes do nome do ponteiro. Sendo assim, qualquer 
operação realizada será feita no endereço de memória apontado pelo ponteiro. O programa 1. 
demostra autilização de ponteiros para acesso à memória. Exemplo de uso de ponteiros */

#include <stdio.h>

int main (void)
{
  	int *piValor; /* ponteiro para inteiro */
  	int iVariavel = 1;
  	piValor = &iVariavel; /* pegando o endereço de memória da variável */
  	
  	printf ("Endereco: %d\n", piValor);
  	printf ("Valor : %d\n", *piValor);
  
  	*piValor = 18011;
  	printf ("Valor alterado: %d \n", iVariavel);
  	printf ("Endereco : %d \n", piValor);
  	
  	return 0;
}
