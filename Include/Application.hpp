#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <SFML/Graphics.hpp>

class Application
{
public:
    Application(sf::Window& window);

    virtual void handleInput() = 0;
    virtual void update() = 0;
    virtual void render() = 0;

private:
    sf::Window& m_Window;
};

#endif // APPLICATION_HPP
