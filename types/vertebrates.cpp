#include <iostream>

#include "vertebrates.h"

Vertebrate::Vertebrate(std::string_view description)
 : Animal(description) {}

Vertebrate::~Vertebrate() {}

void Vertebrate::breathe()
{
    std::cout << "Vertibrate is breathing." << std::endl;
}
