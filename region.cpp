#include "region.h"
#include "mapmaker.h"
#include "constants.h"
#include <iostream>

using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
//Constructors
Region::Region(const string regionName){
    m_regionName = regionName;
    initializeRegion();
    }

// Getter Functions
char Region::getAllergen(int row, int column) const{
    return m_region[row][column];
}
// Member Functions
void Region::initializeRegion(){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            int allergen = rand() % 100 + 1;
            if(allergen <= 21){
                m_region[i][j] = ANIMAL;
            }
            else if(allergen > 21 && allergen <= 58){
                m_region[i][j] = DUST;
            }
            else if(allergen > 58){
                m_region[i][j] = POLLEN;
            }
        }
    }
    return;
}