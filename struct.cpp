#include <iostream>

struct person {
    int age;
    std::string gender;
    bool alive;

    void kill () {
        if (alive) {
        std::cout << "Passed away" << std::endl;
        alive = false;
        } else std::cout << "Can't do that" << std::endl;
    }
} ;

int main () {
    struct person p1;
    p1.age = 70;
    p1.gender = "male";
    p1.alive = false;
    p1.kill();
    std::cout << p1.alive << std::endl;
    std::cout << sizeof(p1) << std::endl;
    return 0;
}
