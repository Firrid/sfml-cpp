#ifndef GAME_H
#define GAME_H

#include "GameState.h"


class Game
{
private:
	//Variables
	sf::RenderWindow *window;
	sf::Event sfEvent;

	sf::Clock dtClock;
	float dt;//delta time

	std::stack<State*> states;

	//Initialization
	void initWindow();
	void initStates();

public:
	//CConstructors/Destructors
	Game();
	virtual ~Game();


	//Functions:

	//Regular
	void endApplication();

	//Update
	void updateDt();
	void updateSFMLEvents();
	void update();

	//Render
	void render();

	//Core
	void run();
};

#endif
