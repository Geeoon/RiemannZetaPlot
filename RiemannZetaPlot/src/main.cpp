/*
* https://en.wikipedia.org/wiki/Riemann_zeta_function
* https://en.wikipedia.org/wiki/Domain_coloring
*/

#include <math.h>
#include <SFML/Graphics.hpp>
#include "classes/graphics/UIManager.h"

constexpr unsigned int XDIM{ 800 };
constexpr unsigned int YDIM{ 800 };

int main() {
	if (!sf::Shader::isAvailable()) {
		return -1;
	}

	sf::Shader* shader{ new sf::Shader };
	if (!shader->loadFromFile("src/shaders/riemann.frag", sf::Shader::Fragment)) {
		return -1;
	}

	UIManager ui{ XDIM, YDIM, shader };
	
	shader->setUniform("viewportSize", sf::Vector2f{ ui.getWindowSize() });

	while (ui.isOpen()) {
		ui.update();
		ui.pollEvents();
	}
	return 0;
}