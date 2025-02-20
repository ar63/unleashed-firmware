#pragma once

#include <gui/view.h>

typedef struct Hid Hid;
typedef struct HidMouseJiggler HidMouseJiggler;

HidMouseJiggler* hid_mouse_jiggler_alloc(Hid* bt_hid);

void hid_mouse_jiggler_free(HidMouseJiggler* hid_mouse_jiggler);

View* hid_mouse_jiggler_get_view(HidMouseJiggler* hid_mouse_jiggler);

void hid_mouse_jiggler_set_connected_status(HidMouseJiggler* hid_mouse_jiggler, bool connected);
