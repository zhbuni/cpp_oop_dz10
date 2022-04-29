//
// Created by user on 29.04.22.
//

#include "Boss.h"

void Boss::print() {
    Human::print();
    std:: cout << "Number of workers is " << number_of_workers << '\n';
}
