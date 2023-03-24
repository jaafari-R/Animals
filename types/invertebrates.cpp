#include <iostream>

#include "invertebrates.h"

Invertebrate::Invertebrate(std::string_view description)
 : Animal(description) {}

Invertebrate::~Invertebrate() {}

void Invertebrate::breathe()
{
    std::cout << "Invertebrate is breathing." << std::endl;
}
