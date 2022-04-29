//
// Created by user on 29.04.22.
//

#ifndef DZ10_HUMAN_H
#define DZ10_HUMAN_H

#include "string"
#include "iostream"


class Human {
    std::string name;
    std::string surname;
    std::string midname;
    int age;
public:
    Human(){};
    Human(std::string name, std::string surname, std::string midname, int age){
        this->name = name;
        this->surname = surname;
        this->midname = midname;
        this->age = age;
    }
    ~Human(){};

    virtual void print();
};


#endif //DZ10_HUMAN_H
