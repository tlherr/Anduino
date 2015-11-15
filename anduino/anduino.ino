
// Blinking LED
const int LED = 12; //LED connected to digital pin 13
const int sensorPin = 0;
int lightLevel, high = 0, low = 1023;
String poem = "so long as men can breathe and eyes can see so long lives this and gives life to thee";
String alphabet = "abcdefghijklmnopqrstuvwqyz";
    
String morse[] = {".-","-...","-.-.","-..", ".", "..-.", "--.",
                  "....", "..", ".---", "-.-", ".-..", "--",
                  "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                  "..-", "...-", ".--", "-..-", "-.--", "--.."};

//Given a char value, find its morse code representation and then manipulate LED accordingly
String encodeDelay(char c) {

    String morseString;
    int delayArray[] = {}; //mad rhymes yo
    
    //Where is char in alphabet 
    for (int i=0; i<alphabet.length(); i++) {
      if (c == alphabet[i]) {
        morseString = morse[i];
      }
    }

    //Read the morse string, and do process dots and dashes
    for (int x=0; x<morseString.length(); x++) {
      char d = morseString.charAt(x);

      switch(d)
      {
        case '.':
          digitalWrite(LED, HIGH);
          delay(1000);
          digitalWrite(LED, LOW);
          delay(500);
        break;

        case '-':
          digitalWrite(LED, HIGH);
          delay(1500);
          digitalWrite(LED, LOW);
          delay(500);
        break;
      }
    }  
}

void setup() {
  pinMode(LED, OUTPUT); //sets the digital pin as output
}
 
void loop() {

  //Read through the characters in the string, pass each non space char to the encode function
  for (int z=0; z<poem.length(); z++) {
      char d = poem.charAt(z);

      if(d != ' ') {
          lightLevel = analogRead(sensorPin);

          if(lightLevel>50) {
            encodeDelay(d);
          } 
      }
  }
  
}


