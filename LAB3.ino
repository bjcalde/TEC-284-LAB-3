void setup() {
  // put your setup code here, to run once:
  pinMode(A6, INPUT);
  int lightLevel = analogRead(A6);
  Serial.begin(9600);
  if (lightLevel < 100) 
    Serial.println("It's dark as heck.");
  else if (lightLevel < 200) 
    Serial.println("It's dim in here");
  else if (lightLevel < 700) 
    Serial.println("It's a little bright in here");
  else if (lightLevel < 1024) 
    Serial.println("It's really bright!");
  Serial.println(lightLevel);
      
    
    
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
