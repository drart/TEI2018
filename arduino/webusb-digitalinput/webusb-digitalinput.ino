#include <WebUSB.h>

WebUSB WebUSBSerial(1, "drart.github.io/TEI2018/");

#define Serial WebUSBSerial

void setup() {
  while (!Serial) {
    ;
  }
  pinMode(2, INPUT);
  Serial.begin(115200);
  Serial.setTimeout(30);
  Serial.write("Sketch begins.\r\n> ");
  Serial.flush(); 
}

void loop() {
    int buttonState = digitalRead(2);
    String strval = String(buttonState);
    Serial.write(strval[0]);
    Serial.write("\r\n");
    Serial.flush();
}
