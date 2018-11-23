#include <math.h>

const int REDPIN = A2;
const int GREENPIN = A0;
const int BLUEPIN = A1;

uint16_t x = 0;
float gr;
float gg;
float gb;

void setup() {
    pinMode(REDPIN, OUTPUT);
    pinMode(GREENPIN, OUTPUT);
    pinMode(BLUEPIN, OUTPUT);
}

void loop(){
    
    gr = round(pow(sin((M_PI * 3 * x) / 10), 2) * 255); 
    gr = round(pow(sin(((M_PI * 3 * x )- (3 * M_PI)) / 10), 2) * 255); 
    gb = round(pow(sin(((M_PI * 3 * x) - (6 * M_PI)) / 10), 2) * 255); 
    x++;
    analogWrite(REDPIN, gr);
    analogWrite(GREENPIN, gg);
    analogWrite(BLUEPIN, gb);
    delay(100);
}
