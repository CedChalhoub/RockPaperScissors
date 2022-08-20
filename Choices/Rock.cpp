#include "Rock.h"

Rock::Rock(){
    Rock::name = "Rock";
    Rock::nemesis_name = "Scissors";
}

string Rock::Get_Name() {
    return Rock::name;
}

string Rock::Get_Nemesis() {
    return Rock::nemesis_name;
}