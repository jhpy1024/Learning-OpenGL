#include <SFML/Graphics.hpp>

sf::Window window;

void handleInput()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            window.close();
        break;
        }
    }
}

void update()
{

}

void render()
{
    window.display();
}

int main()
{
    window.create(sf::VideoMode(640, 480), "Learning OpenGL");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        handleInput();
        update();
        render();
    }

    return 0;
}

