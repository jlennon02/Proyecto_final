#include <SFML/Graphics.hpp>
#include "GameTile.h"
#include <vector>

#ifndef GAMEWORLD_H
#define GAMEWORLD_H

class GameWorld {
	sf::Vector2f currentPos;
	sf::Vector2i exitPos; 
	sf::Vector2i playerPos;
	sf::Vector2i enemyPos;
	std::vector<sf::Vector2i> enemyPositions;

	void setUpInitialState();
	void setUpEnemyPositions();
	void setUpTiles();

public:
	sf::Vector2f getPos() const;
	void setPos(float, float);
	std::vector< std::vector<GameTile *> > tiles;
	int gridLength;
	GameWorld();
};

#endif