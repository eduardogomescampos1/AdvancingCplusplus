#include <iostream>

using namespace std;

int multiplicacao (int x, int y) {
    return x*y;
}

double divisao(int x, int y) {
    return (double)x/y;
}

int main() {
    int a,b;
    cout << "Ola!" << endl;
    cout << "Vamos incrementar esse programa para ver se ele funciona no GitHub..." << endl;
    cout << "Coloque dois numeros:";
    cin >> a >> b;
    cout << multiplicacao(a,b) << endl;
    cout << divisao(a,b) << endl;
    return 0;
}

