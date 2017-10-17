#include "animal.h"
#include "dog.h"
#include <memory>

int main() {
    std::shared_ptr<Animal> animal = std::make_shared<Animal>();
    std::shared_ptr<Animal> dog    = std::make_shared<Dog>();
    animal->eat();
    dog->eat();

    return 0;
}
