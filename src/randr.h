#ifndef __RANDR_H_H
#define __RANDR_H_H

typedef struct Rect {
    int16_t x;
    int16_t y;
    uint16_t width;
    uint16_t height;
} Rect;

extern int xr_screens;
extern Rect *xr_resolutions;

void randr_init(int *event_base, xcb_window_t root);
void randr_query(xcb_window_t root);

#endif // __RANDR_H_H
