// puxar a biblioteca
#include <iostream>
using namespace std;
// iniciar a tipagem
int main() {
    // inserido as variaveis
    float base, altura, area;
   // interface do usuario para inserir a base
   cout << "Digite a base do triangulo: ";
   // recebimento do valor da base
   cin >> base;
   // interface do usuario para inserir a altura
   cout << "Digite a altura do triangulo: ";
   // recebimento do valor da altura
   cin >> altura;
   // calculo da area
   area = (base * altura) / 2;
   // interface de conclusao do usuario
   cout << "A area do triangulo eh: " << area << endl;
   
    return 0;
}