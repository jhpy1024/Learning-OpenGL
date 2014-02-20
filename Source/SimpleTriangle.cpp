#include "SimpleTriangle.hpp"
#include <GL/gl.h>

SimpleTriangle::SimpleTriangle(sf::Window& window)
    : Application(window)
    , m_Rotation(0)
{

}

void SimpleTriangle::handleInput()
{

}

void SimpleTriangle::update()
{
    m_Rotation = (m_Rotation + 1) % 360;
}

void SimpleTriangle::render()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    {
        glColor3f(1.f, 0.f, 0.f);
        glVertex2f(0.f, 0.f);

        glColor3f(0.f, 1.f, 0.f);
        glVertex2f(640.f, 0.f);

        glColor3f(0.f, 0.f, 1.f);
        glVertex2f(320.f, 480.f);
    }
    glEnd();
}
