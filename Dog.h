#pragma once
#include "Pet.h"

class Dog : public Pet
{
public:
    Dog(const std::string& dogName, const std::string& dogChar = "Loyal and energetic");
};