#include <EmonLib.h>

/*
            MEDIDOR DE CORRENTE COM ARDUINO
            SENSOR SCT-013-20
            Create by: Everton Cosmo
            email:everton8cosmo@gmail.com 
this code is distributed under the GNU General Public License. 
            Version 2, June 1991

 Copyright (C) 1989, 1991 Free Software Foundation, Inc.
       675 Mass Ave, Cambridge, MA 02139, USA
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

                            Preamble

  The licenses for most software are designed to take away your
freedom to share and change it.  By contrast, the GNU General Public
License is intended to guarantee your freedom to share and change free

software--to make sure the software is free for all its users.  This
General Public License applies to most of the Free Software
Foundation's software and to any other program whose authors commit to
using it.  (Some other Free Software Foundation software is covered by
the GNU Library General Public License instead.)  You can apply it to
your programs, too.  

*/


 
   EnergyMonitor emon1; // Instance
  
   float rede =110.0;
 
void setup() {
    Serial.begin(9600);
    emon1.current(1,29);
   
   

  
 
}

void loop() {
  /*INICIO DE CORRENTE(A)*/
   //Calculate Irms
       double Irms = emon1.calcIrms(1480);
       
      Serial.print("CORRENTE: ");
      
      Serial.print(Irms);
      
      Serial.println(" A");
      delay(1000);
  /*FIM CORRENTE (A)*/

/*INICIO POTÊNCIA(V)*/
double pot = Irms*rede;
    Serial.print("");
    Serial.print("POTENCIA: ");
    round(pot);
    Serial.print(pot);
    Serial.println(" W");
    delay(1000);
/*FIM POTÊNCIA(V)*/
}
