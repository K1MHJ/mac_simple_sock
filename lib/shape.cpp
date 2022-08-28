#include "shape.h"

namespace test {
int add(int a, int b)
{
    return a + b;
}
Rectangle::Rectangle(float w, float h) : w_(w), h_(h) {}

float Rectangle::GetSize() const { return w_ * h_; }

void Rectangle::Print() const {
}

}  // namespace shape
