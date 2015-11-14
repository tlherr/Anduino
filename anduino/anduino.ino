// Blinking LED
const int LED = 12; //LED connected to digital pin 13
const int Light = 0;
int lightLevel, high = 0, low = 1023;

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


    //Read the morse string
    for (int x=0; x<morseString.length; x++) {
      char d = morseString.charAt(x);

      switch(d)
      {
        case d == '.':

        break;

        case d == '=':

        break;
      }
    }  
           
}



void setup() {
  pinMode(LED, OUTPUT); //sets the digital pin as output
  lightLevel = analogRead(sensorPin);
}
 
void loop() {
  //So
  digitalWrite(LED, HIGH); //S1 on
  delay(1000);
  digitalWrite(LED, LOW); //S1 off
  delay(500);
  digitalWrite(LED, HIGH); //S2 on
  delay(1000);
  digitalWrite(LED, LOW); //S2 off
  delay(500);
  digitalWrite(LED, HIGH); //S3 on
  delay(1000);
  digitalWrite(LED, LOW); //S3 off
  delay(500);
  digitalWrite(LED, HIGH); //O1 on
  delay(1500);
  digitalWrite(LED, LOW); //O1 off
  delay(500);
  digitalWrite(LED, HIGH); //O2 on
  delay(1500);
  digitalWrite(LED, LOW); //O2 off
  delay(500);
  digitalWrite(LED, HIGH); //O3 on
  delay(1500);
  digitalWrite(LED, LOW); //O3 off
  delay(2000);
  //Long
  digitalWrite(LED, HIGH); //L1 on
  delay(1000);
  digitalWrite(LED, LOW); //L1 off
  delay(500);
  digitalWrite(LED, HIGH); //L2 on
  delay(1500);
  digitalWrite(LED, LOW); //L2 off
  delay(500);
  digitalWrite(LED, HIGH); //L3 on
  delay(1000);
  digitalWrite(LED, LOW); //L3 off
  delay(500);
  digitalWrite(LED, HIGH); //L4 on
  delay(1000);
  digitalWrite(LED, LOW); //L4 off
  delay(500);
  digitalWrite(LED, HIGH); //O1 on
  delay(1500);
  digitalWrite(LED, LOW); //O1 off
  delay(500);
  digitalWrite(LED, HIGH); //O2 on
  delay(1500);
  digitalWrite(LED, LOW); //O2 off
  delay(500);
  digitalWrite(LED, HIGH); //O3 on
  delay(1500);
  digitalWrite(LED, LOW); //O3 off
  delay(500);
  digitalWrite(LED, HIGH); //N1 on
  delay(1500);
  digitalWrite(LED, LOW); //N1 off
  delay(500);
  digitalWrite(LED, HIGH); //N2 on
  delay(1000);
  digitalWrite(LED, LOW); //N2 off
  delay(500);
  digitalWrite(LED, HIGH); //G1 on
  delay(1500);
  digitalWrite(LED, LOW); //G1 off
  delay(500);
  digitalWrite(LED, HIGH); //G2 on
  delay(1500);
  digitalWrite(LED, LOW); //G2 off
  delay(500);
  digitalWrite(LED, HIGH); //G3 on
  delay(1000);
  digitalWrite(LED, LOW); //G3 off
  delay(2000);
  //As
  digitalWrite(LED, HIGH); //A1 on
  delay(1000);
  digitalWrite(LED, LOW); //A1 off
  delay(500);
  digitalWrite(LED, HIGH); //A2 on
  delay(1500);
  digitalWrite(LED, LOW); //A2 off
  delay(500);
  digitalWrite(LED, HIGH); //S1 on
  delay(1000);
  digitalWrite(LED, LOW); //S1 off
  delay(500);
  digitalWrite(LED, HIGH); //S2 on
  delay(1000);
  digitalWrite(LED, LOW); //S2 off
  delay(500);
  digitalWrite(LED, HIGH); //S3 on
  delay(1000);
  digitalWrite(LED, LOW); //S3 off
  delay(2000);
  //Men
  digitalWrite(LED, HIGH); //M1 on
  delay(1500);
  digitalWrite(LED, LOW); //M1 off
  delay(500);
  digitalWrite(LED, HIGH); //M2 on
  delay(1500);
  digitalWrite(LED, LOW); //M2 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(500);
  digitalWrite(LED, HIGH); //N1 on
  delay(1500);
  digitalWrite(LED, LOW); //N1 off
  delay(500);
  digitalWrite(LED, HIGH); //N2 on
  delay(1000);
  digitalWrite(LED, LOW); //N2 off
  delay(2000);
  //Can
  digitalWrite(LED, HIGH); //C1 on
  delay(1500);
  digitalWrite(LED, LOW); //C1 off
  delay(500);
  digitalWrite(LED, HIGH); //C2 on
  delay(1000);
  digitalWrite(LED, LOW); //C2 off
  delay(500);
  digitalWrite(LED, HIGH); //C3 on
  delay(1500);
  digitalWrite(LED, LOW); //C3 off
  delay(500);
  digitalWrite(LED, HIGH); //C4 on
  delay(1000);
  digitalWrite(LED, LOW); //C4 off
  delay(500);
  digitalWrite(LED, HIGH); //A1 on
  delay(1000);
  digitalWrite(LED, LOW); //A1 off
  delay(500);
  digitalWrite(LED, HIGH); //A2 on
  delay(1500);
  digitalWrite(LED, LOW); //A2 off
  delay(500);
  digitalWrite(LED, HIGH); //N1 on
  delay(1500);
  digitalWrite(LED, LOW); //N1 off
  delay(2000);
  //Breathe
  digitalWrite(LED, HIGH); //B1 on
  delay(1500);
  digitalWrite(LED, LOW); //B1 off
  delay(500);
  digitalWrite(LED, HIGH); //B2 on
  delay(1000);
  digitalWrite(LED, LOW); //B2 off
  delay(500);
  digitalWrite(LED, HIGH); //B3 on
  delay(1000);
  digitalWrite(LED, LOW); //B3 off
  delay(500);
  digitalWrite(LED, HIGH); //B4 on
  delay(1000);
  digitalWrite(LED, LOW); //B4 off
  delay(500);
  digitalWrite(LED, HIGH); //R1 on
  delay(1000);
  digitalWrite(LED, LOW); //R1 off
  delay(500);
  digitalWrite(LED, HIGH); //R2 on
  delay(1500);
  digitalWrite(LED, LOW); //R2 off
  delay(500);
  digitalWrite(LED, HIGH); //R3 on
  delay(1000);
  digitalWrite(LED, LOW); //R3 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(500);
  digitalWrite(LED, HIGH); //A1 on
  delay(1000);
  digitalWrite(LED, LOW); //A1 off
  delay(500);
  digitalWrite(LED, HIGH); //A2 on
  delay(1500);
  digitalWrite(LED, LOW); //A2 off
  delay(500);
  digitalWrite(LED, HIGH); //T1 on
  delay(1500);
  digitalWrite(LED, LOW); //T1 off
  delay(500);
  digitalWrite(LED, HIGH); //H1 on
  delay(1000);
  digitalWrite(LED, LOW); //H1 off
  delay(500);
  digitalWrite(LED, HIGH); //H2 on
  delay(1000);
  digitalWrite(LED, LOW); //H2 off
  delay(500);
  digitalWrite(LED, HIGH); //H3 on
  delay(1000);
  digitalWrite(LED, LOW); //H3 off
  delay(500);
  digitalWrite(LED, HIGH); //H4 on
  delay(1000);
  digitalWrite(LED, LOW); //H4 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(2000);
  //Or
  digitalWrite(LED, HIGH); //O1 on
  delay(1500);
  digitalWrite(LED, LOW); //O1 off
  delay(500);
  digitalWrite(LED, HIGH); //O2 on
  delay(1500);
  digitalWrite(LED, LOW); //O2 on
  delay(500);
  digitalWrite(LED, HIGH); //O3 on
  delay(1500);
  digitalWrite(LED, LOW); //O3 off
  delay(500);
  digitalWrite(LED, HIGH); //R1 on
  delay(1000);
  digitalWrite(LED, LOW); //R1 off
  delay(500);
  digitalWrite(LED, HIGH); //R2 on
  delay(1500);
  digitalWrite(LED, LOW); //R2 off
  delay(500);
  digitalWrite(LED, HIGH); //R3 on
  delay(1000);
  digitalWrite(LED, LOW); //R3 off
  delay(2000);
  //Eyes
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(500);
  digitalWrite(LED, HIGH); //Y1 on
  delay(1500);
  digitalWrite(LED, LOW); //Y1 off
  delay(500);
  digitalWrite(LED, HIGH); //Y2 on
  delay(1000);
  digitalWrite(LED, HIGH); //Y3 on
  delay(1500);
  digitalWrite(LED, LOW); //Y3 off
  delay(500);
  digitalWrite(LED, HIGH); //Y4 on
  delay(1500);
  digitalWrite(LED, LOW); //Y4 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(500);
  digitalWrite(LED, HIGH); //S1 on
  delay(1000);
  digitalWrite(LED, LOW); //S1 off
  delay(500);
  digitalWrite(LED, HIGH); //S2 on
  delay(1000);
  digitalWrite(LED, LOW); //S2 off
  delay(500);
  digitalWrite(LED, HIGH); //S3 on
  delay(1000);
  digitalWrite(LED, LOW); //S3 off
  delay(2000);
  //Can
  digitalWrite(LED, HIGH); //C1 on
  delay(1500);
  digitalWrite(LED, LOW); //C1 off
  delay(500);
  digitalWrite(LED, HIGH); //C2 on
  delay(1000);
  digitalWrite(LED, LOW); //C2 off
  delay(500);
  digitalWrite(LED, HIGH); //C3 on
  delay(1500);
  digitalWrite(LED, LOW); //C3 off
  delay(500);
  digitalWrite(LED, HIGH); //C4 on
  delay(1000);
  digitalWrite(LED, LOW); //C4 off
  delay(500);
  digitalWrite(LED, HIGH); //A1 on
  delay(1000);
  digitalWrite(LED, LOW); //A1 off
  delay(500);
  digitalWrite(LED, HIGH); //A2 on
  delay(1500);
  digitalWrite(LED, LOW); //A2 off
  delay(500);
  digitalWrite(LED, HIGH); //N1 on
  delay(1500);
  digitalWrite(LED, LOW); //N1 off
  delay(2000);
  //See
  digitalWrite(LED, HIGH); //S1 on
  delay(1000);
  digitalWrite(LED, LOW); //S1 off
  delay(500);
  digitalWrite(LED, HIGH); //S2 on
  delay(1000);
  digitalWrite(LED, LOW); //S2 off
  delay(500);
  digitalWrite(LED, HIGH); //S3 on
  delay(1000);
  digitalWrite(LED, LOW); //S3 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(2000);
  //So
  digitalWrite(LED, HIGH); //S1 on
  delay(1000);
  digitalWrite(LED, LOW); //S1 off
  delay(500);
  digitalWrite(LED, HIGH); //S2 on
  delay(1000);
  digitalWrite(LED, LOW); //S2 off
  delay(500);
  digitalWrite(LED, HIGH); //S3 on
  delay(500);
  digitalWrite(LED, LOW); //S3 off
  delay(500);
  digitalWrite(LED, HIGH); //O1 on
  delay(1500);
  digitalWrite(LED, LOW); //O1 off
  delay(500);
  digitalWrite(LED, HIGH); //O2 on
  delay(1500);
  digitalWrite(LED, LOW); //O2 off
  delay(500);
  digitalWrite(LED, HIGH); //O3 on
  delay(1500);
  digitalWrite(LED, LOW); //O3 off
  delay(2000);
  //Long
  digitalWrite(LED, HIGH); //L1 on
  delay(1000);
  digitalWrite(LED, LOW); //L1 off
  delay(500);
  digitalWrite(LED, HIGH); //L2 on
  delay(1500);
  digitalWrite(LED, LOW); //L2 off
  delay(500);
  digitalWrite(LED, HIGH); //L3 on
  delay(1000);
  digitalWrite(LED, LOW); //L3 off
  delay(500);
  digitalWrite(LED, HIGH); //L4 on
  delay(1000);
  digitalWrite(LED, LOW); //L4 off
  delay(500);
  digitalWrite(LED, HIGH); //O1 on
  delay(1500);
  digitalWrite(LED, LOW); //O1 off
  delay(500);
  digitalWrite(LED, HIGH); //O2 on
  delay(1500);
  digitalWrite(LED, LOW); //O2 on
  delay(500);
  digitalWrite(LED, HIGH); //O3 on
  delay(1500);
  digitalWrite(LED, LOW); //O3 off
  delay(500);
  digitalWrite(LED, HIGH); //N1 on
  delay(1500);
  digitalWrite(LED, LOW); //N1 off
  delay(500);
  digitalWrite(LED, HIGH); //N2 on
  delay(1000);
  digitalWrite(LED, LOW); //N2 off
  delay(500);
  digitalWrite(LED, HIGH); //G1 on
  delay(1500);
  digitalWrite(LED, LOW); //G1 off
  delay(500);
  digitalWrite(LED, HIGH); //G2 on
  delay(1500);
  digitalWrite(LED, LOW); //G2 off
  delay(500);
  digitalWrite(LED, HIGH); //G3 on
  delay(1000);
  digitalWrite(LED, LOW); //G3 off
  delay(2000);
  //Lives
  digitalWrite(LED, HIGH); //L1 on
  delay(1000);
  digitalWrite(LED, LOW); //L1 off
  delay(500);
  digitalWrite(LED, HIGH); //L2 on
  delay(1500);
  digitalWrite(LED, LOW); //L2 off
  delay(500);
  digitalWrite(LED, HIGH); //L3 on
  delay(1000);
  digitalWrite(LED, LOW); //L3 off
  delay(500);
  digitalWrite(LED, HIGH); //L4 on
  delay(1000);
  digitalWrite(LED, LOW); //L4 off
  delay(500);
  digitalWrite(LED, HIGH); //I1 on
  delay(1000);
  digitalWrite(LED, LOW); //I1 off
  delay(500);
  digitalWrite(LED, HIGH); //I2 on
  delay(1000);
  digitalWrite(LED, LOW); //I2 off
  delay(500);
  digitalWrite(LED, HIGH); //V1 on
  delay(1000);
  digitalWrite(LED, LOW); //V1 off
  delay(500);
  digitalWrite(LED, HIGH); //V2 on
  delay(1000);
  digitalWrite(LED, LOW); //V2 off
  delay(500);
  digitalWrite(LED, HIGH); //V3 on
  delay(1000);
  digitalWrite(LED, LOW); //V3 off
  delay(500);
  digitalWrite(LED, HIGH); //V4 on
  delay(1500);
  digitalWrite(LED, LOW); //V4 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, HIGH); //S1 on
  delay(1000);
  digitalWrite(LED, LOW); //S1 off
  delay(500);
  digitalWrite(LED, HIGH); //S2 on
  delay(1000);
  digitalWrite(LED, LOW); //S2 off
  delay(500);
  digitalWrite(LED, HIGH); //S3 on
  delay(1000);
  digitalWrite(LED, LOW); //S3 off
  delay(2000);
  //This
  digitalWrite(LED, HIGH); //T1 on
  delay(1500);
  digitalWrite(LED, LOW); //T1 off
  delay(500);
  digitalWrite(LED, HIGH); //H1 on
  delay(1000);
  digitalWrite(LED, LOW); //H1 off
  delay(500);
  digitalWrite(LED, HIGH); //H2 on
  delay(1000);
  digitalWrite(LED, LOW); //H2 off
  delay(500);
  digitalWrite(LED, HIGH); //H3 on
  delay(1000);
  digitalWrite(LED, LOW); //H3 off
  delay(500);
  digitalWrite(LED, HIGH); //H4 on
  delay(1000);
  digitalWrite(LED, LOW); //H4 off
  delay(500);
  digitalWrite(LED, HIGH); //I1 on
  delay(1000);
  digitalWrite(LED, LOW); //I1 off
  delay(500);
  digitalWrite(LED, HIGH); //I2 on
  delay(1000);
  digitalWrite(LED, LOW); //I2 off
  delay(500);
  digitalWrite(LED, HIGH); //S1 on
  delay(1000);
  digitalWrite(LED, LOW); //S1 off
  delay(500);
  digitalWrite(LED, HIGH); //S2 on
  delay(1000);
  digitalWrite(LED, LOW); //S2 off
  delay(500);
  digitalWrite(LED, HIGH); //S3 on
  delay(500);
  digitalWrite(LED, LOW); //S3 off
  delay(2000);
  //And
  digitalWrite(LED, HIGH); //A1 on
  delay(1000);
  digitalWrite(LED, LOW); //A1 off
  delay(500);
  digitalWrite(LED, HIGH); //A2 on
  delay(1500);
  digitalWrite(LED, LOW); //A2 off
  delay(500);
  digitalWrite(LED, HIGH); //N1 on
  delay(1500);
  digitalWrite(LED, LOW); //N1 off
  delay(500);
  digitalWrite(LED, HIGH); //N2 on
  delay(1000);
  digitalWrite(LED, LOW); //N2 off
  delay(500);
  digitalWrite(LED, HIGH); //D1 on
  delay(1500);
  digitalWrite(LED, LOW); //D1 off
  delay(500);
  digitalWrite(LED, HIGH); //D2 on
  delay(1000);
  digitalWrite(LED, LOW); //D2 off
  delay(500);
  digitalWrite(LED, HIGH); //D3 on
  delay(1000);
  digitalWrite(LED, LOW); //D3 off
  delay(2000);
  //This
  digitalWrite(LED, HIGH); //T1 on
  delay(1500);
  digitalWrite(LED, LOW); //T1 off
  delay(500);
  digitalWrite(LED, HIGH); //H1 on
  delay(1000);
  digitalWrite(LED, LOW); //H1 off
  delay(500);
  digitalWrite(LED, HIGH); //H2 on
  delay(1000);
  digitalWrite(LED, LOW); //H2 off
  delay(500);
  digitalWrite(LED, HIGH); //H3 on
  delay(1000);
  digitalWrite(LED, LOW); //H3 off
  delay(500);
  digitalWrite(LED, HIGH); //H4 on
  delay(1000);
  digitalWrite(LED, LOW); //H4 off
  delay(500);
  digitalWrite(LED, HIGH); //I1 on
  delay(1000);
  digitalWrite(LED, LOW); //I1 off
  delay(500);
  digitalWrite(LED, HIGH); //I2 on
  delay(1000);
  digitalWrite(LED, LOW); //I2 off
  delay(500);
  digitalWrite(LED, HIGH); //S1 on
  delay(1000);
  digitalWrite(LED, LOW); //S1 off
  delay(500);
  digitalWrite(LED, HIGH); //S2 on
  delay(1000);
  digitalWrite(LED, LOW); //S2 off
  delay(500);
  digitalWrite(LED, HIGH); //S3 on
  delay(500);
  digitalWrite(LED, LOW); //S3 off
  delay(2000);
  //Gives
  digitalWrite(LED, HIGH); //G1 on
  delay(1500);
  digitalWrite(LED, LOW); //G1 off
  delay(500);
  digitalWrite(LED, HIGH); //G2 on
  delay(1500);
  digitalWrite(LED, LOW); //G2 off
  delay(500);
  digitalWrite(LED, HIGH); //G3 on
  delay(1000);
  digitalWrite(LED, LOW); //G3 off
  delay(500);
  digitalWrite(LED, HIGH); //I1 on
  delay(1000);
  digitalWrite(LED, LOW); //I1 off
  delay(500);
  digitalWrite(LED, HIGH); //I2 on
  delay(1000);
  digitalWrite(LED, LOW); //I2 off
  delay(500);
  digitalWrite(LED, HIGH); //V1 on
  delay(1000);
  digitalWrite(LED, LOW); //V1 off
  delay(500);
  digitalWrite(LED, HIGH); //V2 on
  delay(1000);
  digitalWrite(LED, LOW); //V2 off
  delay(500);
  digitalWrite(LED, HIGH); //V3 on
  delay(1000);
  digitalWrite(LED, LOW); //V3 off
  delay(500);
  digitalWrite(LED, HIGH); //V4 on
  delay(1500);
  digitalWrite(LED, LOW); //V4 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(500);
  digitalWrite(LED, HIGH); //S1 on
  delay(1000);
  digitalWrite(LED, LOW); //S1 off
  delay(500);
  digitalWrite(LED, HIGH); //S2 on
  delay(1000);
  digitalWrite(LED, LOW); //S2 off
  delay(500);
  digitalWrite(LED, HIGH); //S3 on
  delay(500);
  digitalWrite(LED, LOW); //S3 off
  delay(2000);
  //Life
  digitalWrite(LED, HIGH); //L1 on
  delay(1000);
  digitalWrite(LED, LOW); //L1 off
  delay(500);
  digitalWrite(LED, HIGH); //L2 on
  delay(1500);
  digitalWrite(LED, LOW); //L2 off
  delay(500);
  digitalWrite(LED, HIGH); //L3 on
  delay(1000);
  digitalWrite(LED, LOW); //L3 off
  delay(500);
  digitalWrite(LED, HIGH); //L4 on
  delay(1000);
  digitalWrite(LED, LOW); //L4 off
  delay(500);
  digitalWrite(LED, HIGH); //I1 on
  delay(1000);
  digitalWrite(LED, LOW); //I1 off
  delay(500);
  digitalWrite(LED, HIGH); //I2 on
  delay(1000);
  digitalWrite(LED, LOW); //I2 off
  delay(500);
  digitalWrite(LED, HIGH); //F1 on
  delay(1000);
  digitalWrite(LED, LOW); //F1 off
  delay(500);
  digitalWrite(LED, HIGH); //F2 on
  delay(1000);
  digitalWrite(LED, LOW); //F2 off
  delay(500);
  digitalWrite(LED, HIGH); //F3 on
  delay(1500);
  digitalWrite(LED, LOW); //F3 off
  delay(500);
  digitalWrite(LED, HIGH); //F4 on
  delay(1000);
  digitalWrite(LED, LOW); //F4 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(2000);
  //To
  digitalWrite(LED, HIGH); //T1 on
  delay(1500);
  digitalWrite(LED, LOW); //T1 off
  delay(500);
  digitalWrite(LED, HIGH); //O1 on
  delay(1500);
  digitalWrite(LED, LOW); //O1 off
  delay(500);
  digitalWrite(LED, HIGH); //O2 on
  delay(1500);
  digitalWrite(LED, LOW); //O2 on
  delay(500);
  digitalWrite(LED, HIGH); //O3 on
  delay(1500);
  digitalWrite(LED, LOW); //O3 off
  delay(2000);
  //Thee
  digitalWrite(LED, HIGH); //T1 on
  delay(1500);
  digitalWrite(LED, LOW); //T1 off
  delay(500);
  digitalWrite(LED, LOW); //H1 off
  delay(500);
  digitalWrite(LED, HIGH); //H2 on
  delay(1000);
  digitalWrite(LED, LOW); //H2 off
  delay(500);
  digitalWrite(LED, HIGH); //H3 on
  delay(1000);
  digitalWrite(LED, LOW); //H3 off
  delay(500);
  digitalWrite(LED, HIGH); //H4 on
  delay(1000);
  digitalWrite(LED, LOW); //H4 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, HIGH); //E1 on
  delay(1000);
  digitalWrite(LED, LOW); //E1 off
  delay(500);
  digitalWrite(LED, HIGH); //E1 on
  delay(2000);
  //IT FINALLY ENDS OH MY GOD
 
}
