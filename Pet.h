#pragma once
#include <string>
#include <iostream>

class Pet
{
protected:
    std::string name;
    std::string type;
    std::string characteristic;

public:
    Pet(const std::string& petName, const std::string& petType, const std::string& petChar);
    virtual ~Pet();

    virtual void showInfo() const;
};