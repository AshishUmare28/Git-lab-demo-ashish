#include<stdio.h>
#include<string.h>

int main(){
	char str[100],ch;
	int map[128] = {0};
	int sorted[128] = {-1};
	int j=0;
	
	printf("Enter a string\n");
	scanf("%s",str);
	
	//printf("%s",str);
	//map characters
	
	for(int i=0; i<strlen(str); i++)
		map[str[i]]++;
		
	for(int i=0; i<128; i++)
		if(map[i]>0)
		printf("%c %d\n",i,map[i]);
		
	int maxi=0;
	
	for(int i=0; i<strlen(str); i++){
		
		int count = 0; 
		for(int i=0; i<128; i++){
			if(map[i] > maxi){
				maxi = i;
				count = map[i];
				map[i] = 0;	
			}
					
		}
		for(int i=0; i<count; i++){
			printf("%d",maxi);
		}

	}
	return 0;
}


