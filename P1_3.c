#include <sketch.h>

void concentric_circles(float x, float y, float r, float n)
{
    for (int i = 1; i <= n; i++)
    {
        draw_circle(x, y, i * r / n);
    }
}

int main()
{
    for(int x = -200, i = 1; x <= 200; x += 100, i++)
    {
        concentric_circles(x, 0, 50, i);
    }

    save_sketch("P1_3.svg");
}