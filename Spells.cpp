#include "Spells.h"

void Spells::Setup(std::string _name, std::string _element, float _potency) {
	name = _name;
	element = _element;
	potency = _potency;
}

void Spells::Cast()
{
	std::cout << "You cast " << name << " and it did " << potency << " damage" << std::endl;
}

void Spells::CastUnique() { std::cout << "The base spell"; }
