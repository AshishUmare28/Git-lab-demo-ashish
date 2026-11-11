#include<stdio.h>
#include<string.h>

int main(){
	char str1[100];
	char str2[100];
	int map1[128]= {0};
	int map2[128] = {0};
	
	printf("Enter a string\n");
	scanf("%s",str1);
	
	printf("Enter a string 2\n");
	scanf("%s",str2);
	
	//printf("%s",str);
	//map characters
	
	for(int i=0; i<strlen(str1); i++)
		map1[str1[i]]++;
		
	for(int i=0; i<128; i++)
		if(map1[i]>0)
		printf("%c %d\n",i,map1[i]);
	
	for(int i=0; i<strlen(str2); i++)
		map2[str2[i]]++;
		
	for(int i=0; i<128; i++)
		if(map2[i]>0)
		printf("%c %d\n",i,map2[i]);
		
	for(int i=0; i<128; i++){
		if(map1[i] != map2[i]){
				printf("\n0\n");
				return 0;
		}
	
	}
	printf("\n1\n");
		
	return 0;
}
