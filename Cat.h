#pragma once
#include "Pet.h"

class Cat : public Pet
{
public:
    Cat(const std::string& catName, const std::string& catChar = "Independent and calm");
};