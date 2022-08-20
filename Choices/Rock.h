#include <string>

using namespace std;

class Rock
{
private:
    string name;
    string nemesis_name;

public:
    Rock();
    string Get_Name();
    string Get_Nemesis();
};

