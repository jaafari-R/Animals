#include <iostream>

#include "animal.h"


Animal::Animal(const std::string_view &description) 
 : m_description(description) {}

Animal::~Animal() {}

void Animal::breathe() const
{
    std::cout << "Animal is breathing" << std::endl;
}