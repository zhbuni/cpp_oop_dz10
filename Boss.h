//
// Created by user on 29.04.22.
//

#ifndef DZ10_BOSS_H
#define DZ10_BOSS_H

#include "Human.h"

class Boss: public Human{
    int number_of_workers;
public:
    Boss(std::string surname, std::string name, std::string midname, int age, int number_of_workers) : Human(name, surname, midname, age){
        this->number_of_workers = number_of_workers;
    }
    void print() override;
};


#endif //DZ10_BOSS_H
