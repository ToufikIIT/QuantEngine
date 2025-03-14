#include <iostream>
#include "Vector2D.h"
#include "PhysicsObject.h"

using namespace std;

int main() {
  
    PhysicsObject ball(0, 0, 2, 5);
    
    cout << "Enter Vx and Vy: ";
    cin >> ball.velocity.x ;
    cin >> ball.velocity.y;


    ball.update(1.0);

    cout << "New Position: ";
    ball.position.print();  

    return 0;
}