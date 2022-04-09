#include "Inventory.h"

void Inventory::DisplayInventory()
{
	std::cout << "\t\t\tInventory\n";
	std::cout << "______________________________________________________________\n";
	for (int i = 0; i < invent.size(); i++)
	{
		switch (invent[i])
		{
		case Crossbow:
			std::cout << "\t\tCrossbow - " << invent[i] << " dmg" << std::endl;
			continue;
		case Flail:
			std::cout << "\t\tFlail - " << invent[i] << " dmg" << std::endl;
			continue;
		case Broad_sword:
			std::cout << "\t\tBroad Sword - " << invent[i] << " dmg" << std::endl;
			continue;
		case Dragon_Slayer:
			std::cout << "\t\tDragon Slayer - " << invent[i] << " dmg" << std::endl;
			continue;
		case Spell_of_Gods:
			std::cout << "\t\tSpell of the Gods - " << invent[i] << " dmg" << std::endl;
			continue;
			
		}

	}
	std::cout << "______________________________________________________________\n";
}