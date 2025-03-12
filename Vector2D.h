#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <cmath>
#include <iostream>


class Vector2D
{
    public:
    float x,y;

    Vector2D(float x, float y)
    {
        this->x = x;
        this->y = y;
    };

    Vector2D()
    {
        this->x = 0;
        this->y = 0;
    };

    Vector2D operator+(const Vector2D& v) const { return Vector2D(x+v.x,y+v.y);}
    Vector2D operator-(const Vector2D& v) const { return Vector2D(x-v.x,y-v.y);}
    Vector2D operator*(float scalar) const { return Vector2D(x*scalar,y*scalar);}
    Vector2D operator/(float scalar) const { return Vector2D(x/scalar,y/scalar);}

    void operator+=(const Vector2D& v) { x += v.x; y += v.y;}
    void operator-=(const Vector2D& v) { x -= v.x; y -= v.y;}
    void operator*=(float scalar) { x *= scalar; y *= scalar;}
    void operator/=(float scaler) {x /= scaler; y /= scaler;}

    float magnitutde() const { return sqrt(x*x + y*y);}
    Vector2D normalize() const {
        float m=magnitutde();
        if(m>0)
            return *this/m;
        else
            return Vector2D(0,0);}
    void print() const {std::cout << "(" << x << ", " << y << ")\n"; }
            
};

#endif
