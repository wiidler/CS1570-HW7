#ifndef MAPMAKER_H
#define MAPMAKER_H

#include "region.h"
#include "constants.h"
#include <iostream>
using namespace std;

/***********************CLASS FUNCTION DOCUMENTATION***********************/

// Function: Mapmaker(){}
// Description: Prompts user for input for mapmaker name then initalized map
// Pre: User response with name
// Post: Fully initialized Mapmaker variable

// Function: Mapmaker(const string name);
// Description: Creates Mapmaker variable with default name DEFAULTNAME
// Pre: None
// Post: Fully initialized Mapmaker variable

// Function: string getName() const;
// Description: Returns the private variable value of m_mapmakerName
// Pre: None
// Post: Returns a string corresponding to the mapmaker's name

// Function: int getWins() const;
// Description: Returns the private variable value of m_gamesWon
// Pre: None
// Post: Returns an integer value corresponding to the games of Rock Paper Scissors won

// Function: int getExplored() const;
// Description: Returns the private variable value of m_explored
// Pre: None
// Post: Return an integer value corresponding to the areas explored on the map

// Function: void printMap() const;
// Description: Prints a mapmaker's map
// Pre: A mapmaker with an initalized map
// Post: A cout statement corresponding to the filled out map of the mapmaker

// Function: void initializeMap();
// Description: Creates a map of all unexplored areas for a new mapmaker
// Pre: An initialized Mapmaker variable
// Post: An initialized array for said Mapmaker variable

// Function: int checkMap() const;
// Description: Checks a Mapmaker's map to see if there are any unexplored locations
// Pre: A Mapmaker's map(array)
// Post: Returns an integer corresponding to the number of unexplored areas

// Function: void exploreMap(Region location);
// Description: Chooses a random area to explore, if it has already been explored, nothing happens
// Pre: A mapmaker's map and region to explore
// Post: Either the mapmaker's map is updated corresponding to the region's allergen or nothing happens

// Function: friend Mapmaker playRockPaperScissors(Mapmaker & mapmaker1, Mapmaker & mapmaker2);
// Description: Contains the game rock paper scissors, and then increases m_gamesWon corresponding to the winner of the game, or if they draw, nothing happens
// Pre: 2 mapmakers
// Post: The winner's m_gamesWon is incremented by 1

/***********************CLASS DEFINITIONS***********************/
class Mapmaker{
    public:
        // Constructors
        Mapmaker();
        Mapmaker(const string name);
        // Getter Functions
        string getName() const;
        int getWins() const;
        int getExplored() const;
        // Member Functions
        void printMap() const;
        void initializeMap();
        int checkMap() const;
        void exploreMap(Region location);
        // Friend Functions        
        friend Mapmaker playRockPaperScissors(Mapmaker & mapmaker1, Mapmaker & mapmaker2);
    private:
        // Member Variables
        string m_mapmakerName;
        char m_map[ROWS][COLUMNS];
        int m_gamesWon = 0;
        int m_explored = 0;
};
#endif