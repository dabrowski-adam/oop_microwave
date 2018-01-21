#include <iostream>
#include "Controller.h"

int main() {
    Controller* ctrl = new Controller();
    ctrl->runProgram(0);
    ctrl->runProgram(69); // Index out of range
    ctrl->runProgram(2);
    
    return EXIT_SUCCESS;
}