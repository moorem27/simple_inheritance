#include "animal.h"
#include "dog.h"
#include "cat.h"
#include <memory>

int main() {
    std::unique_ptr<Animal> animal = std::make_unique<Animal>();
    std::unique_ptr<Animal> dog    = std::make_unique<Dog>();
    std::unique_ptr<Animal> cat    = std::make_unique<Cat>();

    animal->eat();
    cat->eat();
    dog->eat();

    return 0;
}
