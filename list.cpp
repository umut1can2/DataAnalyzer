#include "list.h"
#include <fstream>
#include <sstream>
#include <string.h>
#include <iostream>
#include "mywriter.h"
using namespace std;
List::List(std::string path)
{
    this->filePath = path;
    ifstream doc(path);

    string content;

    while(!doc.eof()){
        getline(doc,content);
        Employess superEmployess(content);

        emps.push_back(superEmployess);
    }

    doc.close();

    ifstream gId(filePath);

    string con;

    while(!gId.eof()){
        getline(gId,con);
        Employess sEmployess(con);

        if(sEmployess.getId() < 0)
        {
            ids.push_back(0);
        }else{
            ids.push_back(sEmployess.getId());
        }
    }

    gId.close();
}

string List::getPath()
{
    return filePath;
}

int List::getLastID()
{
    return ids.back();
}

