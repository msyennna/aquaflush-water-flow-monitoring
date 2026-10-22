#include <Wire.h>
#include <LiquidCrystal_I2C.h>

/*
S201 Water Flow Sensor Monitor Only
Displays flow rate in L/hour on I2C LCD
*/

// Initialize the I2C LCD (address 0x27, 16 columns x 2 rows)
LiquidCrystal_I2C lcd(0x27, 16, 2);

volatile int flow_frequency;      // Measures flow sensor pulses
unsigned int l_hour;             // Calculated litres/hour
unsigned char flowsensor = 2;   // Sensor Input (Interrupt Pin 0 = Digital Pin 2)

unsigned long currentTime;
unsigned long cloopTime;

void flow()  // Interrupt function
{
  flow_frequency++;
}

void setup()
{
  pinMode(flowsensor, INPUT);
  digitalWrite(flowsensor, HIGH); // Optional Internal Pull-Up

  Serial.begin(9600);
  attachInterrupt(0, flow, RISING); // Setup Interrupt
  sei(); // Enable interrupts

  // Initialize the I2C LCD
  Wire.begin();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Flow Monitor");

  currentTime = millis();
  cloopTime = currentTime;
}

void loop()
{
  currentTime = millis();
  if(currentTime >= (cloopTime + 1000)) // Every 1 second
  {
    cloopTime = currentTime;

    // Calculate L/hour from frequency
    l_hour = (flow_frequency * 60 / 7.5); // (Hz * 60) / 7.5 = L/hr
    flow_frequency = 0; // Reset pulse counter

    Serial.print(l_hour);
    Serial.println(" L/hour");

    lcd.setCursor(0, 0);
    lcd.print("Flow: ");
    lcd.print(l_hour);
    lcd.print(" L/h    "); // Extra spaces to overwrite old text
  }
}
