#include "Scissors.h"

Scissors::Scissors() {
    Scissors::name = "Scissors";
    Scissors::nemesis_name = "Paper";
}

string Scissors::Get_Name() {
    return Scissors::name;
}

string Scissors::Get_Nemesis() {
    return Scissors::nemesis_name;
}
