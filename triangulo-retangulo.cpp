// puxar a biblioteca
#include <iostream>
using namespace std;
// iniciar a tipagem
int main() {
    // inserido as variaveis
    float cateto1, cateto2, area;
   // interface do usuario para inserir a cateto1 do triangulo-retangulo
   cout << "Digite o cateto1 do triangulo-retangulo: ";
   // recebimento do valor da cateto1 do retangulo
   cin >> cateto1;
   // interface do usuario para inserir a cateto2 do triangulo-retangulo
   cout << "Digite o cateto2 do triangulo-retangulo: ";
   // recebimento do valor do cateto2 do triangulo-retangulo
   cin >> cateto2;
   // calculo da area do triangulo-retangulo
   area = (cateto1 * cateto2) / 2;
   // interface de conclusao do usuario
   cout << "A area do triangulo-retangulo eh: " << area << endl;
   
    return 0;
}