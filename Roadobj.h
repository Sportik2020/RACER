#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

struct RoadObj {
	sf::Texture texture;	
	sf::Sprite sprite;
};

void roadObjInit(RoadObj& obj, sf::Vector2f pos, std::string fileName) {
	obj.texture.loadFromFile(fileName);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}

void Update(){}

void RoadObjDraw(sf::RenderWindow& window, RoadObj& obj) {
	window.draw(obj.sprite);
}