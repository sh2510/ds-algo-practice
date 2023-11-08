
#include <iostream>
#include "../header/Person.h"

int main() {
    std::cout << "Hello from Basics!" << std::endl;

    Person *person01 = new Person(31, "Rickshaw");
    std::cout << person01 << std::endl;
    std::cout << *person01 << std::endl;
    std::cout << person01 -> getName() << std::endl;

    person01 ->setName("DamnShaw");

    std::cout << person01 -> getName() << std::endl;

    return 0;


}