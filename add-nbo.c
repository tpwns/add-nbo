#include<stdio.h>
#include<stdint.h>
#include<arpa/inet.h>

int main(int argc, char *argv[]){
    FILE *fp1, *fp2;
    fp1 = fopen(argv[1],"r");   
    fp2 = fopen(argv[2],"r");

    uint32_t a,b,c;
    fread(&a,sizeof(a),1,fp1);
    fread(&b,sizeof(b),1,fp2);
    a = ntohl(a);   b = ntohl(b);
    c = a+b;
    
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",a,a,b,b,c,c);
    return 0;
}