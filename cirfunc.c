
void init(queue *(*rear))
{
  *rear=NULL;
}


int add(queue *(*rear),int element)
{
  queue *new;
  if(NULL!=(new=(queue*)malloc(sizeof(queue))))
  {
   new->data=element;
   new->next=NULL;	
   if(*rear==NULL)
   {
    *rear=new;
    (*rear)->next=*rear;
     return 1; 
   }
   else
   {
     new->next=(*rear)->next;
     (*rear)->next=new;
     *rear=new;
     return 1;
   }
   }
return 0;  
}

int remov(queue *(*rear))
{
  int n;
  queue *temp;
  
  if((*rear)->next==*rear)
  {  n=(*rear)->data;
 	 *rear=NULL;
  }
  else
  {
   temp=(*rear)->next;
   n=temp->data;		
   (*rear)->next=(*rear)->next->next;
   free(temp);
  }
return n;  
}

int isEmpty(queue *(*rear))
{
  if(*rear==NULL)
     return 1;
  else
     return 0;   
}
