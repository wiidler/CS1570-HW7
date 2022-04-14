#include "allergy.h"
#include "mapmaker.h"
#include "constants.h"
#include <iostream>

using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
void printSummary(Mapmaker player1, Mapmaker player2){
    cout << player1.getName() << endl;
    cout << "\tMap:" << endl;
    player1.printMap();
    cout << "\tNumber of locations explored: " << player1.getExplored() << endl;
    cout << "\tNumer of Rock Paper Scissors won: " << player1.getWins() << endl;
    cout << player2.getName() << endl;
    cout << "\tMap:" << endl;
    player2.printMap();
    cout << "\tNumber of locations explored: " << player2.getExplored() << endl;
    cout << "\tNumer of Rock Paper Scissors won: " << player2.getWins() << endl;
    return;
}