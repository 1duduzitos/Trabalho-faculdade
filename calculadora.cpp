#include <iostream>
using namespace std;

int main() {
    int a, b;
    char operacao;

    cout << "Digite o primeiro numero: ";
    cin >> a;

    cout << "Digite a operacao (+ - * /): ";
    cin >> operacao;

    cout << "Digite o segundo numero: ";
    cin >> b;

    if (operacao == '+') {
        cout << "Resultado: " << a + b;
    } 
    else if (operacao == '-') {
        cout << "Resultado: " << a - b;
    } 
    else if (operacao == '*') {
        cout << "Resultado: " << a * b;
    } 
    else if (operacao == '/') {
        if (b != 0)
            cout << "Resultado: " << a / b;
        else
            cout << "Erro: divisao por zero!";
    } 
    else {
        cout << "Operacao invalida!";
    }

    return 0;
}
