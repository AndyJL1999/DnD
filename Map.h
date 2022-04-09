#pragma once
#ifndef MAP_H
#define MAP_H
#include <iostream>
class Map
{
protected:
	char myMap[28] = { 'P','*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', 
		'*', '*','*','*','*','*','*','*','*','*','*','*','*','*','*','D' };
	
public:
	void map();
};

#endif