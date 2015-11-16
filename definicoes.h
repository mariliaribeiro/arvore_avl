#ifndef __definicoes_h
#define __definicoes_h

#include<stdio.h>
#include<stdlib.h>

typedef struct node Node; 
typedef struct arvoreBinaria Arvore;
//typedef struct alturaSubArvores Altura;

struct node {
	int valor; //element
	Node *sae; //sub árvore a esquerda
	Node *sad; //sub árvore a direita	
	int alturaEsquerda, alturaDireita;
	
	//Altura altura;
};

struct arvoreBinaria {
	Node* raiz;
};

/*struct alturaSubArvores{
	int alturaDireita;
	int alturaEsquerda;
}*/
#endif
