#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{ 
FILE *fp;
char ch;
int w=0,c=0,l=0;


 if(argc==3)
 {
     fp=fopen(argv[2],"r");
    if(strcmp(argv[1],"-l")==0)
       {
  
       while((ch=getc(fp))!=EOF)
         {
 
           if(ch=='\n')
            l++;
          }
      printf("number of lines    : %d\n",l);
         }
 else
  if(strcmp(argv[1],"-w")==0)
 {
  while((ch=getc(fp))!=EOF)
 {
  if(ch=='\n'||ch==' ')
    w++;
  }
  printf("number of words    : %d\n",w-1);
  }
  
  
  else
  {
  if(strcmp(argv[1],"-c")==0)
  {
  while ((ch=getc(fp))!=EOF)
  {
  if(ch!=' ' || ch!='\n')
   c++;
  }
printf("numberof characters: %d\n",c); 
}
}
}
else
exit(0);
}

