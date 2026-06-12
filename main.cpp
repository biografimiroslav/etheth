#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include <vector>

int main()
{
    Dog dog1("Max");
    Dog dog2("Rocky", "Enjoys playing fetch and barking loudly");

    Cat cat1("Luna");
    Cat cat2("Milo", "Very lazy and loves sleeping in the sun");

    Parrot parrot1("Charlie");
    Parrot parrot2("Rio", "Can mimic human speech perfectly");

    std::cout << "Displaying pet list details:" << std::endl;

    dog1.showInfo();
    dog2.showInfo();
    cat1.showInfo();
    cat2.showInfo();
    parrot1.showInfo();
    parrot2.showInfo();

    std::cout << "Displaying through base class pointers:" << std::endl;
    std::vector<Pet*> zoo;
    zoo.push_back(&dog1);
    zoo.push_back(&cat2);
    zoo.push_back(&parrot2);

    for (const auto& pet : zoo)
    {
        pet->showInfo();
    }

    return 0;
}