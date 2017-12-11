const int button = 7; // Constante pour la branche 7

const int vitesseMotA = 3; // Constante pour la broche 3
const int sensMotA = 12; // Constante pour la broche 12
const int freinMotA = 9; // Constante pour la broche 9
const int intensiteMotA = A0; // intensité du moteur 0

const int vitesseMotB = 11; // Constante pour la broche 11
const int sensMotB = 13; // Constante pour la broche 13
const int freinMotB = 8; // Constante pour la broche 8
const int intensiteMotB = A1; // intensité du moteur 1

void setup()   {

  Serial.begin(115200);
  pinMode (button, INPUT); // Broche button configurée pour le button 
  pinMode (vitesseMotA, OUTPUT); // Broche vitesseMotA configurée en sortie
  pinMode (freinMotA, OUTPUT); // Broche freinMotA configurée en sortie
  pinMode (vitesseMotB, OUTPUT); // Broche vitesseMotB configurée en sortie
  pinMode (sensMotA, OUTPUT); // Broche sensMotA configurée en sortie
  pinMode (sensMotB, OUTPUT); // Broche senMotB configurée en sortie
  digitalWrite(vitesseMotA, LOW); // a l'arret
  digitalWrite(sensMotA, LOW);
  digitalWrite(freinMotA, LOW); // frein off
  digitalWrite(vitesseMotB, LOW); // à l'arret
  digitalWrite(sensMotB, LOW);
  digitalWrite(freinMotB, LOW); // frein off

}


void loop() {
  if 
  //------ test initial du moteur A ----
  //- sens 1
  digitalWrite(sensMotA, LOW); // sens 1
  digitalWrite(vitesseMotA, HIGH); // vitesse maximale
  delay(2000); // 2 secondes
  digitalWrite(vitesseMotA, LOW); // vitesse maximale

  //- sens 2
  digitalWrite(sensMotA, HIGH); // sens 2
  digitalWrite(vitesseMotA, HIGH); // vitesse maximale
  delay(1000); // 2 secondes
  Serial.println(analogRead(intensiteMotA));
  delay(1000); // 2 secondes
  digitalWrite(vitesseMotA, LOW); // vitesse maximale


  //------ test initial du moteur B ----
  //- sens 1
  digitalWrite(sensMotB, LOW); // sens 1
  digitalWrite(vitesseMotB, HIGH); // vitesse maximale
  delay(2000); // 2 secondes
  digitalWrite(vitesseMotB, LOW); // vitesse maximale

  //- sens 2
  digitalWrite(sensMotB, HIGH); // sens 2
  digitalWrite(vitesseMotB, HIGH); // vitesse maximale
  delay(1000); // 2 secondes
  Serial.println(analogRead(intensiteMotB));
  delay(1000); // 2 secondes
  digitalWrite(vitesseMotB, LOW); // vitesse maximale

  while (1);
}

