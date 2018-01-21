#ifndef PROJECT_CONTROLLER_H_H
#define PROJECT_CONTROLLER_H_H

#include <vector>
#include "Program.h"

class Controller {
private:
    std::vector<Program*> programs;
public:
    Controller();
    ~Controller();
    void runProgram(unsigned int programId);
};

#endif //PROJECT_CONTROLLER_H_H