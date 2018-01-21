#include "CookProgram.h"
#include <iostream>

CookProgram::CookProgram(unsigned int power) : power(power) {}

CookProgram::~CookProgram() {}

unsigned int CookProgram::getPower() {
    return this->power;
}

void CookProgram::run() {
    std::cout << "Cooking program using power level of " << this->power << "W is running. " << std::endl;
}
