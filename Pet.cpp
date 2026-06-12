#include "Pet.h"

Pet::Pet(const std::string& petName, const std::string& petType, const std::string& petChar)
    : name(petName), type(petType), characteristic(petChar) {
}

Pet::~Pet() {}

void Pet::showInfo() const
{
    std::cout << "Type: " << type << " | Name: " << name << " | Characteristic: " << characteristic << std::endl;
}