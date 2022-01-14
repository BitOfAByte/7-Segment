int arr[] = {2,3,4,5,6,7,8,9};

void setup() {        
  pinMode(arr, OUTPUT);  
}

void displayDigit(int digit) {
 if(digit!=1 && digit != 4)
    digitalWrite(arr[0],HIGH);
 
 if(digit != 5 && digit != 6)
    digitalWrite(arr[1],HIGH);
 
 if(digit !=2)
    digitalWrite(arr[2],HIGH);
 
 if(digit != 1 && digit !=4 && digit !=7)
    digitalWrite(arr[3],HIGH);
 
 if(digit == 2 || digit ==6 || digit == 8 || digit==0)
    digitalWrite(arr[4],HIGH);
 
 if(digit != 1 && digit !=2 && digit!=3 && digit !=7)
    digitalWrite(arr[5],HIGH);
 if (digit!=0 && digit!=1 && digit !=7)
    digitalWrite(arr[6],HIGH);
 
}
void turnOff() {
  digitalWrite(arr,LOW);
}


void loop() {
 for(int i=1;i<10;i++) {
   displayDigit(i);
   delay(500);
   turnOff();
 }

}
