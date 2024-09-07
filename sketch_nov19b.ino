const int trigPin1 = 13;
const int echoPin1 = 12;
const int buzzer = 7;
long duration1;
int distance1;
int safetyDistance;
void setup() {
 pinMode(trigPin1, OUTPUT);
 pinMode(echoPin1, INPUT);
 pinMode(buzzer, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 digitalWrite(trigPin1, LOW);
 digitalWrite(trigPin1, HIGH);
 delayMicroseconds(15);

 duration1 = pulseIn(echoPin1, HIGH);

 distance1= duration1*0.034/2;

 if (safetyDistance = distance1){
 if (safetyDistance <= 10){
 digitalWrite(buzzer, HIGH);
 }
 else{
 digitalWrite(buzzer, LOW);
 }
 }
}