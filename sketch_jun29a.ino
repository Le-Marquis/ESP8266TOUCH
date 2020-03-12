const int ain=A0;
const int LED=2;
int inputVal=0;

void setup()
{
  pinMode(LED,OUTPUT); 
  Serial.begin(9600);
}
void loop()
{
inputVal=analogRead(ain);

if(inputVal<=20){
analogWrite(LED,1024);
}
else if(inputVal>20 && inputVal<50)analogWrite(LED,768);
else if(inputVal>50 && inputVal<100)analogWrite(LED,512);
else if(inputVal>100 && inputVal<1000)analogWrite(LED,256);
else {analogWrite(LED,0);}

//for serial monitor

for(int i=0;i<inputVal;i++){
Serial.print("-");
}

Serial.println(inputVal);
}
