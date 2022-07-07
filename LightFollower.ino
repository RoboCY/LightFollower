// Core: https://github.com/MCUdude/MicroCore

#define DEBUG 0
#define PHOTO_SAMPLES 5

#define ML_PIN PB0
#define MR_PIN PB1
#define PSL_PIN A3 // Photo Sensor Left
#define PSR_PIN A1 // Photo Sensor Right
#define SPD_PIN A2

int leftPhotoValue, rightPhotoValue, speedConstant; 

void setup() {
  readPhotoSensors();
  
  pinMode(ML_PIN, OUTPUT);
  pinMode(MR_PIN, OUTPUT);
  pinMode(PSL_PIN, INPUT);
  pinMode(PSR_PIN, INPUT);  
  pinMode(SPD_PIN, INPUT);  
}

void loop() {
  readPhotoSensors();
  speedConstant = map(analogRead(SPD_PIN),0,1023,0,100);

  leftPhotoValue = map(leftPhotoValue,0,1023,0,70);
  rightPhotoValue = map(leftPhotoValue,0,1023,0,70);

  leftPhotoValue = constrain(speedConstant+leftPhotoValue*leftPhotoValue*leftPhotoValue/50,0,255);
  rightPhotoValue = constrain(speedConstant+rightPhotoValue*rightPhotoValue*rightPhotoValue/50,0,255);
  
  analogWrite(MR_PIN,leftPhotoValue);
  analogWrite(ML_PIN,rightPhotoValue);

  delay(10);  
}

void readPhotoSensors(){
  int left,right;
  left=right=0;
  
  for(int c=0; c<PHOTO_SAMPLES; c++){
    left += analogRead(PSL_PIN);
    right += analogRead(PSR_PIN);
    delay(1);
  }
  
  leftPhotoValue = constrain(left/PHOTO_SAMPLES,0,1023);
  rightPhotoValue =  constrain(right/PHOTO_SAMPLES,0,1023);
}
