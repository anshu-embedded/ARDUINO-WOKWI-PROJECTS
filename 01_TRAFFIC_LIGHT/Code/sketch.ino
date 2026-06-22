// Direction 1 LEDs
#define D1G 13
#define D1Y 12
#define D1R 11

// Direction 2 LEDs
#define D2G 10
#define D2Y 9
#define D2R 8

// Direction 3 LEDs
#define D3G 7
#define D3Y 6
#define D3R 5

// Direction 4 LEDs
#define D4G 4
#define D4Y 3
#define D4R 2

void setup()
{
  // Configure all traffic LEDs as outputs

  pinMode(D1G, OUTPUT);
  pinMode(D1Y, OUTPUT);
  pinMode(D1R, OUTPUT);

  pinMode(D2G, OUTPUT);
  pinMode(D2Y, OUTPUT);
  pinMode(D2R, OUTPUT);

  pinMode(D3G, OUTPUT);
  pinMode(D3Y, OUTPUT);
  pinMode(D3R, OUTPUT);

  pinMode(D4G, OUTPUT);
  pinMode(D4Y, OUTPUT);
  pinMode(D4R, OUTPUT);
}

void loop()
{
  // Phase 1
  // Direction 1 & 3 GO
  // Direction 2 & 4 STOP

  digitalWrite(D1G, HIGH);
  digitalWrite(D3G, HIGH);

  digitalWrite(D2R, HIGH);
  digitalWrite(D4R, HIGH);

  delay(5000);

  // Clear phase
  digitalWrite(D1G, LOW);
  digitalWrite(D3G, LOW);
  digitalWrite(D2R, LOW);
  digitalWrite(D4R, LOW);

  // Phase 2
  // Direction 1 & 3 READY

  digitalWrite(D1Y, HIGH);
  digitalWrite(D3Y, HIGH);

  digitalWrite(D2R, HIGH);
  digitalWrite(D4R, HIGH);

  delay(2000);

  digitalWrite(D1Y, LOW);
  digitalWrite(D3Y, LOW);
  digitalWrite(D2R, LOW);
  digitalWrite(D4R, LOW);

  // Phase 3
  // Direction 2 & 4 GO

  digitalWrite(D2G, HIGH);
  digitalWrite(D4G, HIGH);

  digitalWrite(D1R, HIGH);
  digitalWrite(D3R, HIGH);

  delay(5000);

  digitalWrite(D2G, LOW);
  digitalWrite(D4G, LOW);
  digitalWrite(D1R, LOW);
  digitalWrite(D3R, LOW);

  // Phase 4
  // Direction 2 & 4 READY

  digitalWrite(D2Y, HIGH);
  digitalWrite(D4Y, HIGH);

  digitalWrite(D1R, HIGH);
  digitalWrite(D3R, HIGH);

  delay(2000);

  digitalWrite(D2Y, LOW);
  digitalWrite(D4Y, LOW);
  digitalWrite(D1R, LOW);
  digitalWrite(D3R, LOW);
}
