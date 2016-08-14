#include <Arduino.h>

void setup() {
	Serial.begin(115200);
}

int n = 0;

void loop() {
	Serial.print("Arduino Hello ");
	Serial.println(n++);
	delay(200);
	Serial.println("Mike says hi too   or 2");
}
