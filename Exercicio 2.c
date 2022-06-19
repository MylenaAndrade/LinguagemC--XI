#include<stdio.h>
/*
Implementar uma função que, dado um vetor
de reais, troque o 1º e o 2º elementos, em
seguida o 3º e o 4º elementos e assim
sucessivamente, até se chegar ao final do vetor.
*/

//mostrando que existe uma função
void preencherVetor(float vetor[], int tamanho);
void exibirVetor(float vetor[], int tamanho);
void trocarElemento(float vetor[], int tamanho);

//declarando uma constante de tamanho para o vetor
#define TAM 10

//função MAIN
void main(){
//declaração de variáveis
	float v[TAM];
//chamando as funções: para varrer o vetor, exibir os elementos desse vetor, trocar os elementos e exibir de novo
	preencherVetor(v, TAM);
	exibirVetor(v, TAM);
	trocarElemento(v,TAM);
	exibirVetor(v, TAM);
}

void preencherVetor(float vetor[], int tamanho){
//declaração de variáveis
	int i;
//gerador de números aleatórios em cada execução diferente do programa	
	srand(time(NULL));
//percorrendo o vetor e atribuindo um valor a ele
	for(i=0; i<tamanho; i++)
	{
		//gerando números aleatórios de 0 a 9
		vetor[i]=rand()%10;
	}
}

void exibirVetor(float vetor[], int tamanho){
//declaração de variáveis
	int i;
//varrendo as posições do vetor e printando os respectivos valores de cada índice	
	for(i=0; i<tamanho; i++)
	{
		printf("%.1f ", vetor[i]);
	}
}

void trocarElemento(float vetor[], int tamanho){
//declaração de variáveis
	int i; 
	float aux;
//varrendo as posições do vetor e trocando a ordem dos elementos
	for(i=0; i<tamanho; i+=2)
	{
		aux=vetor[i];
		vetor[i]= vetor[i+1];
		vetor[i+1]= aux;
	}
	printf("\n\n");
}

