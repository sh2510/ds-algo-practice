
#include <string>
#include <ostream>

#ifndef DS_ALGO_PERSON_H
#define DS_ALGO_PERSON_H

class Person {

private:
    int age;
    std::string name;

public:
    Person(int age, std::string name);

    friend std::ostream &operator<<(std::ostream &os, const Person &person);

    int getAge() const;

    void setAge(int age);

    const std::string &getName() const;

    void setName(std::string name);

};


#endif //DS_ALGO_PERSON_H
