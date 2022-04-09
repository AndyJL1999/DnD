#include "Player.h"

Player::Player()
{
	xp = 0;
	attackPower = 0;
}
int Player::DiceRoll()
{
	srand(time(0));
	int roll = rand() % 6 + 1;

	return roll;
}
void Player::stats()
{
	std::cout << "XP: " << xp << std::endl;
	if (!invent.empty())
	{
		switch (invent[invent.size() - 1])
		{
		case Crossbow:
			std::cout << "Current Weapon: Crossbow" << std::endl;
			break;
		case Flail:
			std::cout << "Current Weapon: Flail" << std::endl;
			break;
		case Broad_sword:
			std::cout << "Current Weapon: Broad Sword" << std::endl;
			break;
		case Dragon_Slayer:
			std::cout << "Current Weapon: Dragon Slayer" << std::endl;
			break;
		case Spell_of_Gods:
			std::cout << "Current Weapon: Spell of the Gods" << std::endl;
			break;

		}
	}
	else
		std::cout << "Current Weapon: N/A \n";
}
void Player::swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}
void Player::dismount(int chance, char &player, int &choice)
{
	switch (chance)
	{
	case 1:
	{
		int monsterPower;
	
		std::cout << "Monster spotted! Time to fight!\n";
		if (player <= 5)
		{
			monsterPower = 3;
			std::cout << "Monster HP: " << monsterPower << std::endl;
			
			DiceRoll();
			if ((DiceRoll() + attackPower) < monsterPower)
			{
				std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
				std::cout << "Not enough damage! Death awaits!\n";
				choice = 4;
				break;
			}
			std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
			std::cout << "Monster dead.\n";
			std::cout << "______________________________________________________________\n";
			xp += 2;
				
		}
		else if (player > 5 && player <= 11)
		{
			monsterPower = 4;
			std::cout << "Monster HP: " << monsterPower << std::endl;

			DiceRoll();
			if ((DiceRoll() + attackPower) < monsterPower)
			{
				std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
				std::cout << "Not enough damage! Death awaits!\n";
				choice = 4;
				break;
			}
			std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
			std::cout << "Monster dead.\n";
			std::cout << "2 xp earned.\n";
			std::cout << "______________________________________________________________\n";
			xp += 2;
		}
		else if (player > 11 && player <= 16)
		{
			monsterPower = 5;
			std::cout << "Monster HP: " << monsterPower << std::endl;

			DiceRoll();
			if ((DiceRoll() + attackPower) < monsterPower)
			{
				std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
				std::cout << "Not enough damage! Death awaits!\n";
				choice = 4;
				break;
			}
			std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
			std::cout << "Monster dead.\n";
			std::cout << "______________________________________________________________\n";
			xp += 2;
		}
		else if (player > 16 && player <= 21)
		{
			monsterPower = 6;
			std::cout << "Monster HP: " << monsterPower << std::endl;

			DiceRoll();
			if ((DiceRoll() + attackPower) < monsterPower)
			{
				std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
				std::cout << "Not enough damage! Death awaits!\n";
				choice = 4;
				break;
			}
			std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
			std::cout << "Monster dead.\n";
			std::cout << "______________________________________________________________\n";
			xp += 2;
		}
		else if (player > 21 && player <= 26)
		{
			monsterPower = 7;
			std::cout << "Monster HP: " << monsterPower << std::endl;

			DiceRoll();
			if ((DiceRoll() + attackPower) < monsterPower)
			{
				std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
				std::cout << "Not enough damage! Death awaits!\n";
				choice = 4;
				break;
			}
			std::cout << "You did " << DiceRoll() + attackPower << " damage.\n";
			std::cout << "Monster dead.\n";
			std::cout << "______________________________________________________________\n";
			xp += 2;
		}

	}
	break;
	case 2:
	{
		char take;
		if (player <= 5)
		{
			std::cout << "You found a Crossbow!\n";
			std::cout << "Will you take it? Press 't' to take. Press 'n' to leave it.\n";
			std::cin >> take;
			if (take == 't')
			{
				invent.push_back(Crossbow);
				attackPower = Crossbow;
			}
			else if (take == 'n')
			{
				std::cout << "No? Well... Ok!\n";
			}
			while (take != 't' && take != 'n')
			{
				std::cout << take << " is not a valid input. Try again - ";
				std::cin >> take;
				if (take == 't')
				{
					invent.push_back(Crossbow);
					attackPower = Crossbow;
				}
			}
		}
		else if (player > 5 && player <= 11)
		{
			std::cout << "You found a Flail!\n";
			std::cout << "Will you take it? Press 't' to take. Press 'n' to leave it.\n";
			std::cin >> take;
			if (take == 't')
			{
				invent.push_back(Flail);
				attackPower = Flail;
			}
			else if (take == 'n')
			{
				std::cout << "No? Well... Ok!\n";
			}
			while (take != 't' && take != 'n')
			{
				std::cout << take << " is not a valid input. Try again - ";
				std::cin >> take;
				if (take == 't')
				{
					invent.push_back(Flail);
					attackPower = Flail;
				}
			}
		}
		else if (player > 11 && player <= 16)
		{
			std::cout << "You found a Broad Sword!\n";
			std::cout << "Will you take it? Press 't' to take. Press 'n' to leave it.\n";
			std::cin >> take;
			if (take == 't')
			{
				invent.push_back(Broad_sword);
				attackPower = Broad_sword;
			}
			else if (take == 'n')
			{
				std::cout << "No? Well... Ok!\n";
			}
			while (take != 't' && take != 'n')
			{
				std::cout << take << " is not a valid input. Try again - ";
				std::cin >> take;
				if (take == 't')
				{
					invent.push_back(Broad_sword);
					attackPower = Broad_sword;
				}
			}
		}
		else if (player > 16 && player <= 21)
		{
			std::cout << "You found the Dragon Slayer!\n";
			std::cout << "Will you take it? Press 't' to take. Press 'n' to leave it.\n";
			std::cin >> take;
			if (take == 't')
			{
				invent.push_back(Dragon_Slayer);
				attackPower = Dragon_Slayer;
			}
			else if (take == 'n')
			{
				std::cout << "No? Well... Ok!\n";
			}
			while (take != 't' && take != 'n')
			{
				std::cout << take << " is not a valid input. Try again - ";
				std::cin >> take;
				if (take == 't')
				{
					invent.push_back(Dragon_Slayer);
					attackPower = Dragon_Slayer;
				}
			}
		}
		else if (player > 21 && player <= 26)
		{
			std::cout << "You found the Spell of the Gods!\n";
			std::cout << "Will you take it? Press 't' to take. Press 'n' to leave it.\n";
			std::cin >> take;
			if (take == 't')
			{
				invent.push_back(Spell_of_Gods);
				attackPower = Spell_of_Gods;
			}
			else if (take == 'n')
			{
				std::cout << "No? Well... Ok!\n";
			}
			while (take != 't' && take != 'n')
			{
				std::cout << take << " is not a valid input. Try again - ";
				std::cin >> take;
				if (take == 't')
				{
					invent.push_back(Spell_of_Gods);
					attackPower = Spell_of_Gods;
				}
			}
		}
	}
	break;
	case 3:
	{
		std::cout << "Nothing to see here. Keep moving.\n";
		std::cout << "1 xp earned.\n";
		xp++;
	}
	break;
	}

}
void Player::Move()
{
	map();

	int choice = 0;
	char myPlayer = 0;
	int size = 28;
	int count = 0;
	
	do
	{
		stats();
		std::cout << "***************************************\n";
		std::cout << "\tEnter 1 to Roll\n" <<
			"\tEnter 2 to Dismount\n" <<
			"\tEnter 3 to check Inventory\n" <<
			"\tEnter 4 to Quit\n";
		std::cout << "***************************************\n";
		std::cin >> choice;

		system("cls");
		if (choice == 1)
		{
			std::cout << "You rolled a " << DiceRoll() << std::endl;
			swap(myMap[myPlayer], myMap[DiceRoll() + myPlayer]);
			myPlayer = DiceRoll() + myPlayer;
			map();
			count = 0;

		}
		else if (choice == 2)
		{
			if (count > 0)
			{
				std::cout << "Keep moving! Can't dismount again!\n";
				continue;
			}
			int chance = rand() % 3 + 1;
			dismount(chance, myPlayer, choice);
			count++;
		}
		else if (choice == 3)
		{
			DisplayInventory();
		}
		if (myPlayer >= 27)
		{
			stats();
			std::cout << "Prepare you are now facing the dragon!\n\n";
			break;
		}

	} while (choice != 4);

	if (myPlayer >= 27 && xp < 8)
	{
		std::cout << "_______________________________________________________________________\n";
		std::cout << "Alas, the dragon's eyes stare at you and places you under his spell. \n" <<
			 "You try to move but fail to do so and find yourself torched by the dragon's fire. \n" <<
			"If only you had more experience, you could have seen it coming\n";
		std::cout << "_______________________________________________________________________\n";
	}
	else if(myPlayer >= 27 && xp >= 8)
	{
		std::cout << "_______________________________________________________________________\n";
		std::cout << "Due to your cunning and experience, you have defeated the deadly dragon. \n" <<
			"Your quest has ended good sir. You’ve obtained the Chalice of knowledge and all of earth's mysteries are revealed.\n";
		std::cout << "_______________________________________________________________________\n";
	}
	if (choice == 4)
	{
		std::cout << "\nThanks for playing! GOOD BYE!\n";
	}
	
}