#include <iostream>

struct person {
    int age;
    std::string sex;
    bool alive;

    void kill () {
        if (alive) {
        std::cout << "Now he's dead lmao" << std::endl;
        alive = false;
        } else std::cout << "Again?" << std::endl;
    }
} ;

int main () {
    struct person p1;
    p1.age = 70;
    p1.sex = "male";
    p1.alive = true;
    p1.kill();
    std::cout << p1.alive << std::endl;
}
