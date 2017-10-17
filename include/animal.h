#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
public:
    virtual void eat() { std::cout << "I eat food" << std::endl; }
};


#endif //ANIMAL_H
