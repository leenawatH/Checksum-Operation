#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int random(int upper,int lower){
  int ran;
  srand(time(0));
  ran = (rand() % (upper - lower +1)) + lower;
  
  return ran;
}
long long toint(char *data){
  long long n = 0;
  int count = 0;
  //printf("%s\n",data);
  for(int i = strlen(data)-1; i >= 0 ; i--){

    if(data[i] == '0'){
      n += 0 * (pow(10, count));
    }else{
      n += 1 * (pow(10, count));
    }
    count++;
  }
  return n;
}

char* separate_data(char *data ,int s){ 
  
  char checksum[s];
  //char re[s];
  int group_data = strlen(data)/s;
  char separate_data[50];
  int count = 0,num = 0;
  
  //printf("fi %d\n",strlen(checksum));
  for(int j = 1 ; j <= strlen(data);j++){
    //printf("%d\n",s);
    checksum[count] = data[j-1];
    //printf("se %d\n",strlen(checksum));
    count++;
    //printf("tr %d\n",strlen(checksum));
    if(j % s == 0 && j != 0){
      //strncat(separate_data[num], checksum, 4);
      for(int i = 0;i< s;i++){
        //printf("%d",i);
        re[i] = checksum[i];
      }
      printf("c : %s\n",checkson);
      //char test[s];
      //strcpy(test,re);
      //printf("test : %s\n",test);
      //separate_data[num] = *re;
      count = 0;
      num++;
    }
    
  }
  for(int i = 0 ; i < strlen(separate_data) ; i++){
    printf("separate_data = %s\n",separate_data[i]);
  }
  return "0";
}

int main(){
    char data[50];
    int s = 0,a;
    do{
      printf("Enter Data in num 0,1 :");
      scanf("%s",&data);
      printf("Data : %s\n",data);
      printf("lenght : %d\n",strlen(data));
      printf("Enter size of each separate word :");
      scanf("%d",&s);
      printf("size : %d\n",s);
      a = strlen(data)/s;
      printf("data in list : %d\n",strlen(data)/s);
      if(strlen(data)%s != 0){
        printf("Data cannot separate in each size\n");
        printf("Please try again\n");
      }
    }while(strlen(data)%s != 0);
    char *checksum = separate_data(data,s);
}
    