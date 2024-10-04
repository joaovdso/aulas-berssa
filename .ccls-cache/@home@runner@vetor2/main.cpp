#include <iostream>

using namespace std;

int main() {
    int numeros[5];

    // Solicitar ao usuário que preencha o vetor
    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor para a posição " << i << ": ";
        cin >> numeros[i];
    }
    // Complete o código para ordenar o vetor e exibir os valores ordenados
    
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
    cout << "Valores ordenados: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
