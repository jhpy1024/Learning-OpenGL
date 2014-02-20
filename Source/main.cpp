#include <SFML/Graphics.hpp>
#include <memory>
#include "Application.hpp"
#include "SimpleTriangle.hpp"
#include <GL/glew.h>

sf::Window window;
std::unique_ptr<Application> application;

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
        default:
            break;
        }
    }

    application->handleInput();
}

void update()
{
    application->update();
}

void render()
{
    application->render();
    window.display();
}

int main()
{
    window.create(sf::VideoMode(640, 480), "Learning OpenGL");
    window.setFramerateLimit(60);

    glewInit();
    glOrtho(0, 640, 0, 480, -1, 1);

    application = std::unique_ptr<Application>(new SimpleTriangle(window));

    while (window.isOpen())
    {
        handleInput();
        update();
        render();
    }

    return 0;
}

