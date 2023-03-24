#ifndef VERTEBRATES_H
#define VERTEBRATES_H

#include "../animal.h"

/**
 * Animals with a backbone are Vertebrates
*/
class Vertebrate : public Animal
{
public:
    Vertebrate() = default;
    Vertebrate(std::string_view description);
    virtual ~Vertebrate();

    virtual void breathe();
private:
};

#endif