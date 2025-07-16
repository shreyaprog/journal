#include <stdio.h>

int stringLength(char s[100]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}
void compstring(char s1[100],char s2[100])
{
int flag=1;
int i=0;
while(s1[i]!='\0'&& s2[i]!='\0'){
    if(s1[i]!=s2[i]){
    flag=0;
    break;
    }
    i++;
}
if (s1[i] != s2[i]) {
        flag = 0;
    }

if(flag)

    printf("strings are equal");
    
else
    printf("strings are not equal");
} 

void constring(char s1[100],char s2[100],char result[200])
{
    int i = 0, j = 0;

    while (s1[i] != '\0') {
        result[i] = s1[i];
        i++;
    }

    while (s2[j] != '\0') {
        result[i] = s2[j];
        i++;
        j++;
    }

    result[i] = '\0';
    printf("Concatenated string: %s\n", result);

}
void longerstring(char s1[100],char s2[100])
{
    int l1=stringLength(s1);
    int l2=stringLength(s2);
    
    if(l1>l2)
    printf("l1 is longer");
    else if(l2>l1)
    printf("l2 is longer");
    else 
    printf("both are equal");
}

int substring(char s1[100],char s2[100]){
    int i=0,j=0;
    for(i=0;s1[i]!='\0';i++){
        {
            while(s2[j]!='\0' && s1[i+j]==s2[j])
            j++;
        }
        if(s2[j]=='\0')
        return 1;
    }
    return 0;
}

int main() {
    int co,cont;
    char s1[100],  s2[100], result[200];
    int flag=1;
    do{
        
        printf("enter a string1 :  ");
        fgets(s1,sizeof(s1),stdin);
    getchar();
     printf("enter a string 2 : ");
    fgets(s2,sizeof(s2),stdin);
    int i;
    for (i = 0; s1[i]; i++) {
        if (s1[i] == '\n') s1[i] = '\0';
    }
    int i=0;
    for ( s2[i]; i++) {
        if (s2[i] == '\n') s2[i] = '\0';
    }
    
    printf("enter case(1-4)");
    scanf("%d",&co);
    switch(co){
        case 1:
        {
        compstring(s1,s2);
        break;
    }
    case 2:{
    constring(s1, s2, result);
    break;
    }
    
    case 3:{
        
    
    longerstring(s1,s2);
    break;
    }
     case 4:{
     if (substring(s1, s2))
                    printf("Second string is a substring of the first.\n");
                else
                    printf("Second string is NOT a substring of the first.\n");
                break;
     }
     
    default:{
    printf("invalid");
    break;
    }
}
        printf("would you like to continue? yes-1 no-0");
    scanf("%d",&cont);
}while(cont==1);
    return 0;
}






















