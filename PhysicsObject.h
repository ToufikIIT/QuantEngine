#ifndef PHYSICS_OBJECT_H
#define PHYSICS_OBJECT_H

#include "Vector2D.h"

class PhysicsObject
{
    public:
    Vector2D position;
    Vector2D velocity;
    Vector2D acceleration;
    float mass;
    float raduis;

    PhysicsObject(float x,float y,float m,float r)
    {
        this-> position = Vector2D(x,y);
        this-> mass = m;
        this-> raduis = r;
    }

    void force(const Vector2D& F)
    {
        Vector2D acc_change = F/mass;
        acceleration += acc_change;
    }

    void update(float dt)
    {
        velocity += acceleration*dt;
        position += velocity*dt;
        acceleration = Vector2D(0,0);
    }
};

#endif