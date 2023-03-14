// puxar a biblioteca
#include <iostream>
#include <cmath>
using namespace std;
// iniciar a tipagem
int main() {
    // inserir as variaveis
    float hipotenusa, cateto1, cateto2;
    // inserir o valor do cateto1
    cout << "Digite o valor do cateto1: ";
    // receber valor do cateto1
    cin >> cateto1;
    // inserir valor do cateto2
    cout << "Digite o valor do cateto2: ";
    // receber valor do cateto2
    cin >> cateto2;
    // realizar a equacao
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    // interface de conclusao do usuario
    cout << "A hipotenusa eh: " << hipotenusa << endl;
    
    return 0;
}