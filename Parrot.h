#pragma once
#include "Pet.h"

class Parrot : public Pet
{
public:
    Parrot(const std::string& parrotName, const std::string& parrotChar = "Talkative and bright");
};