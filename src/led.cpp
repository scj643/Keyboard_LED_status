#include <X11/Xlib.h>

int led_mask()
{
	Display *dpy = XOpenDisplay(":0");
	XKeyboardState x;
	XGetKeyboardControl(dpy, &x);
	XCloseDisplay(dpy);
	return x.led_mask;
}

bool is_numlock_activated()
{
	return led_mask() & 2;
}


bool is_capslock_activated()
{
    return led_mask() & 1;
}