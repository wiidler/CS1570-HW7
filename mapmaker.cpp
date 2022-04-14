#include "mapmaker.h"
#include "region.h"
#include "constants.h"
#include <iostream>

using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
//Constructors
Mapmaker::Mapmaker(string name = DEFAULTNAME){
    m_mapmakerName = name;
}
// Getter Functions
string Mapmaker::getName() const{
    return m_mapmakerName;
}
int Mapmaker::getExplored() const{
    return m_explored;
}
int Mapmaker::getWins() const{
    return m_gamesWon;
}
// Member Functions
void Mapmaker::printMap(){
    for(int i = 0; i < ROWS; i++){
        cout << "\t\t";
        for(int j = 0; j < COLUMNS; j++){
            cout << m_map[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

void Mapmaker::initializeMap(){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            m_map[i][j] = 'U';
        }
    }
    return;
}

int Mapmaker::checkMap() const{
    int unchartedLocations = 0;
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            if(m_map[i][j] == 'U'){
                unchartedLocations++;
            }
        }
    }
    return unchartedLocations;
}

void Mapmaker::exploreMap(Region location){
    int randRow = rand() % 3;
    int randColumn = rand() % 9;
    cout << "\tExploring location [" << randRow << "][" << randColumn << "]..." << endl;
    if(m_map[randRow][randColumn] == 'U'){
        m_map[randRow][randColumn] = location.getAllergen(randRow, randColumn);
        m_explored++;
        if(m_map[randRow][randColumn] == 'A'){
            cout << "\tAnimals shed serious dander!" << endl;
        }
        else if(m_map[randRow][randColumn] == 'P'){
            cout << "\tPollen travels a long trajectory!" << endl;
        }
        else if(m_map[randRow][randColumn] == 'D'){
            cout << "\tDust will never leave!" << endl;
        }
    }
    else{
        cout << "\tAchoo! This area is already explored!" << endl;
    }
    return;
}

void Mapmaker::gameWon(){
    victory();
    return;
}

void Mapmaker::victory(){
    m_gamesWon++;
}

void playRockPaperScissors(Mapmaker mapmaker1, Mapmaker mapmaker2){
    if((mapmaker1.checkMap() > 0) && (mapmaker2.checkMap() > 0)){
        int chance = rand() % 2;
        string choice1 = "";
        string choice2 = "";
        if(chance == 0){
            choice1 = "rock";
        }
        else if(chance == 1){
            choice1 = "paper";
        }
        else if (chance == 2){
            choice1 = "scissors";
        }
        chance = rand() % 2;
        if(chance == 0){
            choice2 = "rock";
        }
        else if(chance == 1){
            choice2 = "paper";
        }
        else if(chance == 2){
            choice2 = "scissors";
        }
        if((choice1 == "rock" && choice2 == "rock") || (choice1 == "paper" && choice2 == "paper") || (choice1 == "scissors" && choice2 == "scissors")){
            cout << "\tRock Paper Scissors! It was a draw!" << endl;
        }
        else if((choice1 == "rock" && choice2 == "scissors") || (choice1 == "paper" && choice2 == "rock") || (choice1 == "scissors" && choice2 == "paper")){
            cout << "\tRock Paper Scissors! " << mapmaker1.getName() << " won!"<< endl;
            mapmaker1.gameWon();
        }
        else if((choice2 == "rock" && choice1 == "scissors") || (choice2 == "paper" && choice1 == "rock") || (choice2 == "scissors" && choice1 == "paper")){
            cout << "\tRock Paper Scissors! " << mapmaker2.getName() << " won!" << endl;
            mapmaker2.gameWon();
        }
        else{
            cout << "something went wrong, fix this will!" << endl;
        }
    }
    return;
}