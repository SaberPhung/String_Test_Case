#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int my_strlen(char *s)
{
    int count=0;
    int i=0;
    while(s[i]!='\0'){
        i++;
        count++;
    }
    return count;
}

int str2upper(char *s)
{
    while(*s)
    {
       *s=(*s>='a' && *s<='z') ? *s-32 :*s;
        s++;
    }   	
    return *s;
}
int str2lower(char *s)
{ 
    while(*s)
   {
	*s=(*s>='A' && *s<='Z') ? *s+32 :*s;
	s++;
   
   }	
    return *s; 
}
int str_strip_numbers( char *s)
{ 
  int i,j; 
  for(i=0;s[i]!='\0';++i)
  {
  while(s[i]>='0' && s[i]<='9'){
	for(j=i;s[j]!='\0';++j){
	s[j]=s[j+1];
	}
  	s[j]='\0';
  }
  } 
    return *s; 
}
void mystrcpy(char *s,char *d)
{
   int i;
   for(i=0;d[i]=s[i];i++);
   d[i]='\0';
}
int mystrcmp (char *s, char *d)
{ 
    int c=0;
    while((*s!='\0' && *d!='\0') && *s==*d)
    {    
	   s++;
	   d++;
    }
    if (*s==*d)
    {    
	return 0;
    } 
    else
    {	
	return *s-*d;
    }
}
char * strdupl(char *s)
{   
    int n;
    n=my_strlen(s);
    char *d;
    d= (char*)malloc(n*sizeof(char));
    //char d[n];
    for (int i=0; i<n;++i)
    {
     d[i]=s[i];
    }
    free(d);
    return (char*)d;
}
