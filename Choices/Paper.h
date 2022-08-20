#pragma once
#include <string>

using namespace std;

class Paper
{
private:
    string name;
    string nemesis_name;
public:
    Paper();
    string Get_Name();
    string Get_Nemesis();
};

