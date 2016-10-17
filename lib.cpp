#include "lib.h"

bool caut(char s[20][25], char cuv[25], int nr){
    for(int i = 0; i < nr ; i++) {
        if(strstr(s[i], cuv) != 0) {
            return true;
        }
    }
    return false;
}
int  contor(char s[20][25], char cuv[25], int nr) {
    int n = 0;
    char *p;
    for(int i = 0; i < nr; i++) {
        p = strstr(s[i], cuv);
        while(p != 0){
            n++;
            p = strstr(p+1, cuv);
        }
    }
    return n;
}

