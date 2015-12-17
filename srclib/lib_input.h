#ifndef __LIB_INPUT_H__
#define __LIB_INPUT_H__

#include <inttypes.h>

enum ScreenButtonId {
    SCREENBUTTON_BOTTOMLEFT = 0,
    SCREENBUTTON_TOPLEFT = 1,
    SCREENBUTTON_TOPRIGHT = 2,
    SCREENBUTTON_BOTTOMRIGHT = 3
};

namespace ScreenButtonState {
    void updateButtonState(uint8_t newState);
    bool isButtonOn(ScreenButtonId btn);
    bool wasButtonOn(ScreenButtonId btn);
    bool isButtonActivated(ScreenButtonId btn);
    bool wasButtonReleased(ScreenButtonId btn);
    bool isAnyButtonOn();
    bool wasAnyButtonOn();
    bool isAnyButtonActivated();
    bool wasAnyButtonReleased();
};


#endif // __LIB_INPUT_H__