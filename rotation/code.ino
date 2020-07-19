//pin declartaion
//pin mode declaration
//pin data declaration

#include <Servo.h>
int servoPin = 13;
int led1 = 8;
int led2 = 7;
int led3 = 6;
int led4 = 5;
int led5 = 4;
int pos = 0;

Servo servo1;

void setup()
{
    servo1.attach(servoPin);

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
}

void loop()
{
    for (pos = 0; pos < 45; pos += 1)
    {
        servo1.write(pos);
        delay(15);
        digitalWrite(led1, HIGH);
        delay(500);
    }

    for (pos = 45; pos < 90; pos += 1)
    {
        servo1.write(pos);
        delay(15);
        digitalWrite(led2, HIGH);
        delay(500);
    }
    for (pos = 90; pos < 135; pos += 1)
    {
        servo1.write(pos);
        delay(15);
        digitalWrite(led3, HIGH);
        delay(500);
    }
    for (pos = 135; pos < 180; pos += 1)
    {
        servo1.write(pos);
        delay(15);
        digitalWrite(led4, HIGH);
        delay(500);
    }
    for (pos = 180; pos >= 1; pos -= 1)
    {
        servo1.write(pos);
        delay(15);
        digitalWrite(led5, HIGH);
        delay(500);
    }
}