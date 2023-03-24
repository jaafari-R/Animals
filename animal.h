#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

/**
 * Abstract Animal class - derives different Animal types
*/
class Animal
{
public:
    Animal() = default;
    Animal(const std::string_view &description);
    virtual ~Animal();

    /* Print out the breathing action of an animal */
    virtual void breathe() const;

protected:
    std::string m_description;
};

#endif