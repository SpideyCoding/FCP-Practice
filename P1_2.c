#include <sketch.h>

int main()
{
    for(int x = -200; x <= 200; x += 100)
    {
        draw_circle(x, 0, 50);
    }

    save_sketch("P1_2.svg");
}