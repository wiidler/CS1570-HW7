// Programmer: Will Weidler
// ID: wawq97
// Date: 4/11/22
// File: hw7.cpp
// Assignment: HW 7
// Purpose: This program follows the user as they travel the land of EET and document the allergies present

#include "allergy.h"
#include "region.h"
#include "mapmaker.h"
#include "constants.h"
#include <iostream>
using namespace std;

int main(){
    srand(278);
    cout << "Achoo! Allergy Season has arrived in the Kingdom of EET." << endl << endl;
    cout << "King Rajmund has tasked the mapmakers to explore and learn about the allergens in the region of Hip Hop Garden." << endl << endl;
    Region playableRegion = Region(REGIONNAME);
    Mapmaker player1;
    cout << "Welcome Mapmaker " << player1.getName() << "!" << endl;
    Mapmaker player2(DEFAULTNAME);
    cout << "Lets also welcome your competetor: " << player2.getName() << "!" << endl;
    int rounds = 1;
    while((rounds <= (MAXROUNDS)) && (player1.checkMap() != FULLEXPLORE) && (player2.checkMap() != FULLEXPLORE)){
        cout << "ROUND " << rounds << ":" << endl;
        if(player1.checkMap() != FULLEXPLORE){
            cout << "\t" << player1.getName() << ":" << endl;
            player1.exploreMap(playableRegion);
            cout << "\t\tNumber of uncharted locations remaining: " << player1.checkMap() << endl;
            playRockPaperScissors(player1,player2);
        }
        if(player2.checkMap() != FULLEXPLORE){
            cout << "\t" << player2.getName() << ":" << endl;
            player2.exploreMap(playableRegion);
            cout << "\t\tNumber of uncharted locations remaining: " << player2.checkMap() << endl;
            playRockPaperScissors(player1,player2);
        }
        cout << endl;
        rounds++;
    }
    printSummary(player1, player2);
    return 0;
}
