/* Exemplo 3A de uso de vetores

   Um vetor quando � criado possui lixo de mem�ria em cada posi��o dele.

   Uma solu��o, � durante a declara��o j� inicializar o vetor com uma lista de valores.
   O tamanho do vetor ser� a quantidade de itens na lista.

   S� � poss�vel passar uma lista de valores para o vetor em sua declara��o.

   S� que esta solu��o n�o � flex�vel, caso se queira alterar o tamanho do vetor
   atrav�s de constantes.
*/

#include<conio.h>
#include<stdio.h>

int main(){
	int notas[] = {0,0,0,0,0,0,0,0,0,0}, indice;

	printf("\n\nListagem de Dados:");
	for(indice = 0; indice < 10; indice++){
	    printf("\n nota %2d = %3d",indice,notas[indice]);
	}
    printf("\n\nDigite qualquer tecla para encerrar...");
	getch();
	return 0;
}
