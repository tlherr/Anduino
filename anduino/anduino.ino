
// Blinking LED
const int LED = 12; //LED connected to digital pin 13
const int sensorPin = 0;
int lightLevel, high = 0, low = 1023;
String poem = "so long as men can breathe and eyes can see so long lives this and gives life to thee";


//Given a char value, find its morse code representation and then manipulate LED accordingly
String encodeDelay(char c) {
    String text = "abcdefghijklmnopqrstuvwqyz";
    
    //Dots are 1000
    //Dashes are 1500
    String morse[] = {".-","-...","-.-.","-..", ".", "..-.", "--.",
                      "....", "..", ".---", "-.-", ".-..", "--",
                      "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                      "..-", "...-", ".--", "-..-", "-.--", "--.."};
    String morseString;
    int delayArray[] = {}; //mad rhymes yo
    
    //Where is char in alphabet 
    for (int i=0; i<text.length(); i++) {
      if (c == text[i]) {
        morseString = morse[i];
      }
    }

    //Before doing the given letter check the light sensor value

    //Read the morse string
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
  lightLevel = analogRead(sensorPin);
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


