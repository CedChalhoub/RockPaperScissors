#pragma once
#include <string>

using namespace std;

class Scissors
{
    private:
        string name;
        string nemesis_name;
    public:
        Scissors();

        string Get_Name();
        string Get_Nemesis();

};

