#define LED_1 0//connect LED_1 to Digital Pin0 of Arduino
#define LED_2 1//connect LED_2 to Digital Pin1 of Arduino
#define LED_3 2//connect LED_3 to Digital Pin2 of Arduino
#define LED_4 3//connect LED_4 to Digital Pin3 of Arduino
#define LED_5 4//connect LED_5 to Digital Pin4 of Arduino
#define LED_6 5//connect LED_6 to Digital Pin5 of Arduino
#define LED_7 6//connect LED_7 to Digital Pin6 of Arduino
#define LED_8 7//connect LED_8 to Digital Pin7 of Arduino
#define LED_9 8//connect LED_9 to Digital Pin8 of Arduino
#define LED_10 9//connect LED_10 to Digital Pin9 of Arduino
#define LED_11 10//connect LED_11 to Digital Pin10 of Arduino
#define LED_12 11//connect LED_12 to Digital Pin11 of Arduino
#define LED_13 12//connect LED_13 to Digital Pin12 of Arduino
#define LED_14 13//connect LED_14 to Digital Pin13 of Arduino
#define LED_15 14//connect LED_15 to A0 of Arduino
#define LED_16 15//connect LED_16 to A1 of Arduino
#define LED_17 16//connect LED_17 to A2 of Arduino
#define LED_18 17//connect LED_18 to A3 of Arduino
#define LED_19 18//connect LED_19 to A4 of Arduino
#define LED_20 19//connect LED_20 to A5 of Arduino
int i;// global variable int i
void setup() {
pinMode(LED_1,OUTPUT);// set all the pins as an OUTPUT
pinMode(LED_2,OUTPUT);
pinMode(LED_3,OUTPUT);
pinMode(LED_4,OUTPUT);
pinMode(LED_5,OUTPUT);
pinMode(LED_6,OUTPUT);
pinMode(LED_7,OUTPUT);
pinMode(LED_8,OUTPUT);
pinMode(LED_9,OUTPUT);
pinMode(LED_10,OUTPUT);
pinMode(LED_11,OUTPUT);
pinMode(LED_12,OUTPUT);
pinMode(LED_13,OUTPUT);
pinMode(LED_14,OUTPUT);
pinMode(LED_15,OUTPUT);
pinMode(LED_16,OUTPUT);
pinMode(LED_17,OUTPUT);
pinMode(LED_18,OUTPUT);
pinMode(LED_19,OUTPUT);
pinMode(LED_20,OUTPUT);
}

void loop() {
  for(i=LED_1;i<=LED_20;i++)
{digitalWrite(i,HIGH);
delay(100);
digitalWrite(i,LOW);
delay(50);
}  
}
