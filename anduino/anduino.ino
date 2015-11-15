
// Blinking LED
const int LED = 12; //LED connected to digital pin 13
const int sensorPin = 0;
int lightLevel, high = 0, low = 1023;
String poem = "so long as men can breathe and eyes can see so long lives this and gives life to thee";


//Given a char value, find its morse code representation and then manipulate LED accordingly
string encodeDelay(char c) {
    String text[26] = "abcdefghijklmnopqrstuvwqyz";
    
    //Dots are 1000
    //Dashes are 1500
    String morse[] = {".-","-...","-.-.","-..", ".", "..-.", "--.",
                      "....", "..", ".---", "-.-", ".-..", "--",
                      "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                      "..-", "...-", ".--", "-..-", "-.--", "--.."};
    int morseString;
    int delayArray[]; //mad rhymes yo
    
    //Where is char in morse 
    for (int i=0; i<morse; i++) {
      if (c = ary[i]) {
        morseString = ary[i];
      }
    }

    //Before doing the given letter check the light sensor value

    //Read the morse string
    for (int x=0; x<morseString.length; x++) {
      char d = morseString.charAt(x);

      switch(d)
      {
        case d == '.':
          digitalWrite(LED, HIGH);
          delay(1000);
          digitalWrite(LED, LOW);
          delay(500);
        break;

        case d == '-':
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
  for (int z=0; z<poem.length; z++) {
      char d = poem.charAt(z);

      if(d != ' ') {
          lightLevel = analogRead(sensorPin);
          encodeDelay(d);
      }
  }
  
}


