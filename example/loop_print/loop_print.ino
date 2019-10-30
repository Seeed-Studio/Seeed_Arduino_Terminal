#include<grove_terminal.h>
#define TFT_WHITE   0xffff
#define TFT_BLUE    0x001f

grove_terminal terminal;
int32_t        value = 0;
void setup(){
    terminal.begin();
    terminal.global_foreground(TFT_WHITE);
    terminal.global_background(TFT_BLUE);
}

void loop(){
    terminal.println(value);
    value += 1;
    delay(1000);
}