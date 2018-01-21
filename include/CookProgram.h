#ifndef PROJECT_COOK_PROGRAM_H_H
#define PROJECT_COOK_PROGRAM_H_H

#include "Program.h"

class CookProgram : public Program {
private:
    unsigned int power;
public:
    CookProgram(unsigned int power);
    ~CookProgram();
    unsigned int getPower();
    void run();
};

#endif //PROJECT_COOK_PROGRAM_H_H