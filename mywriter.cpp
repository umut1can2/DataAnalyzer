#include "mywriter.h"
#include <iostream>
using namespace std;

void Writer::writeDoc(List list,Employess emp)
{

    string pathName = list.getPath();
    ofstream document(pathName, ios::app | ios::binary);

    int x=list.ids.back() + 1;

    document << emp.getName() << " " << emp.getJob() << " " << emp.getSalary() << " " << x << "\n";
    document.close();
}
