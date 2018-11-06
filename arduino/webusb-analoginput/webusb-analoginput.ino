#include <WebUSB.h>

WebUSB WebUSBSerial(1, "drart.github.io/TEI2018/");

#define Serial WebUSBSerial

void setup() {
  while (!Serial) {
    ;
  }
  
  Serial.begin(115200);
  Serial.setTimeout(30);
  Serial.write("Sketch begins.\r\n> ");
  Serial.flush(); 
}

void loop() {
    int inval = analogRead(A0);
    String strval = String(inval);
    for (int i = 0; i < strval.length(); i++){
          Serial.write( strval[i] );
    }
    Serial.write("\r\n");
    Serial.flush();
}
