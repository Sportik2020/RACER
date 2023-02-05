#include <SFML/Graphics.hpp>
#include "settings.h"
#include <ctime>
#include "Roadobj.h"

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE, Style::Close | Style::Titlebar);
	window.setPosition(Vector2i{ (1920 - (int)WINDOW_WIDTH) / 2,0 });
	window.setFramerateLimit(FPS);

	RoadObj grass;
	roadObjInit(grass, GrassStartPos, GrassFileName);
	RoadObj road;
	roadObjInit(road, RoadStartPos, RoadFileName);

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == Event::Closed)

				window.close();
		}

		RoadObjDraw(window, grass);
		RoadObjDraw(window, road);
		window.display();

}

return 0;
}