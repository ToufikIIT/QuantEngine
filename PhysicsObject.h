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
    static Vector2D gravity;

    PhysicsObject(float x,float y,float m,float r)
    {
        this-> position = Vector2D(x,y);
        this-> velocity = Vector2D(0,0);
        this-> acceleration = Vector2D(0,0);
        this-> mass = m;
        this-> raduis = r;
    }

    void force(const Vector2D& F)
    {
        Vector2D acc_change = F/mass;
        acceleration += acc_change;
    }

    void friction(float mu)
    {
        if (velocity.x != 0)
        {
           float Normal=mass*gravity.y;
           Vector2D friction = velocity.normalize()*(Normal*mu)*(-1);
           force(friction);
        }
        
    }

    void gravitationalForce()
    {
        force(gravity*mass);
    }

    void update(float dt)
    {
        gravitationalForce();
        friction(0.1);
        velocity += acceleration*dt;
        position += velocity*dt;
        acceleration = Vector2D(0,0);
    }
};

Vector2D PhysicsObject::gravity = Vector2D(0,-9.8);

#endif