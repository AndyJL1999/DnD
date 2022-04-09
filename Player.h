#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Map.h"
#include "Inventory.h"

class Player : public Map, public Inventory
{
protected:
	int xp;
	int attackPower;
public:
	Player();
	int getXP()
	{
		return xp;
	}
	void Move();
	int DiceRoll();
	void swap(char&, char&);
	void stats();
	void dismount(int, char&, int&);

};

#endif