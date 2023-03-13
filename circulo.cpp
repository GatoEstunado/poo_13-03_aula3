// puxar a biblioteca
#include <iostream>
using namespace std;
// iniciar a tipagem
int main() {
    // inserido as variaveis
    float raio, area;
    // valor da constante PI
    const float PI = 3.14159;
   // interface do usuário
    cout << "Digite o raio do circulo: ";
    // recebimento do valor dado
    cin >> raio;
    // dado os comandos para calcular
    area = PI * raio * raio;
    // interface de conclusão do usuario
    cout << "A area do circulo eh: " << area << endl;
    
    return 0;
}