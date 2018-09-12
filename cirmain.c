#include<stdio.h>
#include<malloc.h>
#include "cirstruct.c"
#include "cirheader.h"
#include "cirfunc.c"

#define INPUT stdin
#define OUTPUT stdout

int main(void)
{
 int option,result,element;
 queue *rear;
 do
 {
  fprintf(OUTPUT,"\n\n1.Create\n2.Add\n3.Remove\n4.Isempty\nEnter Option:\n");
  fscanf(INPUT,"%d",&option);
  
  switch(option)
  {
   	case 1:init(&rear);
   			break;
   	case 2:fprintf(OUTPUT,"\nEnter the element:");
   		   fscanf(INPUT,"%d",&element);
   		   result=add(&rear,element);
   		   fprintf(OUTPUT,"%d",result);
   		    break;
   	case 3:if(isEmpty(&rear))
   			fprintf(OUTPUT,"\nQueue Empty");
   	       else
   	        {
   	         result=remov(&rear);
   	         fprintf(OUTPUT,"%d",result);
   	        }		 	    		
   	        break;
   	case 4:if(isEmpty(&rear))
   			fprintf(OUTPUT,"Queue Empty");
   	       else
   	        fprintf(OUTPUT,"Queue Not Empty");		         
  }
 }while(option<=4);
 return 0;
}
