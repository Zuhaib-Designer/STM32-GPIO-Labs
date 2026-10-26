#define button_PIN PC13

void setup() {
  // put your setup code here, to run once:
  pinMode(button_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (digitalRead(button_PIN) == LOW){
  // Print the "Statement" on the Monitor.
    Serial.println("Button is Pressed.");
  }
  else {
  // Print the "Statement" on the Monitor.
    Serial.println("Button is not Pressed.");
  }
}

