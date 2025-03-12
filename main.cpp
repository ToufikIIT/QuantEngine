#include <iostream>
#include "Vector2D.h"
#include "PhysicsObject.h"

using namespace std;

int main() {
  
    PhysicsObject ball(0, 0, 2, 5);

    ball.force(Vector2D(10, 0));

    ball.update(1.0);

    cout << "New Position: ";
    ball.position.print();  

    return 0;
}
