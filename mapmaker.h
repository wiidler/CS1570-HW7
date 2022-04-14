#ifndef MAPMAKER_H
#define MAPMAKER_H

#include "region.h"
#include "constants.h"
#include <iostream>
using namespace std;

/***********************CLASS FUNCTION DOCUMENTATION***********************/

// Function:
// Description:
// Pre:
// Post:

/***********************CLASS DEFINITIONS***********************/
class Mapmaker{
    public:
        // Constructors
        Mapmaker(){}
        Mapmaker(string name);
        // Getter Functions
        string getName() const;
        int getExplored() const;
        int getWins() const;
        // Member Functions
        void printMap();
        void initializeMap();
        int checkMap() const;
        void exploreMap(Region location);
        void gameWon();
    private:
        // Member Variables
        string m_mapmakerName = DEFAULTNAME;
        char m_map[ROWS][COLUMNS];
        int m_gamesWon = 0;
        int m_explored = 0;
        // Member Functions
        void victory();
};
// Friend Functions        
void playRockPaperScissors(Mapmaker mapmaker1, Mapmaker mapmaker2);
#endif