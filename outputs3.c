#include<stdio.h> 
#include<string.h> 

//Examine the C code below and the output of the code to understand the usage of strncpy,strncmp and strncat. 

int main () {     

    char str1[]= "To be or not to be";     
	char str2[40];     
	char str3[40]; 
 
    printf("\n\n***********************************************\n"); 
 
    printf("* strncpy example *\n\n"); 
 
    /* copy to sized buffer (overflow safe): */     
	strncpy ( str2, str1, sizeof(str2) ); 
 
    /* partial copy (only 5 chars): */     
	strncpy ( str3, str2, 5 );     
	str3[5] = '\0';   
	
	/* null character manually added */ 
 
    puts (str1);     
	puts (str2);     
	puts (str3); 
	
	printf("\n\n***********************************************\n"); 
 
    printf("* strncmp example *\n\n"); 
 
    char str4[][5] = { "R2D2", "C3PO", "R2A6" };     
	int n;     
	puts ("Looking for R2 astromech droids...");   
	  
	for (n=0 ; n<3 ; n++){
		if (strncmp (str4[n],"R2xx",2) == 0) {            
	      printf ("found %s\n",str4[n]);        
	  } 
	} 
	     
    printf("\n\n***********************************************\n"); 
 
    printf("* strncat example *\n\n"); 
 
    char str5[20];     
	char str6[20];     
	strcpy (str5,"To be ");     
	strcpy (str6,"or not to be");     
	strncat (str5, str6, 6);    
	puts (str5); 
 
    return 0; 
} 
 
 
