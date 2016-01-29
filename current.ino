int pin = A2;
int const resistance = 220;
void setup()
{ 
  Serial.begin(9600);
}
void loop() {
  int sensorValue = analogRead(pin);
  float voltage = sensorValue * (5.0 / 1023.0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)
  float current = 1000 * voltage/resistance;
  Serial.println(current);
  Serial.println(voltage);
  Serial.println(resistance);
  // Current in mA, Voltage in V, Resistance in Ohms
  delay(1000);
}


