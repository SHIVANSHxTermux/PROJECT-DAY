#include <stdio.h>
int main(){

int mark;

printf("enter your marks \n");
scanf("%d",&mark);

if(mark<0||mark>100){
    printf("enter a valid marks");
}
else if(mark>=90){
   printf("grade :A");
}
else if(mark>=75){
   printf("grade :B");
}
else if(mark>=60){
   printf("grade :C");
}
else if(mark>=40){
   printf("grade :D");
}
else{
    printf("fail");
}

return 0;
}