#include<stdio.h>
/*
Implementar uma fun��o que, dado um vetor
de reais, troque o 1� e o 2� elementos, em
seguida o 3� e o 4� elementos e assim
sucessivamente, at� se chegar ao final do vetor.
*/

//mostrando que existe uma fun��o
void preencherVetor(float vetor[], int tamanho);
void exibirVetor(float vetor[], int tamanho);
void trocarElemento(float vetor[], int tamanho);

//declarando uma constante de tamanho para o vetor
#define TAM 10

//fun��o MAIN
void main(){
//declara��o de vari�veis
	float v[TAM];
//chamando as fun��es: para varrer o vetor, exibir os elementos desse vetor, trocar os elementos e exibir de novo
	preencherVetor(v, TAM);
	exibirVetor(v, TAM);
	trocarElemento(v,TAM);
	exibirVetor(v, TAM);
}

void preencherVetor(float vetor[], int tamanho){
//declara��o de vari�veis
	int i;
//gerador de n�meros aleat�rios em cada execu��o diferente do programa	
	srand(time(NULL));
//percorrendo o vetor e atribuindo um valor a ele
	for(i=0; i<tamanho; i++)
	{
		//gerando n�meros aleat�rios de 0 a 9
		vetor[i]=rand()%10;
	}
}

void exibirVetor(float vetor[], int tamanho){
//declara��o de vari�veis
	int i;
//varrendo as posi��es do vetor e printando os respectivos valores de cada �ndice	
	for(i=0; i<tamanho; i++)
	{
		printf("%.1f ", vetor[i]);
	}
}

void trocarElemento(float vetor[], int tamanho){
//declara��o de vari�veis
	int i; 
	float aux;
//varrendo as posi��es do vetor e trocando a ordem dos elementos
	for(i=0; i<tamanho; i+=2)
	{
		aux=vetor[i];
		vetor[i]= vetor[i+1];
		vetor[i+1]= aux;
	}
	printf("\n\n");
}

