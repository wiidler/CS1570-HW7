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
        int getWins() const;
        int getExplored() const;
        // Member Functions
        void printMap();
        void initializeMap();
        int checkMap() const;
        void exploreMap(Region location);
        // Friend Functions        
        friend Mapmaker playRockPaperScissors(Mapmaker & mapmaker1, Mapmaker & mapmaker2);
    private:
        // Member Variables
        string m_mapmakerName = DEFAULTNAME;
        char m_map[ROWS][COLUMNS];
        int m_gamesWon = 0;
        int m_explored = 0;
};
#endif