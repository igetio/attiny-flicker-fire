// LED Fire Effect

int ledPin1 = 0;
int ledPin2 = 1;
int ledPin3 = 4;

void setup()
{
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}

void loop() {
//analogWrite(ledPin1, random(200)+55);
//analogWrite(ledPin2, random(200)+55);
//analogWrite(ledPin3, random(200)+55);
analogWrite(ledPin1, random(120)+135);
analogWrite(ledPin2, random(120)+135);
analogWrite(ledPin3, random(120)+135);

delay(random(100));
}
