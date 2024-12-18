#ifndef OBJPOS_ARRAYLIST_H
#define OBJPOS_ARRAYLIST_H

#define ARRAY_MAX_CAP 200

#include "objPos.h"

class objPosArrayList
{
    private:
        objPos* aList;              //Pointer of type objPos, a previously created class
        int listSize;
        int arrayCapacity;

    public:
        objPosArrayList();      //Constructor
        objPosArrayList(int foodListSize);
        ~objPosArrayList();     //Destructor
        objPosArrayList(objPosArrayList const &arr);    //Copy constructor
        objPosArrayList& operator=(objPosArrayList const &arr);     //Copy assignment operator 

        int getSize() const;
        void insertHead(objPos thisPos);
        void insertTail(objPos thisPos);
        void removeHead();
        void removeTail();
        
        objPos getHeadElement() const;
        objPos getTailElement() const;
        objPos getElement(int index) const;
        void insertElement (int index, objPos food) const; 
};

#endif