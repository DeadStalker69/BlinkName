void Morse_Code (char names[])                      // function to determine blinking pattern for a given element in array.
{
  int size = sizeof(names)/sizeof(names[0]);        //stores the number of elemnets present in the array in the variable 'size'.

  for(int i = 0; i < size; i++)                     //loop running from 0 to the number of elements present in the array.
  {
    if (names[i] == '.')                            // if case for a dot Morse code element.
    {                                               // have a LED high state for 500 milliseconds to represent a short blink.
      digitalWrite(LED_BUILTIN, HIGH);              
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
      
    }

    else if (names[i] == '-')                       // if case for a dash Morse code element.
    {                                               // have a LED high state for 1500 milliseconds to reprent a long blink.
      digitalWrite(LED_BUILTIN, HIGH);
      delay(1500);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
    }

    else if (names[i] == ' ');                    // if case for a blank time btween two alphabets.
    {                                             // haev a LED Low state for 2500 milliseconds more to represent a differentiation betweentwo alphabets
      digitalWrite(LED_BUILTIN, LOW);
      delay(2500);
    }
  }
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);                 // defining output port.
}

// the loop function runs over and over again forever
void loop() {
/* Morse code for all the alphabets
A = .-          B = -...          C = -.-.          D = -..         E = .         F = ..-.          G = --.         H = ....        I = ..         
J = .---        K = -.-           L = .-..          M = --          N = -.        O = ---           P = .--.        Q = --.-        R = .-.
S = ...         T = -             U = ..-           V = ...-        W = .--       X = -..-          Y = -.--        Z = --..
*/
  Morse_Code(".--. .-. .- -... .... .- -");     


}
