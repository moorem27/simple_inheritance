#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal {
public:
    void eat() override;
};

#endif //CAT_H
