#ifndef FOOD_H
#define FOOD_H

#include "objPos.h"

class Food
{
    private: 
    objPos foodPos;

    public:
    void generateFood(objPos blockOff);
//     The random food generation algorithm should be placed here. (copy from PPA3)
//  blockOff should contain the player position, on which the new food should NOT be generated.

    objPos getFoodPos() const;
    // Getter method for obtaining a copy of the current position of the food.

    Food();     //Constructor
    Food(Food const &f);     //Copy Constructor
    Food& operator=(Food const &f);     //Copy Assignment Operator
    ~Food();    //Destructor

};

#endif