/*

Al pulsar el boton el led se prende

Interruptor definido como input_pullup porque ?

*/



const int buttonPin = 23;
const int ledPin =  32;

// State of the push button
int buttonState = 0;


void setup() {
    Serial.begin(115200);

    //Set the pin as an input pullup
    pinMode(buttonPin, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
}

void loop() {

    buttonState = digitalRead(buttonPin);
    Serial.println(buttonState);

    if (buttonState == LOW) {
        // Switch on the led
        digitalWrite(ledPin, HIGH);
    } else {
        // Switch off the led
        digitalWrite(ledPin, LOW);
    }
}
