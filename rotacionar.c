#include "rotacionar.h"
#include "getPai.h"
#include "getTipoNo.h"

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

Node* rotacionar(Node* no, int valor){
	Node* noPai;
	int fatorBalanceamento;
	//int fatorBalanceamentoPai = getFatorBalanceamento(altura);
    
    if (no != NULL){
        if (no->valor == valor){
			no->altura = getAltura(no); 
			fatorBalanceamento = getFatorBalanceamento(no, altura);
			
			if (isBalanceado(fatorBalanceamento) != 1){
				getRotacao();		
			}
        }
        else if (no->valor > valor){
			noPai = getPai(no, valor);
            return remover(no->sae, valor);
        }
        else{
			noPai = getPai(no, valor);
            return remover(no->sad, valor);
        }
    }
    return no;	
}

int getAltura(Node no){
	if (no != NULL){
		
	}
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

void getRotacao(Node* no, int fbPai, int fbFilho){
	if (fbPai == 2){
		if(fbFilho == 1 || fbFilho == 0){
			rotacaoSimplesEsquerda(no); //noFilho ocupa o lugar do pai
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


