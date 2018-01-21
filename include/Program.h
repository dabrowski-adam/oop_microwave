#ifndef PROJECT_PROGRAM_H_H
#define PROJECT_PROGRAM_H_H

class Program {
public:
    Program();
    ~Program();
    virtual void run() = 0;
};

#endif //PROJECT_PROGRAM_H_H