#include <iostream>
#include "employess.h"
#include "list.h"
#include "mywriter.h"
using namespace std;



int main()
{
    List list("/home/ticop/Masaüstü/thisfile.txt");

    vector<string>vec;
    string lineContent;

    fstream iFile(list.getPath());

    //fstream wFile(m_list);

    while(!iFile.eof())
    {
        getline(iFile,lineContent);
        vec.push_back(lineContent);
    }

    vec.erase(vec.begin() + 0);
    fstream inFile;
    inFile.open("/home/ticop/Masaüstü/readfile.txt");
    for(int var = 0; var < vec.size(); ++var)
    {
        cout << vec.at(var) << endl;
        inFile << vec.at(var) << "\n";
        inFile.flush();
        remove("/home/ticop/Masaüstü/a.txt");
        rename("/home/ticop/Masaüstü/b.txt","/home/ticop/Masaüstü/w.txt");
    }

    iFile.close();


    return 0;
}

