#include "rotacionar.h"

/* para dia 23/11
 * prova dia 27/11
	-------------------------------------------------------------------------------------
    | Índice | Índice Filho Desbalanceado |           Operações (Rotação)               |
	-------------------------------------------------------------------------------------
	|       |               1             |             símples à esquerda              |          
	|   2   |               0             |             símples à esquerda              |  
	|       |              -1             | dupla c/ filho p/ direita e pai p/ esquerda | 
	-------------------------------------------------------------------------------------
	|       |               1             | dupla c/ filho p/ esquerda e pai p/ direita | 
	|  -2   |               0             |             símples à direita               | 
	|       |              -1             |             símples à direita               |
	-------------------------------------------------------------------------------------
*/


Node* rotacionar(Node* raiz){
	Altura altura;
	Node* noPai;
	int fatorBalanceamento = getFatorBalanceamento(altura);
	//int fatorBalanceamentoPai = getFatorBalanceamento(altura);
	
	if (isBalanceado(fatorBalanceamento) != 1){
		
	}
		
	
	
}

int getAltura(){
	
}

int getFatorBalanceamento(Altura altura){
	return (altura->alturaDireita) - (altura->alturaEsquerda);
}

int isBalanceado(int fatorBalanceamento){
	if(fatorBalanceamento >= -1 && fatorBalanceamento <= 1)
		return 1;
	else
		return 0;
}

Node* getRotacao(Node* no, int fbPai, int fbFilho){
	if (fbPai == 2){
		if(fbFilho == 1 || fbFilho == 0){
			return rotacaoSimplesEsquerda(no);
		}
		else if (fbFilho == -1){
			 rotacaoSimplesDireita(noPai);
			 rotacaoSimplesEsquerda(no);
		}
	}
	else if (fbPai == -2){
		if(fbFilho == -1 || fbFilho == 0){
			return rotacaoSimplesDireita(no);
		}
		else if (fbFilho == 1){			
			 rotacaoSimplesEsquerda(no);
			 rotacaoSimplesDireita(noPai);
		}
	}
}


Node* getPai(){
	
}


