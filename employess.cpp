#include "employess.h"
using namespace std;
Employess::Employess(std::string info)
{
    std::stringstream sSystem(info);
    sSystem >> fName;
    sSystem >> sName;
    sSystem >> job;
    sSystem >> salary;
    sSystem >> id;

}

std::string Employess::getfName()
{
    return fName;
}

std::string Employess::getsName()
{
    return sName;
}

std::string Employess::getName()
{
    return fName + " " + sName;
}

std::string Employess::getJob()
{
    return job;
}

int Employess::getSalary()
{
    return salary;
}

int Employess::getId()
{
    return id;
}
