#include <iostream>
#include "Vector2D.h"
#include "PhysicsObject.h"

using namespace std;

int main() {
    PhysicsObject ball(0, 100, 2, 5);

    float deltaTime = 1.0;

    for (int i = 0; i < 5; i++) {
        ball.update(deltaTime);
        cout << "Time: " << (i + 1) << " sec | Position: ";
        ball.position.print();
    }

    return 0;
}
