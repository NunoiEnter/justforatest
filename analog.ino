int ledPin = 3;
int analogPin = 5; //ประกาศตัวแปร ให้ analogPin แทนขา analog ขาที่5
int val = 0;
void setup() {
  pinMode(ledPin, OUTPUT);  // sets the pin as output
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin);  //อ่านค่าสัญญาณ analog ขา5 เว็บไว้ในตัวแปร val
  Serial.print("val = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(val); // พิมพ์ค่าของตัวแปร val
  analogWrite(ledPin, val / 4); // ส่งค่าสัญญาณ analog ไปควบคุมความสว่างหลอดไฟ LED
  delay(5);
}