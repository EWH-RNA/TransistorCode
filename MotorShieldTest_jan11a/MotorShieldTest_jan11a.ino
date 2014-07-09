void setup() {
  
  //Setup Channel A
  pinMode(12, OUTPUT); //Initiates Motor Channel A pin
  pinMode(9, OUTPUT); //Initiates Brake Channel A pin
  
  pinMode(13, OUTPUT); //Initiates Motor Channel B pin
  pinMode(8, OUTPUT); //Initiates Brake Channel B pin
  
}

void loop(){
    

    digitalWrite(12, HIGH); //Make Direction of A forward
    digitalWrite(9, LOW);  // Turn off Brake for A
    analogWrite(3, 255);  //Turn on Channel A at speed 127
    delay(5000); // Holds On for 5 seconds
    digitalWrite(9, HIGH); //Turns Brake for A on
    delay(5000); // Waits 5 seconds before B turns on

    digitalWrite(13, HIGH); //Make Direction of B forward
    digitalWrite(8, LOW);  // Turn off Brake for B
    analogWrite(11, 255);  //Turn on Channel B at speed 127
    delay(5000); // Holds On for 5 seconds
    digitalWrite(8, HIGH); //Turns Brake for B on  
  
    delay(5000); //Waits for 5 seconds before repeating 
}
