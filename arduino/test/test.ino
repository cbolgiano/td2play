#include <TinyScreen.h>
#include <SPI.h>
#include <Wire.h>
#include "lib_font_virtualdj.h"
#include "lib_RenderBuffer.h"
#include "lib_StringBuffer.h"

TinyScreen display = TinyScreen(0);
#ifdef SCREEN_16BITS
RenderBuffer<uint16_t,20> buffer;
#else
RenderBuffer<uint8_t,20> buffer;
#endif // SCREEN_16BITS

void setup() {
  Wire.begin();
  display.begin();
  display.setFlip(0);
  display.setBrightness(8);
  display.setBitDepth(buffer.is16bit() ? 1 : 0);
}
uint16_t rgb565[] = {0xffff,0xf,0xf0,0xffff};
#ifdef SCREEN_16BITS
Texture<uint16_t> _tex((uint8_t*) rgb565, TextureType::rgb565sram, 2,2, 0xffff);
#else
Texture<uint8_t> _tex((uint8_t*) rgb565, TextureType::rgb565sram, 2,2, 0xffff);
#endif
void loop(void) {
    static unsigned long t = millis();
    unsigned long t2 = millis();

    buffer.drawText(stringBuffer.start()->put(t2-t)->put("ms")->get(),2,2,buffer.rgb(255,255,255), &virtualDJ_5ptFontInfo);
    buffer.drawText(stringBuffer.start()->put(t2-t)->put("ms")->get(),2,22,buffer.rgb(255,0,0), &virtualDJ_5ptFontInfo);
    buffer.drawText(stringBuffer.start()->put(t2-t)->put("ms")->get(),2,32,buffer.rgb(0,255,0), &virtualDJ_5ptFontInfo);
    buffer.drawText(stringBuffer.start()->put(t2-t)->put("ms")->get(),2,42,buffer.rgb(0,0,255), &virtualDJ_5ptFontInfo);

    static uint16_t cnt = 0;
    cnt+=1;
    buffer.drawText(stringBuffer.start()->put(cnt)->put("rgb")->get(),42,2,buffer.rgb(cnt,cnt,cnt), &virtualDJ_5ptFontInfo);
    buffer.drawText(stringBuffer.start()->put(cnt)->put("r")->get(),42,22,buffer.rgb(cnt,0,0), &virtualDJ_5ptFontInfo);
    buffer.drawText(stringBuffer.start()->put(cnt)->put("g")->get(),42,32,buffer.rgb(0,cnt,0), &virtualDJ_5ptFontInfo);
    buffer.drawText(stringBuffer.start()->put(cnt)->put("b")->get(),42,42,buffer.rgb(0,0,cnt), &virtualDJ_5ptFontInfo);
    buffer.drawRect(60,10,8,8)->filledRect(cnt);
    buffer.drawRect(40,4,14,14)->sprite(&_tex);
    t = t2;
    buffer.flush(display);
    stringBuffer.reset();

}
