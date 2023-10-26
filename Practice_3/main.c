//#include<stdio.h>
//
//int main(){
//    enum switch_state
//    {
//        off, low, medium, high
//    };
//    enum switch_state LED1_state, LED2_state;
//    typedef enum switch_state STATE;
//    STATE LED3_state;
//
////    LED1_state = off;
////    LED2_state = high;
////    LED3_state = low;
//
//    printf("Enter the state of LED:");
//    scanf("%d", &LED3_state);
//
//    //if(LED1_state == off)
//    printf("\n LED2_state = %d", LED2_state);
//    printf("\n LED3_state = %d", LED3_state);
//}
#include<stdio.h>
int main(){
    enum switch_state
    {
        off,on
    };
    enum switch_state LED1_state;
    //typedef switch_state STATE;
    printf("Enter the state of the Switch:");
    scanf("%d", &LED1_state);
    if (LED1_state == on){
        printf("The LED state is ON");
    }else{
        printf("The LED state is OFF");
    }

}
