const int vitesseMotA = 3; // Constante pour la broche 3
const int sensMotA = 12; // Constante pour la broche 12
const int freinMotA = 9; // Constante pour la broche 9
const int intensiteMotA = A0; // intensité du moteur 0

const int vitesseMotB = 11; // Constante pour la broche 11
const int sensMotB = 13; // Constante pour la broche 13
const int freinMotB = 8; // Constante pour la broche 8
const int intensiteMotB = A1; // intensité du moteur 1

int keep_going = 0;

void setup()   {

  Serial.begin(115200);
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
  if (Serial.available() > 0) {
                // read the incoming byte:
                keep_going = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(keep_going, DEC);
        }
  if (keep_going == 97) {
    
    int percentage = 50;
    digitalWrite(sensMotA, LOW); // sens 1
    digitalWrite(sensMotB, LOW); // sens 1
    digitalWrite(vitesseMotA, HIGH); // vitesse maximale
    digitalWrite(vitesseMotB, HIGH); // vitesse maximale
    delayMicroseconds(percentage*10);
    digitalWrite(vitesseMotA, LOW); // vitesse maximale
    digitalWrite(vitesseMotB, LOW); // vitesse maximale
    delayMicroseconds(1000 - percentage*10);
  }
  else {
    
    digitalWrite(sensMotA, LOW); // sens 1
    digitalWrite(vitesseMotA, LOW); // vitesse maximale
    digitalWrite(sensMotB, LOW); // sens 1
    digitalWrite(vitesseMotB, LOW); // vitesse maximale
  
  }

}

