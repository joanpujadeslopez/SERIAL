/***************************************************************
**                                                            **
**  Operacions de suma, resta, multiplicació, porcentatge i   **
**                          divisió                           **                             
**                                                            **
***************************************************************/

//******  Includes  ********************************************

//******  Variables  *******************************************
int a=5;
int b=10;
int c=20;


//******  Setup  ***********************************************
void setup(){
  Serial.begin(9600); //inicia la llibrería Serial a 9600bps
  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // suma
  Serial.println(a + b);
  Serial.print("a * c = ");       // multiplicació
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divisió
  Serial.println(c / b);

  Serial.print("c % b = ");       // porcentatge entre c i b
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // resta
  Serial.println(b - c);
}

void loop()  // we need this to be here even though its emptys'ha de escriure encara que no ho fem servir
{
}









 
