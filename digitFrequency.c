#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      
    char s[1024];
    scanf("%s",s);
    
    int i,count;
    int output[10]={0,0,0,0,0,0,0,0,0,0};
    count=0;
    
    for (i=0;i<strlen(s); i++){
        if (s[i]=='0'){
            output[0]+=1;
        } 
        if (s[i]=='1'){
            output[1]+=1;
        } 
        if (s[i]=='2'){
            output[2]+=1;
        }
        if (s[i]=='3'){
            output[3]+=1;
        }
        if (s[i]=='4'){
            output[4]+=1;
        }
        if (s[i]=='5'){
            output[5]+=1;
        }
        if (s[i]=='6'){
            output[6]+=1;
        }
        if (s[i]=='7'){
            output[7]+=1;
        }
        if (s[i]=='8'){
            output[8]+=1;
        }
        if (s[i]=='9'){
            output[9]+=1;
        }
      
    }
    for (i=0; i<sizeof(output)/sizeof(output[0]); i++){
        printf("%d ", output[i]);
    }

    
}
