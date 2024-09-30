#include <sketch.h>

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

void make_grid(int n)
{
    float dx = 600/n;
    float dy = dx;

    float x0 = -300+dx/2;
    float y0 = -300+dy/2;

    for (float x=x0; x<300; x+=dx)
    {
        for (float y=y0; y<300; y+=dy)
        {
            draw_candle_light(x, y - dx/2, dx / 2);
        }
    }
}

int main() {
    make_grid(6);
    save_sketch("P1_6.svg");
}