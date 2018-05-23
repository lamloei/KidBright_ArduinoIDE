#define LED_BT 23
#define LED_WIFI 2
#define LED_NTP 15
#define LED_IOT 12
#define LED_USB 25

void setup() {
  pinMode(LED_BT, OUTPUT);
  pinMode(LED_WIFI, OUTPUT);
  pinMode(LED_NTP, OUTPUT);
  pinMode(LED_IOT, OUTPUT);
  pinMode(LED_USB, OUTPUT);

  digitalWrite(LED_BT, HIGH);
  digitalWrite(LED_WIFI, HIGH);
  digitalWrite(LED_NTP, HIGH);
  digitalWrite(LED_IOT, HIGH);
  digitalWrite(LED_USB, HIGH);
}

void loop() {
  digitalWrite(LED_BT, LOW);    delay(1000);    digitalWrite(LED_BT, HIGH);     delay(1000);
  digitalWrite(LED_WIFI, LOW);  delay(1000);    digitalWrite(LED_WIFI, HIGH);   delay(1000);
  digitalWrite(LED_NTP, LOW);   delay(1000);    digitalWrite(LED_NTP, HIGH);    delay(1000);
  digitalWrite(LED_IOT, LOW);   delay(1000);    digitalWrite(LED_IOT, HIGH);    delay(1000);
  digitalWrite(LED_USB, LOW);   delay(1000);    digitalWrite(LED_USB, HIGH);    delay(1000);
}

