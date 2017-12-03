#include <stdio.h>
#include <stdlib.h>
#include "Altino.h"

int main()
{   int i;
    SensorData sdata;
    Open(szPort);
    sdata=Sensor(1); //한번받아옴

    Go(300,300);
   /*printf("조도센서  : %d\n", sdata.CDSSensor);
    for(i=0;;i++)
    {
        if(sdata.CDSSensor<200){ printf("조도센서  : %d\n", sdata.CDSSensor); sdata=Sensor(1);}
        else {
printf("조도센서  : %d\n", sdata.CDSSensor);
            Go(300,300);
            delay(2000);
            Go(0,0);
            break;
        }
    }
    for(i=0;i<10;i++){
        sdata=Sensor(1);
        printf("IR4 : %d, IR5 : %d\n", sdata.IRSensor[3], sdata.IRSensor[4]);
        delay(2000);
    }
delay(10000);
*/

/*while(1){
        sdata=Sensor(1);
    if(sdata.CDSSensor>150){
        Go(300,300); break;
    }
}

while(1){
        sdata=Sensor(1);
    if(sdata.CDSSensor<200){
        Go(0,0);
        Display('D');
        Sound(37);
        delay(1000);
        Sound(0);
        Display(0);
        break;sdata.IRSensor[0]
    }
}
while(1){
        sdata=Sensor(1);
    if(sdata.CDSSensor<150){
        Go(0,0); break;
    }
}
while(1) {sdata.IRSensor[1]>250
    sdata=Sensor(1);
    if(sdata.IRSensor[1]>250) {
            Go(0,0);
    break;
       }
}*/
/*while(1){
        sdata=Sensor(1);
 if (sdata.IRSensor[1]>220) {sdata.IRSensor[0]
    Go(0,0);delay(500);
    Go(-300,-300);
    delay(1500);
    Steering(3);
    Go(300,300);
    delay(3000);
    Steering(2);
    Go(300,300);
    break;
 }
}*/
while(1){
        sdata=Sensor(1);
 if (sdata.IRSensor[1]>220) {
    printf("1번센서 :%d 2번센서 :%d 3번센서 :%d\n", sdata.IRSensor[0],sdata.IRSensor[1], sdata.IRSensor[2]);
    Go(-300,-300);
    delay(1500);
    Go(300,300);
 }
}


    Close();
    return 0;
}
