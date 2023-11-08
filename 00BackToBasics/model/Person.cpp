
#include "../header/Person.h"


Person::Person(int age, std::string name) : age(age), name(name) {}

std::ostream &operator<<(std::ostream &os, const Person &person) {
    os << "Person[age: " << person.age << " name: " << person.name << "]";
    return os;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const std::string &Person::getName() const {
    return name;
}

void Person::setName(std::string name) {
    Person::name = name;
}
