// Let's understand this code and simulation.

// Choose the GPIO pin connected to the button

#define button_PIN PC13

// Runs only once when the program starts.

// We use it to configure pins and initialize communication.

void setup() {
   // Configure the button pin as an input
  pinMode(button_PIN, INPUT_PULLDOWN); 

  // Start communication with the Serial Monitor
  Serial.begin(9600);// using baud rate 9600, but we can use 115200
}

// Runs again and again while the program is running.

// We use it to repeatedly read the button and check its state.

void loop() {
  
  // Read the current state of the button
  int buttonState = digitalRead(button_PIN);
  
 // With INPUT_PULLUP, LOW means the button is pressed
 
  if (buttonState == HIGH){

    // Display a message when the button is pressed
    Serial.println("Button Pressed.");
  }
  else {

    // Display a message when the button is released
    Serial.println("Button is not Pressed.");
  }

  // Wait 1 second before checking again
  delay(1000);
}

