#pragma once
#include <iostream>

class Spells
{
public:
	std::string name;
	std::string element;
	float potency;
	virtual void Cast();
	virtual void CastUnique();
	void Setup(std::string, std::string, float);
};

