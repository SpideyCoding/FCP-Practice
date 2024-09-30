#include <sketch.h>
#include <math.h>

void bottom_circle(float bx, float by, float r)
{
    float cx = bx;
    float cy = by + r;

    draw_circle(cx, cy, r);
}

void draw_candle_light(float x, float y, float r)
{
    bottom_circle(x, y, r / 3);
    bottom_circle(x, y, 2 * r / 3);
    bottom_circle(x, y, r);
}

void rotated_candle_light(float x, float y, float r, float a)
{
    draw_circle(x + 2 * (r / 3) * cos(a), y + 2 * (r / 3) * sin(a), r / 3);
    draw_circle(x + (r / 3) * cos(a), y + (r / 3) * sin(a), 2 * r / 3);
    draw_circle(x, y, r);
}

int main()
{
    draw_circle(0, 0, 150);
    draw_circle(0, 0, 50);
    draw_circle(0, 0, 100/3);
    draw_circle(0, 0, 50/3);

    for(float a = 0; a <= 2*M_PI; a += M_PI/3)
    {
        rotated_candle_light(100*cos(a), 100*sin(a), 50, M_PI + a);
    }

    save_sketch("P1_10.svg");
}