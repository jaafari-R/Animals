#ifndef INVERTEBRATES_H
#define INVERTEBRATES_H

#include "../animal.h"

/**
 * Animals without a backbone are Vertebrates
*/
class Invertebrate : public Animal
{
public:
    Invertebrate() = default;
    Invertebrate(std::string_view description);
    virtual ~Invertebrate();

    virtual void breathe();
private:
};

#endif