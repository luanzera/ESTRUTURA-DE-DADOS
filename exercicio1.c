15 Estrutura de Dados com Algoritmos e C
antes do nome do ponteiro. Sendo assim, qualquer operação realizada será feita
no endereço de memória apontado pelo ponteiro. O programa 1. demostra a
utilização de ponteiros para acesso à memória.
Programa 1.5: Exemplo de uso de ponteiros

/* programa_matriz_02.c */
#include <stdio.h>

int main (void)
{
int *piValor; /* ponteiro para inteiro */
int iVariavel = 1 1
piValor = &iVariavel; /* pegando o endereço de memória da variável */
11
printf ("Endereco: %d\n", piValor);
printf ("Valor : %d\n", *piValor);
16
*piValor = 18011 8 ;
printf ("Valor alterado: %d\n", iVariavel);
printf ("Endereco : %d\n", piValor);
return 0;
}
