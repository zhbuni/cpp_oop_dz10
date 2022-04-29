#include <iostream>

#include "Boss.h"
#include "Student.h"


int main() {
    Boss *b = new Boss("s", "n", "m", 10, 15);
    b->print();
    std::cout << '\n';
    Student *s = new Student("s", "n", "m", 10);
    s->set_on_lesson(true);
    s->print();


    return 0;
}
