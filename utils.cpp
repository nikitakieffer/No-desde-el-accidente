#include "utils.hpp"

float speedToAngle(sf::Vector2f speed) {
    return atan2(speed.y,speed.x);
}

float radToAngle(float rad) {
    return rad * 180 / 3.14159;
}

float floatangleToRad(float angle) {
    return angle * 3.14159 / 180;
}

point vector2point(sf::Vector2f p)
{
  return point(double(p.x),double(p.y));
}

sf::Vector2f point2vector(point p)
{
  return sf::Vector2f(float(real(p)),float(imag(p)));
}

double prodesc(point p1,point p2)
{
  return real(conj(p1)*p2);
}

double prodvec(point p1,point p2)
{
  return imag(conj(p1)*p2);
}
