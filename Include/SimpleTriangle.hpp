#ifndef SIMPLE_TRIANGLE_HPP
#define SIMPLE_TRIANGLE_HPP

#include "Application.hpp"

class SimpleTriangle : public Application
{
public:
    SimpleTriangle(sf::Window& window);

    void handleInput() override;
    void update() override;
    void render() override;

private:
    unsigned m_Rotation;
};

#endif // SIMPLE_TRIANGLE_HPP
