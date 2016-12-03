#ifndef WRITER_H
#define WRITER_H

#include <string>
#include <fstream>
#include <sstream>
#include "employess.h"
#include "list.h"

class Writer
{
public:
    void writeDoc(List list,Employess emp);

};

#endif // WRITER_H
