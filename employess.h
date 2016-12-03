#ifndef EMPLOYESS_H
#define EMPLOYESS_H

#include <string>
#include <sstream>
#include <iostream>
class Employess
{
public:
    Employess(std::string info);
    std::string getName();
    std::string getfName();
    std::string getsName();
    std::string getJob();
    int getId();
    int getSalary();
    void print();
private:
    std::string fName;
    std::string sName;
    std::string job;
    int salary;
    int id;
};

#endif // EMPLOYESS_H
