//Smart Bin Algorithm

void setup() {
Serial.begin(9600);
esp8266.begin(115200);//for wifi module
sendCommand("AT",5,"OK");//for wifi module command communication
sendCommand("AT+CWMODE=1",5,"OK");//for wifi module connection
sendCommand("AT+CWJAP=\""+ AP +"\",\""+ PASS +"\"",20,"OK");//own device
wifi name and password
}int UltrasonicSensorValue(){
// if Ul_sensor value less than 14 cm and Greater than 4 cm then green led is on
otherwise off
// if Ul_sensor value less than 4 cm then red led is on otherwise off
// if Ul_sensor value less than 4 cm then servo motor rotate 0 to 180 degree
}
int GasSensorValue(){
//if gas_sensor value Greater than 400 then red led is on and servo motor rotate 0 t0 180
degree otherwise off
}
int LoadcellValue(){
// if loadcell value cross the thresshold value when green led on otherwise off
}
void loop() {
UltrasonicSeonsorValue();
GasSensorValue();
LoadcellValue();
//now code to send thingspeak platform by wifi module
void data_transfer(){
//esp code and thingspeak field id number
}
}
