#include <iostream>
#define VALOR 5 // Tambem da pra definir operacoes, mas nao presta!
#undef VALOR // Autoexplicativo...
// #pragma once -> 2 arquivos .h, recursao de arquivos... Serve pra evitar isso
enum Sports {
    FOOTBALL, BASEBALL, BASKETBALL, VOLLEYBALL
//     0         1          2           3
};

int main (){
    Sports favourite = VOLLEYBALL;
    std::cout << favourite << std::endl;
   /* #ifdef __linux__ // Da pra usar isso com macros
        std::cout << "This is linux"; 
    #endif*/
    return 0;
}