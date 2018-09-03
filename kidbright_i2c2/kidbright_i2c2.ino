#include <Wire.h>
TwoWire Wire2 = TwoWire(1);
byte err, address;
int nDevices;

void setup()
{
  Wire.begin(21, 22);
  Wire2.begin(4, 5);
  Serial.begin(115200);
  while (!Serial);
  Serial.println("\nI2C Scanner");
}

void loop()
{
  Serial.println("Scanning...");

  nDevices = 0;
  for(address = 1; address < 127; address++ ) 
  {
    Wire.beginTransmission(address);
    err = Wire.endTransmission();

    if (err == 0)
    {
      Serial.print("Wire: I2C device found at address 0x");
      if (address<16) 
        Serial.print("0");
      Serial.print(address,HEX);
      Serial.println("  !");

      nDevices++;
    }
    else if (err==4) 
    {
      Serial.print("Wire: Unknown error at address 0x");
      if (address<16) 
        Serial.print("0");
      Serial.println(address,HEX);
    }    
  }
  if (nDevices == 0)
    Serial.println("Wire: No I2C devices found\n");
  else
    Serial.println("Wire: done\n");

  nDevices = 0;
  for(address = 1; address < 127; address++ ) 
  {
    Wire2.beginTransmission(address);
    err = Wire2.endTransmission();

    if (err == 0)
    {
      Serial.print("Wire2: I2C device found at address 0x");
      if (address<16) 
        Serial.print("0");
      Serial.print(address,HEX);
      Serial.println("  !");

      nDevices++;
    }
    else if (err==4) 
    {
      Serial.print("Wire2: Unknown error at address 0x");
      if (address<16) 
        Serial.print("0");
      Serial.println(address,HEX);
    }    
  }
  if (nDevices == 0)
    Serial.println("Wire2: No I2C devices found\n");
  else
    Serial.println("Wire2: done\n");
    
  delay(2000);
}
