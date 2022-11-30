#include "Game.h"
// INIT
// VARIABLES
void Game::initVariables()
{
	this->isEndgame = false;
}

// WINDOW
void Game::initWindow()
{
	this->videomode = sf::VideoMode(800, 600);
	this->window = new sf::RenderWindow(this->videomode, "Swaglords of Space!", sf::Style::Titlebar | sf::Style::Close);
	this->window->setFramerateLimit(60);
	this->window->setVerticalSyncEnabled(false);
}

// Constructor
Game::Game()
{
	this->initVariables();
	this->initWindow();
}

// Destructor
Game::~Game()
{
	delete window;
}

// Functions
// Run functon
void Game::run()
{
	while (this->window->isOpen())
	{
		this->pollEvents();

		this->update();
		this->render();
	}
}

// Poll events
void Game::pollEvents()
{
	while (this->window->pollEvent(this->ev))
	{
		switch (ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
				this->window->close();
		}
	}
}


// UPDATE
void Game::update()
{
}

// RENDER
void Game::render()
{
	this->window->clear();

	// Draw all stuff


	this->window->display();
}