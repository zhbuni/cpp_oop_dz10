//
// Created by user on 29.04.22.
//

#include "Student.h"

void Student::print() {
    Human::print();
    std::cout << "On lesson: " << on_lesson;
}

void Student::set_on_lesson(bool status) {
    this->on_lesson = status;
}

bool Student::get_on_lesson() {
    return this->on_lesson;
}
