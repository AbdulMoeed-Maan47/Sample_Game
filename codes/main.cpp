#include <iostream>

#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 600), "Sample Game", Style::Close | Style::Titlebar);
    Event event;

    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (Event::Closed)
                window.close();
            if (event.key.code == Keyboard::Escape)
                window.close();
        }

        window.clear();

        window.display();
    }

    return 0;
}