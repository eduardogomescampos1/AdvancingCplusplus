#include <iostream>
// Mais pra facilitar a leitura mesmo...
typedef int age_t; // Exemplo mais pra ilustrar mesmo, vamos usar uma situacao com byte, que seria mais pratico
typedef unsigned char byte_t;

int main () {
    age_t especificAge = 20;
    std::cout << especificAge << std::endl;
    std::cout << "Somando com 60: " << especificAge + 60 << std::endl;

    byte_t b = 70; // Deixa claro que estamos tratando de um byte, nao de um char qualquer...
    byte_t b2 = 20;
    byte_t b3 = b + b2;
    std::cout << unsigned(b) << std::endl; // A atencao de usar a funcao unsigned() so ocorreu pois era um byte e nao um unsigned char
    std::cout << b + b2 << std::endl; // Armazena como numero!
    std::cout << b3 << std::endl; // Ja eh armazenado como letra!
    return 0;
}