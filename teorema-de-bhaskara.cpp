// puxar a biblioteca
#include <iostream>
#include <cmath>
using namespace std;
// iniciar a tipagem
int main() {
    // inserir as variaveis
    float a, b, c, x1, x2, delta;
    // inserir valor de a
    cout << "Digite o valor de a: ";
    // receber o valor de a
    cin >> a;
    // inserir o valor de b
    cout << "Digite o valor de b: ";
    // receber o valor de b
    cin >> b;
    // inserir o valor de c
    cout << "Digite o valor de c: ";
    // receber o valor de c
    cin >> c;
    // exponenciar os elementos
    delta = pow(b,2) - 4 * a * c;
    // se
    if (delta >= 0) {
        // raiz 1
        x1 = (-b + sqrt(delta)) / (2 * a);
        // raiz 2
        x2 = (-b - sqrt(delta)) / (2 * a);
        // interface de conclusao do usuario
        cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl;
    }
    //do contrario
    else {
        // resolucao de conclusao do usuario
        cout << "As  equacao nao tem raizes reais: " << endl;
    }
    
    return 0;
}