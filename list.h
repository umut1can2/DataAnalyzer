#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include "employess.h"
using namespace std;
class List
{
public:
    List(std::string path);
    std::string getPath();
    int getLastID();
    std::vector<Employess>emps;
    std::vector<int>ids;
    std::vector<std::string>writ;

private:
    std::string filePath;
    int lastId;
};

#endif // LIST_H
