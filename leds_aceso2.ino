
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
  delay(500);
  digitalWrite(led_six, HIGH);
  delay(500);

      digitalWrite(led_one, HIGH);
  delay(500);
  digitalWrite(led_one, LOW);
  delay(500);




  digitalWrite(led_two, HIGH);
  delay(500);
  digitalWrite(led_three, HIGH);
  delay(500);
  digitalWrite(led_four, HIGH);
  digitalWrite(led_three, LOW);
  delay(500);
  digitalWrite(led_four, LOW);


  delay(500);


  digitalWrite(led_six, HIGH);
  delay(500);

   digitalWrite(led_seven, HIGH);

  digitalWrite(led_six,LOW);
    delay(500);
   digitalWrite(led_eight, HIGH); 
   
   digitalWrite(led_nine,HIGH);
   digitalWrite(led_six,LOW);
   delay(500);
   digitalWrite(led_seven, LOW);

   digitalWrite(led_two,LOW);
  delay(500);
   
   
   



  //LED 2



   digitalWrite(led_three, HIGH);
  delay(500);
  digitalWrite(led_five, HIGH);
  delay(500);

      digitalWrite(led_one, HIGH);
  delay(500);
  digitalWrite(led_five, LOW);
  delay(500);




  digitalWrite(led_two, HIGH);
  delay(500);
  digitalWrite(led_three, HIGH);
  delay(500);
  digitalWrite(led_one, HIGH);
  digitalWrite(led_three, LOW);
  delay(500);
  digitalWrite(led_four, LOW);


  delay(500);


  digitalWrite(led_six, HIGH);
  delay(500);
  digitalWrite(led_one, LOW);
  
   digitalWrite(led_seven, HIGH);

  digitalWrite(led_six,LOW);
    delay(500);
   digitalWrite(led_eight, HIGH); 
   
   digitalWrite(led_nine,HIGH);
   digitalWrite(led_six,LOW);
   delay(500);
   digitalWrite(led_seven, LOW);

   digitalWrite(led_two,LOW);
    delay(500);
   
  digitalWrite(led_eight,HIGH);
  delay(500);
   digitalWrite(led_nine, LOW);
   delay(500);
  

 digitalWrite(led_one, HIGH);
  delay(500);
  digitalWrite(led_six, HIGH);
  delay(500);

      digitalWrite(led_one, HIGH);
  delay(500);
  digitalWrite(led_one, LOW);
  delay(500);




  digitalWrite(led_two, HIGH);
  delay(500);
  digitalWrite(led_three, HIGH);
  delay(500);
  digitalWrite(led_four, HIGH);
  digitalWrite(led_three, LOW);
  delay(500);
  digitalWrite(led_four, LOW);


  delay(500);


  digitalWrite(led_six, HIGH);
  delay(500);

   digitalWrite(led_seven, HIGH);

  digitalWrite(led_six,LOW);
    delay(500);
   digitalWrite(led_eight, HIGH); 
   
   digitalWrite(led_nine,HIGH);
   digitalWrite(led_six,LOW);
   delay(500);
   digitalWrite(led_seven, LOW);

   digitalWrite(led_two,LOW);
  delay(500);
















  digitalWrite(led_six, HIGH);
  delay(500);
  digitalWrite(led_one, LOW);
  
   digitalWrite(led_seven, HIGH);

  digitalWrite(led_six,LOW);
    delay(500);
   digitalWrite(led_eight, HIGH); 
   
   digitalWrite(led_nine,HIGH);
   digitalWrite(led_six,LOW);
   delay(500);
   digitalWrite(led_seven, LOW);

   digitalWrite(led_two,LOW);
    delay(500);
   
  digitalWrite(led_eight,HIGH);
  delay(500);
   digitalWrite(led_nine, LOW);
   delay(500);
}
