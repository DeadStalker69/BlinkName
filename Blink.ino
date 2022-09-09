void Morse_Code (char names[])
{
  int size = sizeof(names)/sizeof(names[0]);

  for(int i = 0; i < size; i++)
  {
    if (names[i] == '.')
    {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
      
    }

    else if (names[i] == '-')
    {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(1500);
      digitalWrite(LED_BUILTIN, LOW);
      delay(500);
    }

    else if (names[i] == ' ');
    {
      digitalWrite(LED_BUILTIN, LOW);
      delay(2000);
    }
  }
}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
/*
A = .-          B = -...          C = -.-.          D = -..         E = .         F = ..-.          G = --.         H = ....        I = ..         
J = .---        K = -.-           L = .-..          M = --          N = -.        O = ---           P = .--.        Q = --.-        R = .-.
S = ...         T = -             U = ..-           V = ...-        W = .--       X = -..-          Y = -.--        Z = --..
*/
  Morse_Code(".--. .-. .- -... .... .- -");


}
