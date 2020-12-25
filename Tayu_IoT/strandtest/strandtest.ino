// NeoPixel Ring simple sketch (c) 2013 Shae Erisson

// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN             6
#define PIN2            7
#define PIN3            8

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      8// 제가 사용할 제품이 1미터에 60개짜리 제품이라 제어할 LED는 60 개

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2 = Adafruit_NeoPixel(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels3 = Adafruit_NeoPixel(NUMPIXELS, PIN3, NEO_GRB + NEO_KHZ800);

int delayval = 50; // delay for half a second

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function.
  randomSeed(analogRead(0)); 
  
  pixels.begin(); // This initializes the NeoPixel library.
  pixels2.begin(); // This initializes the NeoPixel library.
  pixels3.begin(); // This initializes the NeoPixel library.
}

void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  
  for(int i=0;i<NUMPIXELS;i++){
  int randR = 255; 
  int randG = 0; 
  int randB = 0;


    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(randR,randG,randB)); // Moderately bright green color.
    pixels2.setPixelColor(i, pixels2.Color(randR,randG,randB)); // Moderately bright green color.
    pixels3.setPixelColor(i, pixels3.Color(randR,randG,randB)); // Moderately bright green color.
    
    pixels.show(); // This sends the updated pixel color to the hardware.
    pixels2.show(); // This sends the updated pixel color to the hardware.
    pixels3.show(); // This sends the updated pixel color to the hardware.
    delay(50); // Delay for a period of time (in milliseconds).
    
  }
  for(int i=0;i<NUMPIXELS;i++){
  int randR = 0; 
  int randG = 0; 
  int randB = 0;


    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(randR,randG,randB)); // Moderately bright green color.
    pixels3.setPixelColor(i, pixels3.Color(randR,randG,randB)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    pixels3.show(); // This sends the updated pixel color to the hardware.
    delay(50); // Delay for a period of time (in milliseconds).
    
  }
}
