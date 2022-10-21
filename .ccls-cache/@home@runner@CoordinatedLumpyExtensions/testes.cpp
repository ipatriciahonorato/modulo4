#include <iostream>
#include <string>

using namespace std;

int main(){
  cout << "Teste Ex 1" << endl;
	cout << converteSensor(100,100,400) << endl;
  //valor esperado: 0
	cout << converteSensor(400,100,400) << endl;
  //valor esperado: 1
	cout << converteSensor(250,100,400) << endl;
  //valor esperado: 0.5
}