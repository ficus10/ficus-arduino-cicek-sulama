
int sensor = A0; 
int motor1 = 8; 
int motor2 = 7;
int sensor_degeri;
void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensor_degeri = analogRead(sensor);
  sensor_degeri = map(sensor_degeri, 0, 1023, 0, 100);
  
  Serial.println(sensor_degeri);
  if (sensor_degeri > 30)
{
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, LOW);

}
else 

digitalWrite(motor1, LOW);
digitalWrite(motor2, LOW);


}
