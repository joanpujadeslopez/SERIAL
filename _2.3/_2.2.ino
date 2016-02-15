/***************************************************************
**                                                            **
**                Calcular una hipotenusa                     **                             
**                                                            **
***************************************************************/

//******  Includes  ********************************************


//******  Variables  *******************************************
int a = 3;
int b = 4;
int h;

//******  Setup  ***********************************************
void setup(){
   Serial.begin(9600); //inicia la llibrería Serial a 9600bps
   Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.print sqrt(pow(a,2)+ pow(b,2));  // Arrel quadrada de a al cuadrat mes b al cuadrat
  
}


//******  Loop  ************************************************
void loop(){
  
}







 
