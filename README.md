# Seeed_Arduino_Terminal
This library provides a printing function similar to that of the terminal for the LCD screen.

### Reference
- Based on ![TFT_eSPI LCD Library]("https://github.com/Seeed-Studio/Seeed_Arduino_LCD")

### Feature
- Print decimal, hex, bin number and string
- Set the screen orientation
- Set background and foreground color

### Get Start
```bash
cd Arduino/libraries
git clone https://github.com/Seeed-Studio/Seeed_Arduino_LCD
git clone https://github.com/Seeed-Studio/Seeed_Arduino_Terminal
```

```C++
#include<grove_terminal.h>

grove_terminal terminal;
void setup(){
    terminal.begin();
    terminal.println("Hello world!");
}

void loop(){
    
}
```
