#include <sketch.h>

void bottom_circle(float bx, float by, float r)
{
    float cx = bx;
    float cy = by + r;

    draw_circle(cx, cy, r);
}

void bottom_circle_inverse(float bx, float by, float r)
{
    float cx = bx;
    float cy = by - r;

    draw_circle(cx, cy, r);
}

void draw_candle_light(float x, float y, float r)
{
    bottom_circle(x, y, r / 3);
    bottom_circle(x, y, 2 * r / 3);
    bottom_circle(x, y, r);
}

void draw_candle_light_inverse(float x, float y, float r)
{
    bottom_circle_inverse(x, y, r / 3);
    bottom_circle_inverse(x, y, 2 * r / 3);
    bottom_circle_inverse(x, y, r);
}

int main()
{
    draw_candle_light(-100, 0, 100);
    draw_candle_light(100, 0, 100);
    draw_candle_light_inverse(-100, 0, 100);
    draw_candle_light_inverse(100, 0, 100);

    save_sketch("p1_1.svg");
}