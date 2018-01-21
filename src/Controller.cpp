#include "Controller.h"
#include "CookProgram.h"
#include "DefrostProgram.h"
#include <stdexcept>
#include <iostream>

Controller::Controller() {
    this->programs.push_back(new DefrostProgram());
    this->programs.push_back(new CookProgram(450));
    this->programs.push_back(new CookProgram(650));
}

Controller::~Controller() {
    for (auto it = this->programs.begin(); it != this->programs.end(); ++it) {
        delete (*it);
    }
}

void Controller::runProgram(unsigned int programId) {
    try {
        //(this->programs[programId])->run();
        // ^ this wouldn't throw an exception
    // just crash for index out of bounds
        (this->programs.at(programId))->run();
    } catch (std::out_of_range& oor) {
        std::cerr << "ERROR! Out of Range: " << oor.what() << std::endl;
    }

}
