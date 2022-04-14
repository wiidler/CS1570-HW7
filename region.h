#ifndef REGION_H
#define REGION_H

#include "constants.h"
#include <iostream>
using namespace std;

/***********************CLASS FUNCTION DOCUMENTATION***********************/

// Function:
// Description:
// Pre:
// Post:

/***********************CLASS DEFINITIONS***********************/
class Region{
    public:
        // Constructors
        Region(){}
        Region(string regionName);
        // Getter Functions
        char getAllergen(int row, int column);
        // Member Functions
        void initializeRegion();
    private:
        // Member Variables
        char m_region[ROWS][COLUMNS];
        string m_regionName = "";
};
#endif