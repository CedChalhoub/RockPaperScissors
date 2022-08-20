#include "Paper.h"

Paper::Paper() {
    Paper::name = "Paper";
    Paper::nemesis_name = "Rock";
}

string Paper::Get_Name() {
    return Paper::name;
}

string Paper::Get_Nemesis() {
    return Paper::nemesis_name;
}