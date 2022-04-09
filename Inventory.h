#pragma once
#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <vector>
class Inventory
{
protected:
	enum Weapons {
		Crossbow = 3, Flail = 4, Broad_sword = 5, Dragon_Slayer = 6, Spell_of_Gods = 7,
	};
	std::vector<Weapons> invent;

public:
	void DisplayInventory();

};

#endif