#include "PolyDemo.h"


void PolyDemo::DoDemo() 
{
	std::cout << "Start of Poly Demo" << std::endl;

	//Spells* spell;
	std::list<Spells*> spellList;
	FireSpell fireSpell;
	FireSpell firaga;

	fireSpell.Setup("Fireball", "Fire", 8);
	firaga.Setup("Firaga", "Fire", 50);

	spellList.push_back(&fireSpell);
	spellList.push_back(&firaga);

	for (Spells* s : spellList) {
		s->Cast();
		s->CastUnique();
	}
}