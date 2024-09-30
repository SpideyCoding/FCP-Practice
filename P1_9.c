#include <sketch.h>
#include <math.h>

int main()
{
    draw_circle(0, 0, 150);
    draw_circle(0, 0, 50);

    for(float a = 0; a <= 2*M_PI; a += M_PI/3)
    {
        draw_circle(100*cos(a), 100*sin(a), 50);
    }

    save_sketch("P1_9.svg");
}