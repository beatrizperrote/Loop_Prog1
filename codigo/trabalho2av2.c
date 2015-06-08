#include <stdio.h>
#include <stdlib.h>
int main(){
	int numero;
	int cont;
	int total=0;
	int continuar;
	printf("**************************************\n* Trabalho 2 de Programacao de Computadores I\n");
	printf("* Curso de Sistemas da informacao\n* Aluno: Beatriz Perrote Cunha - matricula: 0050009818\n");
	printf("* Tabuada de Adicao\n***************************************");
	printf("\nTabuada de Adicao\n=================");
	//Uma estrutura de repetição onde primeiro é executado o codigo e depois verifica a continuação por parte do usuário.
	do{
		//Verificação se o número digitado pelo usuário atende ao que foi solicitado.
		do{
			printf("\nEntre com um numero de [1-9] : ");
			scanf("%d", &numero);	
		}while(numero < 1 || numero > 9);
		
		printf("Tabuada do %d", numero);
		printf("\n=================\n");
		
		//Um for para montar a tabuada solicitada.
		for(cont=1; cont<=10; cont++){
			total = numero + cont;
			printf("%d + %d = %d\n", numero, cont, total);
			total = 0;
		}
		//Verificação de continuação de execução do código ou termino do mesmo.
		printf("Deseja continuar? Digite 1-Sim e 0-Nao:");
		scanf("%d", &continuar);
	}
	while(continuar == 1);
	
	printf("\nAte breve, meu nome eh Beatriz Perrote e espero que tenha aprendido a tabuada de adicao!");
	return 0;
}
