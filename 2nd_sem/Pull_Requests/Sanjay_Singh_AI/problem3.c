#include<stdio.h>
int main(){
int n;
int count=0;
int starttime[100];
int endtime[100];
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter the starting time of movie");
    scanf(" %d",&starttime[i]);  
    printf("enter the end  time of movie");
    scanf(" %d",&endtime[i]);  
}
  for(int i=0;i<=n;i++){
if(starttime[i] != endtime[i]){
    if(endtime[i] <= starttime[i+1]){
        if(starttime[i] != starttime[i+1]){
        count++;
        }
        else{
            continue;
        }
     }else{
        continue;
     }
}else{
    continue;
}
}
printf("%d",count);

return 0;
}