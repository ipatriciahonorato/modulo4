/*
6 - Escreva uma função que vai "dirigindo" virtualmente um robô e através de 4 sensores em cada um dos 4 pontos do robo ("Direita", "Esquerda", "Frente", "Tras").
A cada passo, ele verifica as distâncias aos objetos e vai mapeando o terreno para uma movimentação futura.
Ele vai armazenando estas distancias em um vetor fornecido como parâmetro e retorna a ultima posicao preenchida do vetor.
Esta função deve ir lendo os 4 sensores até que um comando de pare seja enviado.
Para simular os sensores e os comandos de pare, use as funções já construídas nos ítens anteriores e em um looping contínuo até que um pedido de parada seja enviado pelo usuário.
A função final deve utilizar as funções declaradas acima para ler os sensores e o movimento do robô e no final percorrer o vetor e mostrar o movimento a cada direção na maior distância a cada movimento.
*/

#include <iostream>
#include <string>

using namespace std;

int drive(int vector[]){

  int vectorDistance[4] = {};
  string command[4] = {"Direita", "Esquerda", "Frente", "Trás"};
  string directions[4] = {};

  for (int i=0; i <=3; i++) {
    vectorDistance[i] = vector[i];
  }
  int n = 4;
    
    for(int i=0;i<n;i++){		
      
		for(int j=i+1;j<n;j++){
      
			if(vectorDistance[i]<vectorDistance[j])
			{

				int temp = vectorDistance[i];
        directions[i]= i;
				vectorDistance[i] = vectorDistance[j];
				vectorDistance[j] = temp;
        directions[i] = j;
        
			}
      
		}
	}

  for (int i = 0; i<=3; i++){
    for (int j =0; j<= 3; j++){
      if (vectorDistance[j] == vector[i]){
        directions[j] = command[i];
      }
    }
  }
	cout<< vectorDistance[0] <<endl;
	cout<< vectorDistance[1] <<endl;
	cout<< vectorDistance[2] <<endl;
	cout<< vectorDistance[3] <<endl;
  cout<< " " << endl;
 	cout<< directions[0] <<endl;
	cout<< directions[1] <<endl;
	cout<< directions[2] <<endl;
	cout<< directions[3] <<endl; 

  return -1;
}

int main(){

  int positions [4] = {0,20,100,50};
  
  cout << drive(positions);
  
}
