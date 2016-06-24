
/*The variable global*/

 int led_one = 13; 
 int led_two = 12; 
 int led_three = 11; 
 int led_four = 10; 
 int led_five = 9; 
 int led_six = 8; 
 int led_seven = 7;   
 int led_eight = 6; 
 int led_nine = 5;

void setup() {
  
   pinMode(led_one,OUTPUT);
    pinMode(led_two,OUTPUT);
     pinMode(led_three,OUTPUT);
      pinMode(led_four,OUTPUT);
       pinMode(led_five,OUTPUT);
        pinMode(led_six,OUTPUT);
         pinMode(led_seven,OUTPUT);
          pinMode(led_eight,OUTPUT);
           pinMode(led_nine,OUTPUT);
            

}

void loop() {


    /*
      OBS:ALL "LOW"
        IS DOWN BRIGHTNESS
    */
  
   //LED 1
  digitalWrite(led_one, HIGH);
  delay(1000); //wait 1min
  digitalWrite(led_one, LOW);

  //LED 2
   digitalWrite(led_two, HIGH);
    delay(1000); 
    digitalWrite(led_two, LOW);
    
    //LED 3
    digitalWrite(led_three, HIGH);
    delay(1000);
    digitalWrite(led_three,LOW);
    
    //LED 4
     digitalWrite(led_four, HIGH);
     delay(1000);
     digitalWrite(led_four, LOW);


      //LED 5
      digitalWrite(led_five, HIGH);
      delay(1000);
      digitalWrite(led_five, LOW);
      
      //LED 6
       digitalWrite(led_six, HIGH);
       delay(1000);
       digitalWrite(led_six,LOW);

       //LED 7
        digitalWrite(led_seven, HIGH);
        delay(1000);
        digitalWrite(led_seven,LOW);
        
        //LED 8
         digitalWrite(led_eight, HIGH);
         delay(1000);
         digitalWrite(led_eight,LOW);

         //LED 9 
         digitalWrite(led_nine, HIGH);
         delay(1000);
         digitalWrite(led_nine, LOW);
         delay(500);
}
