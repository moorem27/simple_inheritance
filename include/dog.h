#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal {
public:
    void eat() override;
};


#endif //DOG_H
