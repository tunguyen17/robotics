#define lin_a_reading = A1
#define lin_b_reading = A0

const int lin_a_bkwd = 9;
const int lin_a_fwd = 10;
const int lin_b_bkwd = 11;
const int lin_b_fwd = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
  digitalWrite(lin_a_fwd, LOW);
  digitalWrite(lin_a_bkwd, LOW);
  digitalWrite(lin_b_fwd, LOW);
  digitalWrite(lin_b_bkwd, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Linear \"A\" Position: "+analogRead(lin_a_reading));
  Serial.println("Linear \"A\" Position: "+analogRead(lin_b_reding));
}
