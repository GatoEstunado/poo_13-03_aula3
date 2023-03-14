// puxar a biblioteca
#include <iostream>
using namespace std;
// iniciar a tipagem
int main() {
    // inserido as variaveis
    float base, altura, area;
   // interface do usuario para inserir a base do retangulo
   cout << "Digite a base do retangulo: ";
   // recebimento do valor da base do retangulo
   cin >> base;
   // interface do usuario para inserir a altura do retangulo
   cout << "Digite a altura do retangulo: ";
   // recebimento do valor da altura do retangulo
   cin >> altura;
   // calculo da area do retangulo
   area = base * altura;
   // interface de conclusao do usuario
   cout << "A area do retangulo eh: " << area << endl;
   
    return 0;
}