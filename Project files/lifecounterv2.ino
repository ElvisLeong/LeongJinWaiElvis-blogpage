#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD
#include <Adafruit_NeoPixel.h>
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 4); // Change to (0x27,16,2) for 16x2 LCD.

const int buttonPinUp = 2;
const int buttonPinDown = 3;
const int ledPin = 13;
int life = 40;

int buttonState = 0;
int lastButtonState = 0;
int ledState = 0;

#define PIN 5
#define NUM_LEDS 23
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN,        sdfasNEO_GRB + NEO_KHZ800);

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(buttonPinUp,INPUT);
  pinMode(buttonPinDown,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(19200);
  Serial.println("Hello"); 
  lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("Welcome!"); // Print the string "Hello World!"
  lcd.setCursor(0, 1); //Set the cursor on the third column and the second row (counting starts at 0!).
  lcd.print("Ready to play?");
  delay(1000);
  lcd.clear();

  // Neopixels bit
  strip.begin();
  strip.show();
  //neopixel

}
void loop() {
// the counting bit
   buttonState = digitalRead(buttonPinUp);
  if (buttonState != lastButtonState){
    if (buttonState == 1){
      life++;
    }
    lastButtonState = buttonState;
  }
 buttonState = digitalRead(buttonPinDown);
  if (buttonState != lastButtonState){
  if (buttonState == 1){
  life--;
    }
     lastButtonState = buttonState;
    }
digitalWrite (ledPin, ledState);
Serial.println(life);

// the counting bit


if (life>99){
  lcd.setCursor(13,0);
  lcd.print(life);
  lcd.setCursor(0,0);
  lcd.print("Current Life:");
}
if(life==99){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Current Life:");
  lcd.setCursor(14,0);
lcd.print(life);
}if (life<99){
  lcd.setCursor(14,0);
  lcd.print(life);
  lcd.setCursor(0,0);
  lcd.print("Current Life:");
}

if(life>80){
    strip.setPixelColor(0, 148,0,211);
    strip.setPixelColor(1, 75,0,130);
    strip.setPixelColor(2, 0,0,255);
    strip.setPixelColor(3, 0,255,0);
    strip.setPixelColor(4, 255,255,0);
    strip.setPixelColor(5, 255, 127,0);
    strip.setPixelColor(6, 255,0,0);
    strip.setPixelColor(7, 154,6,171);
    strip.show();
    lcd.setCursor(1,1);
    delay(100);
  lcd.print("Flux ALready!");
    strip.setPixelColor(0, 154,6,171);
    strip.setPixelColor(1, 148,0,211);
    strip.setPixelColor(2, 75,0,130);
    strip.setPixelColor(3, 0 ,0,255);
    strip.setPixelColor(4, 0,255,0);
    strip.setPixelColor(5, 255,255,0);
    strip.setPixelColor(6, 255,127,0);
    strip.setPixelColor(7, 255,0,0);
    strip.show();
    lcd.setCursor(1,1);
     delay(100);
  lcd.print("Flux ALready!");
      strip.setPixelColor(0, 255,0, 0);
    strip.setPixelColor(1, 154,6,171);
    strip.setPixelColor(2, 148,0,211);
    strip.setPixelColor(3, 75,0,130);
    strip.setPixelColor(4, 0,0,255);
    strip.setPixelColor(5, 0,255,0);
    strip.setPixelColor(6, 255,255,0);
    strip.setPixelColor(7, 255,127,0);
    strip.show();
    lcd.setCursor(1,1);
     delay(100);
  lcd.print("Flux ALready!");
      strip.setPixelColor(0, 255,127,0);
    strip.setPixelColor(1, 255,0,0);
    strip.setPixelColor(2, 154,6,171);
    strip.setPixelColor(3, 148,0,211);
    strip.setPixelColor(4, 75,0, 130);
    strip.setPixelColor(5,  0, 0,255);
    strip.setPixelColor(6, 0,255,0);
    strip.setPixelColor(7, 255,255,0);
    strip.show();
    lcd.setCursor(1,1);
     delay(100);
  lcd.print("Flux ALready!");
      strip.setPixelColor(0, 255,255,0);
    strip.setPixelColor(1, 255,127,0);
    strip.setPixelColor(2, 255,0,0);
    strip.setPixelColor(3, 154,6,171);
    strip.setPixelColor(4, 148,0,211);
    strip.setPixelColor(5, 75,0,130);
    strip.setPixelColor(6, 0,0,255);
    strip.setPixelColor(7, 0,255,0);
    strip.show();
    lcd.setCursor(1,1);
     delay(100);
  lcd.print("Flux ALready!");
      strip.setPixelColor(0, 0,255,0);
    strip.setPixelColor(1, 255,255,0);
    strip.setPixelColor(2, 255,127,0);
    strip.setPixelColor(3, 255,0,0);
    strip.setPixelColor(4, 154,6,171);
    strip.setPixelColor(5, 148,0,211);
    strip.setPixelColor(6, 75,0,130);
    strip.setPixelColor(7, 0,0,255);
    strip.show();
    lcd.setCursor(1,1);
     delay(100);
  lcd.print("Flux ALready!");
      strip.setPixelColor(0, 0,0,255);
    strip.setPixelColor(1, 0,255,0);
    strip.setPixelColor(2, 255,255,0);
    strip.setPixelColor(3, 255,127,0);
    strip.setPixelColor(4, 255,0,0);
    strip.setPixelColor(5, 154,6,171);
    strip.setPixelColor(6, 148,0,211);
    strip.setPixelColor(7, 75,0,130);
    strip.show();
    lcd.setCursor(1,1);
     delay(100);
  lcd.print("Flux ALready!");
      strip.setPixelColor(0, 75,0,130);
    strip.setPixelColor(1, 0,0,255);
    strip.setPixelColor(2, 0,255,0);
    strip.setPixelColor(3, 255,255,0);
    strip.setPixelColor(4, 255,127,0);
    strip.setPixelColor(5, 255,0,0);
    strip.setPixelColor(6, 154,6,171);
    strip.setPixelColor(7, 148,0,211);
    strip.show();
    lcd.setCursor(1,1);
  lcd.print("Flux ALready!");
  
}
if(life>51 && life<80){
  strip.setPixelColor(0, 154,6,171);
  strip.setPixelColor(1, 154,6,171);
  strip.setPixelColor(2, 154,6,171);
  strip.setPixelColor(3, 154,6,171);
  strip.setPixelColor(4, 154,6,171);
  strip.setPixelColor(5, 154,6,171);
  strip.setPixelColor(6, 154,6,171);
  strip.setPixelColor(7, 154,6,171);
  strip.show();
  lcd.setCursor(1,1);
  lcd.print("Oloro?");
}

if(life>25 && life<51){
  strip.setPixelColor(0, 37,155,37);
  strip.setPixelColor(1, 37,155,37);
  strip.setPixelColor(2, 37,155,37);
  strip.setPixelColor(3, 37,155,37);
  strip.setPixelColor(4, 37,155,37);
  strip.setPixelColor(5, 37,155,37);
  strip.setPixelColor(6, 37,155,37);
  strip.setPixelColor(7, 37,155,37);
  strip.show();
  lcd.setCursor(1,1);
  lcd.print("Still Healthy!");
}
if(life>10 && life<25){
  strip.setPixelColor(0, 127,127,0);
  strip.setPixelColor(1, 127,127,0);
  strip.setPixelColor(2, 127,127,0);
  strip.setPixelColor(3, 127,127,0);
  strip.setPixelColor(4, 127,127,0);
  strip.setPixelColor(5, 127,127,0);
  strip.setPixelColor(6, 127,127,0);
  strip.setPixelColor(7, 127,127,0);
  strip.show();
  lcd.setCursor(1,1);
  lcd.print("Watch Out!");
}
if(life<10 && life>4){

  strip.setPixelColor(0, 104,0,0);
  strip.setPixelColor(1, 104,0,0);
  strip.setPixelColor(2, 104,0,0);
  strip.setPixelColor(3, 104,0,0);
  strip.setPixelColor(4, 104,0,0);
  strip.setPixelColor(5, 104,0,0);
  strip.setPixelColor(6, 104,0,0);
  strip.setPixelColor(7, 104,0,0);
  strip.show();
  delay(100);
  strip.setPixelColor(0, 104,0,0);
  strip.setPixelColor(1, 104,0,0);
  strip.setPixelColor(2, 104,0,0);
  strip.setPixelColor(3, 104,0,0);
  strip.setPixelColor(4, 104,0,0);
  strip.setPixelColor(5, 104,0,0);
  strip.setPixelColor(6, 104,0,0);
  strip.setPixelColor(7, 104,0,0);
  strip.show();
  delay(100);
  // set pixel to off, delay(1000)
  strip.setPixelColor(0, 0, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(7, 0, 0, 0);
  strip.show();
  lcd.setCursor(1,1);
  lcd.print("DANGER");
  delay(100);
  strip.setPixelColor(0, 0, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(7, 0, 0, 0);
  strip.show();
  delay(100);
  lcd.setCursor(1,1);
  lcd.print("DANGER!");
}

if(life<5 && life>0){

  strip.setPixelColor(0, 104,0,0);
  strip.setPixelColor(1, 104,0,0);
  strip.setPixelColor(2, 104,0,0);
  strip.setPixelColor(3, 104,0,0);
  strip.setPixelColor(4, 104,0,0);
  strip.setPixelColor(5, 104,0,0);
  strip.setPixelColor(6, 104,0,0);
  strip.setPixelColor(7, 104,0,0);
  strip.show();
  lcd.setCursor(1,1);
  lcd.print("OH NO!");
  delay(100);
   strip.setPixelColor(0, 104,0,0);
  strip.setPixelColor(1, 104,0,0);
  strip.setPixelColor(2, 104,0,0);
  strip.setPixelColor(3, 104,0,0);
  strip.setPixelColor(4, 104,0,0);
  strip.setPixelColor(5, 104,0,0);
  strip.setPixelColor(6, 104,0,0);
  strip.setPixelColor(7, 104,0,0);
  strip.show();
  lcd.setCursor(1,1);
  lcd.print("OH NO!");
  delay(100);
  strip.setPixelColor(0, 0, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(7, 0, 0, 0);
  strip.show();
  delay(50);
  strip.setPixelColor(0, 0, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(7, 0, 0, 0);
  strip.show();
  delay(50);
  lcd.setCursor(1,1);
  lcd.print("OH NO!");
}
if(life<1){
  strip.setPixelColor(0, 104,0,0);
  strip.setPixelColor(1, 104,0,0);
  strip.setPixelColor(2, 104,0,0);
  strip.setPixelColor(3, 104,0,0);
  strip.setPixelColor(4, 104,0,0);
  strip.setPixelColor(5, 104,0,0);
  strip.setPixelColor(6, 104,0,0);
  strip.setPixelColor(7, 104,0,0);
  strip.show();
  lcd.setCursor(1,1);
  lcd.print("DEAD! DEAD!");
}

//thresholds
if(life==24){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Current Life");
  lcd.setCursor(14,0);
  lcd.print(life);
  lcd.setCursor(1,1);
  lcd.print("Watch Out!");
}if(life==9){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Current Life");
  lcd.setCursor(14,0);
  lcd.print(life);
  lcd.setCursor(1,1);
  lcd.print("DANGER!");
}if (life<10){
  
}if(life==5){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Current Life");
  lcd.setCursor(14,0);
  lcd.print(life);
  lcd.setCursor(1,1);
  lcd.print("OH NO!");
}if(life<1){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Current Life");
  lcd.setCursor(14,0);
  lcd.print(life);
  lcd.setCursor(1,1);
  lcd.print("DEAD! DEAD!!");
}

delay(200);
  
}
