#include "Map.h"

void Map::map()
{
	std::cout << "\t\t\t\t\t";
	for (int i = 0; i < 28; i++)
	{
		std::cout << myMap[i];
	}
	std::cout << std::endl;
}