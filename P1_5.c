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

int main()
{
    int r = 30;
    float dr = r/2;
    for(float x = r - 300; x <= 300 - r; x += sqrt(pow(2*r + dr, 2) - pow(dr, 2)), r += dr)
    {
        draw_candle_light(x, 0, r);
    }

    save_sketch("P1_5.svg");
}