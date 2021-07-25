#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
class UIManager {
public:
	UIManager(sf::Shader* s);
	UIManager(unsigned int x, unsigned int y, sf::Shader* s);
	void update();
	void pollEvents();
	bool isOpen();
	sf::Vector2u getWindowSize();

private:
	bool isPanning;
	float zoom;
	sf::RenderWindow window;
	sf::Vector2f position;
	sf::Vector2i mousePosition;
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Shader* shader;
};