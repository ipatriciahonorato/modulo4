/*
4 - Faça duas funções que recebem um vetor com 4 posições que contém o valor da distância de um pequeno robô até cada um dos seus 4 lados.
A primeira função deve retornar a direção de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a segunda função deve retornar esta maior distância.
*/


#include <iostream>
#include <string>

using namespace std;


string dirMaiorDist(int Vetor[]){
  // Escreva a função aqui
  string direcao;
  
  if (Vetor[0] > Vetor [1] && Vetor [0] > Vetor[2] && Vetor [0] > Vetor [3]){
    direcao = "Direita";
    return direcao;
  }  else if  (Vetor[1] > Vetor [0] && Vetor [1] > Vetor[2] && Vetor [1] > Vetor[3]){
    direcao = "Esquerda";
    return direcao;
  }  else if  (Vetor[2] > Vetor [0] && Vetor [2] > Vetor[1] && Vetor [2] > Vetor [3]){
    direcao = "Frente";
    return direcao;
  }  else if  (Vetor[3] > Vetor [0] && Vetor [3] > Vetor[1] && Vetor [3]  > Vetor [2]){
    direcao = "Trás";
    return direcao;
}
  return "None";

}

int maiorDist(int Vetor[]){
  // Escreva a função aqui
  int maior = -1;
  for (int i = 0; i <= 3; i++){
    if (Vetor[i] > maior){
      maior = Vetor[i];
    }
  }
  return maior;
}



// Descomente a função main abaixo para testar o exercício 3
int main(){
  //Considere que os valores sempre serão distintos
  //Considere valores de distância inteiros entre 0 e 100
  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes [4] = {0, 20, 100, 50};
  cout << dirMaiorDist(posicoes) << endl;
  //valor esperado: Frente
  cout << maiorDist(posicoes) << endl;
  //valor esperado: 100
  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes2 [4] = {95, 70, 80, 50};
  cout << dirMaiorDist(posicoes2) << endl;
  //valor esperado: Direita
  cout << maiorDist(posicoes2) << endl;
  //valor esperado: 95
  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes3 [4] = {10, 0, 50, 60};
  cout << dirMaiorDist(posicoes3) << endl;
  //valor esperado: Tras
  cout << maiorDist(posicoes3) << endl;
  //valor esperado: 60
  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes4 [4] = {54, 55, 30, 0};
  cout << dirMaiorDist(posicoes4) << endl;
  //valor esperado: Esquerda
  cout << maiorDist(posicoes4) << endl;
  //valor esperado: 55
}
