//
// Created by user on 29.04.22.
//

#ifndef DZ10_STUDENT_H
#define DZ10_STUDENT_H


#include "Human.h"


class Student: public Human{
    bool on_lesson;
public:
    using Human::Human;
    void print() override;

    bool get_on_lesson();
    void set_on_lesson(bool status);
};


#endif //DZ10_STUDENT_H
