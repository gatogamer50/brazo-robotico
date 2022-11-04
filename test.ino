
#include <Servo.h>

//int angulo0 = 120;
//int angulo1 = 90;
//int angulo2 = 250;
//int angulo3 = 30;
int tm = 5000;
int ang;

Servo miservoD;
Servo miservoR;
Servo miservoL;
Servo miservoU;

void setup()
{
  miservoD.attach(11);
  miservoR.attach(10);
  miservoL.attach(9);
  miservoU.attach(5);
}

//void loop(){miservoD.write(0); miservoR.write(0); miservoL.write(0);  miservoU.write(0);}

/*void loop()
{
  miservoD.write(0);
  delay(tm);  
  miservoD.write(45);
  delay(tm); 
  miservoD.write(90);
  delay(tm);  
  miservoD.write(135);
  delay(tm); 
  miservoD.write(180);
  delay(tm); 
}*/

/*void loop()
{
  miservoL.write(0);
  delay(tm);  
  miservoL.write(45);
  delay(tm); 
  miservoL.write(90);
  delay(tm);  
  miservoL.write(135);
  delay(tm); 
  miservoL.write(180);
  delay(tm); 
}*/

/*void loop()
{
  miservoR.write(0);
  delay(tm);  
  miservoR.write(45);
  delay(tm); 
  miservoR.write(90);
  delay(tm);  
  miservoR.write(135);
  delay(tm); 
  miservoR.write(180);
  delay(tm); 
}*/

/*void loop()
{
  miservoU.write(0);
  delay(tm);  
  miservoU.write(40);
  delay(tm); 
}*/

/*void loop()
{
  miservoL.write(0);
  miservoR.write(0);
  delay(tm); 
  miservoL.write(45);
  miservoR.write(45);
  delay(tm);
}*/

/*void loop()
{
  for(ang-0;ang<60;ang++)
  {
    miservoU.write(ang);
    delay(20);       
  } 
    for(ang-60;ang>0;ang--)
  {
    miservoU.write(ang);
    delay(20);       
  } 
}*/

void loop()
{
  //miservoD.write(0); miservoR.write(0); miservoL.write(0);  miservoU.write(0);
  for(ang-60;ang>0;ang--)
  {
    miservoU.write(ang);
    delay(20);       
  }   
  for(ang-0;ang<60;ang++)
  {
    miservoU.write(ang);
    delay(20);       
  } 
  
  for(ang-0;ang<180;ang++)
  {
     miservoL.write(ang);
     miservoR.write(ang);
     delay(20);       
  } 

  for(ang-0;ang<180;ang++)
  {
    miservoD.write(ang);
    delay(20);
  }
  for(ang-180;ang>0;ang--)
  {
     miservoL.write(ang);
     miservoR.write(ang);
     delay(20);       
  }
  
  for(ang-0;ang<60;ang++)
  {
    miservoU.write(ang);
    delay(20);       
  } 

  for(ang-0;ang<180;ang++)
  {
    miservoL.write(ang);
    miservoR.write(ang);
    delay(20);       
  }   
    
  for(ang-180;ang>0;ang--)
  {
    miservoD.write(ang);
    delay(20);
  }

    for(ang-180;ang>0;ang--)
  {
     miservoL.write(ang);
     miservoR.write(ang);
     delay(20);       
  }

}
