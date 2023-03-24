#ifndef AMPHIBIANS_H
#define AMPHIBIANS_H

#include "../vertebrates.h"

class Amphibian : public Vertebrate
{
public:
    Amphibian() = default;
    Amphibian(std::string description);
    virtual ~Amphibian();

private:
};

#endif