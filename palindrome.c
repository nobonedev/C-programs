//Palindrome

#include<stdio.h>
#include<string.h>

void main(){
	char str[100] , rev[100];
	int l , r ;
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	
	str[strcspn(str, "\n")] = 0;

	l = 0;
	r = strlen(str) - 1;

	strcpy(rev,str);
	

	while(l < r){
		int temp = rev[l];
		rev[l] = rev[r];
		rev[r] = temp;
		l++;
		r--;
	}
	if(strcmp(str , rev) == 0)
		printf("The string is a palindrome\n");
	else
		printf("The string is not a palindrome\n");
}	
