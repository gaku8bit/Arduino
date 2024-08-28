#define BUZZER_PIN 5

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // ファ#
  tone(BUZZER_PIN, 740);
  delay(300);
  noTone(BUZZER_PIN);

  // レ
  tone(BUZZER_PIN, 587);
  delay(300);
  noTone(BUZZER_PIN);

  // ラ (オクターブ低い)
  tone(BUZZER_PIN, 440);
  delay(300);
  noTone(BUZZER_PIN);

  // レ
  tone(BUZZER_PIN, 587);
  delay(300);
  noTone(BUZZER_PIN);

  // ミ
  tone(BUZZER_PIN, 659);
  delay(300);
  noTone(BUZZER_PIN);

  // ラ
  tone(BUZZER_PIN, 880);
  delay(600);
  noTone(BUZZER_PIN);

  // ラ (オクターブ低い)
  tone(BUZZER_PIN, 440);
  delay(300);
  noTone(BUZZER_PIN);

  // ミ
  tone(BUZZER_PIN, 659);
  delay(300);
  noTone(BUZZER_PIN);

  // ファ#
  tone(BUZZER_PIN, 740);
  delay(300);
  noTone(BUZZER_PIN);

  // ミ
  tone(BUZZER_PIN, 659);
  delay(300);
  noTone(BUZZER_PIN);

  // ラ (オクターブ低い)
  tone(BUZZER_PIN, 440);
  delay(300);
  noTone(BUZZER_PIN);

  // レ
  tone(BUZZER_PIN, 587);
  delay(600);
  noTone(BUZZER_PIN);

  delay(1000); // 1秒待つ
}