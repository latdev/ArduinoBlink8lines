void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
static int value = 0;
void loop() {
  digitalWrite(LED_BUILTIN, value++ % 2 == 0);
  delay(250);
}
