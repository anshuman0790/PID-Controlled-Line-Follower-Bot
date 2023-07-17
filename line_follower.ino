int a[5];
bool a_digital[5];// 1 value for white surface and 0 for black surface 
int error=0;
float ki=0;
float kp=30;
float kd=2.8;

int previous_error=0;
const int thres=50;
int speed_left=50;
int speed_right=50;
int pid_value=0;
int i=0;
int d=0;

void setup(){
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  
pinMode(4,OUTPUT);
pinMode(9,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(12,OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
}

void loop(){
a[0]=analogRead(A0);
a[1]=analogRead(A1);
a[2]=analogRead(A2);
a[3]=analogRead(A3);
a[4]=analogRead(A4);

if(a[0]>thres){
  a_digital[0]=1;  
 }else a_digital[0]=0;
 if(a[1]>thres){
  a_digital[1]=1;  
 }else a_digital[1]=0;
 if(a[2]>thres){
  a_digital[2]=1;  
 }else a_digital[2]=0;
 if(a[3]>thres){
  a_digital[3]=1;  
 }else a_digital[3]=0;
 if(a[4]>thres){
  a_digital[4]=1;  
 }else a_digital[4]=0;
 
 if(a_digital[0]==1 && a_digital[1]==1 && a_digital[2]==0 && a_digital[3]==1 && a_digital[4]==1){
  error=0;
 }else if(a_digital[0]==1 && a_digital[1]==1 && a_digital[2]==0 && a_digital[3]==0 && a_digital[4]==1){
  error=-1;
 }
 else if(a_digital[0]==1 && a_digital[1]==1 && a_digital[2]==1 && a_digital[3]==0 && a_digital[4]==1){
  error=-2;
 }else if(a_digital[0]==1 && a_digital[1]==1 && a_digital[2]==1 && a_digital[3]==0 && a_digital[4]==0){
  error=-3;
 }else if(a_digital[0]==1 && a_digital[1]==1 && a_digital[2]==1 && a_digital[3]==1 && a_digital[4]==0){
  error=-4;
 }else if(a_digital[0]==1 && a_digital[1]==0 && a_digital[2]==0 && a_digital[3]==1 && a_digital[4]==1){
  error=1;
 }else if(a_digital[0]==1 && a_digital[1]==0 && a_digital[2]==1 && a_digital[3]==1 && a_digital[4]==1){
  error=2;
 }else if(a_digital[0]==0 && a_digital[1]==0 && a_digital[2]==1 && a_digital[3]==1 && a_digital[4]==1){
  error=3;
 }else if(a_digital[0]==0 && a_digital[1]==1 && a_digital[2]==1 && a_digital[3]==1 && a_digital[4]==1){
  error=4;
 }
 Serial.print(a[0]);
 Serial.print(" " );
 Serial.print(a[1]);
 Serial.print(" " );
 Serial.print(a[2] );
 Serial.print(" " );
 Serial.print(a[3]);
 Serial.print(" " );
 Serial.print(a[4]);
 
 Serial.print("\n");
 
  i=i+previous_error;
  d=error-previous_error;
  
  previous_error=error;
  
  pid_value=kp*error+ki*i + kd*d;
    
  speed_left=100-pid_value;
  speed_right=100+pid_value;

  analogWrite(3,speed_left);
  digitalWrite(4,1);
  analogWrite(9,speed_right);
  digitalWrite(7,0);
  digitalWrite(8,1);
  digitalWrite(12,0);
  
  
 
}
