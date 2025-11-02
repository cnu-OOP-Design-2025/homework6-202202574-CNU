#include <iostream>
#include "bird.h"

class Duck : public Bird {
public:
    Duck() : Bird("Duck") {
        cry();
    }
    void cry() {
        std::cout << "Quack" << std::endl;
    }
    virtual ~Duck() {
        cry();
    }
};

class Penguin : public Bird {
public:
    Penguin() : Bird("Penguin") {
        cry();
    }
    void cry() {
        std::cout << "Squawk" << std::endl;
    }
    void fly() {
        std::cout << "This bird can't fly." << std::endl;
    }
    virtual ~Penguin() {
        cry();
    }
};

class Eagle : public Bird {
public:
    Eagle() : Bird("Eagle") {
        cry();
    }
    void cry() {
        std::cout << "Screech" << std::endl;
    }
    void swim() {
        std::cout << "This bird can't swim." << std::endl;
    }
    virtual ~Eagle() {
        cry();
    }
};

