#ifndef REGION_H
#define REGION_H

#include "constants.h"
#include <iostream>
using namespace std;

/***********************CLASS FUNCTION DOCUMENTATION***********************/

// Function: Region(){}
// Description: Does absolutley nothing, a check to see if it complies correctly
// Pre: None
// Post: None

// Function: Region(const string regionName);
// Description: Fully initalizes a region with name and allergens
// Pre: A name is required
// Post: A region under class Region is fully initialized

// Function: char getAllergen(int row, int column) const;
// Description: Returns the private value of a certain point on the region array
// Pre: Inputs for rows and columns
// Post: Returns a character

// Function: void initializeRegion();
// Description: Initializes the region to random allergens
// Pre: A Region varible needs to be initialized
// Post: An array with 10 rows and 4 columns is created with random allergens

/***********************CLASS DEFINITIONS***********************/
class Region{
    public:
        // Constructors
        Region(){}
        Region(const string regionName);
        // Getter Functions
        char getAllergen(int row, int column) const;
        // Member Functions
        void initializeRegion();
    private:
        // Member Variables
        char m_region[ROWS][COLUMNS];
        string m_regionName = "";
};
#endif