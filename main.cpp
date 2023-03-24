#include <iostream>

#include "animal.h"
#include "types/vertebrates.h"
#include "types/invertebrates.h"


int main()
{

    Animal animal1("A beautiful animal.");
    animal1.breathe();
    
    Vertebrate vertebrate1("A beautiful vertibrate.");
    Invertebrate invertebrate1("A beautiful invertibrate.");
    
    vertebrate1.breathe();
    invertebrate1.breathe();
}