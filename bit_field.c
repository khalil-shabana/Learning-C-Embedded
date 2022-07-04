#include<stdio.h>
#include<stdlib.h>

//Example on Bit fields
struct Status_type
{
    unsigned char :2; //bit 0&1 reserved to no thing
    unsigned char delta_cts:1; //1 is the length reserved for delta_cts
    unsigned char delta_dsr:1;
    unsigned char tr_edge:1;
    unsigned char delta_rec:1;
    unsigned char rec_line:1;
    unsigned char ring:1;
}status;

int main() {

    status.delta_cts=0;
    /*
    status = get_port_status();
    //get_port_status is function
    if(status.cts) printf("clear to send");
    if(status.dsr) printf("data ready");
    */
    printf("%d\n",status.delta_cts);
    printf("size of struct is %d",sizeof(status));
    return 0;
}
