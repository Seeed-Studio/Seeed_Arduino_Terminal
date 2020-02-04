#include<grove_terminal.h>
#define TFT_WHITE   0xffff
#define TFT_BLUE    0x001f

grove_terminal terminal;
int32_t        value = 0;
int32_t        skip = 0;
void setup() {
    terminal.begin(true, 0);
    terminal.global_foreground(TFT_WHITE);
    terminal.global_background(TFT_BLUE);
    char     a = 'a';
    int8_t   b = int8_t(128); //overflow
    uint8_t  c = 128;
    int16_t  d = 256;
    uint16_t e = 512;
    int32_t  f = 0x01234567;
    double   g = 3.1415;
    terminal.println(a);
    terminal.println(b);
    terminal.println(c);
    terminal.println(d);
    terminal.println(e);
    terminal.println(f, HEX);
    terminal.println(g);
    terminal.println(g, 3);                  //keep three decimal places.
    terminal.println("hello world!");
    terminal.println("nice to meet u!", 12); //print 12 character.
    terminal.printf("hello %d!\n", 2020);
}

void loop() {

}