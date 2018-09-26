#include <iostream>
using namespace std;
struct node{
int data;
node *link;
}*fp, *sp,*tp,*temp;
void Insert();
void Delete();
void Search ();
void display ();

int main()
{
fp=temp=sp=tp=NULL;
    int res;
    fp= new node;
    temp=sp=tp=fp;
    node * head;


    char a='y';
    while(a=='y')
    { fp=new node;
    sp->link=fp;
    cout<<"Enter data\n";
    cin>>fp->data;
    sp=fp;
    fp->link=NULL;
    cout<<"Do you want to continue";
    cin>>a;
    }
    char m='y';

while (m=='y')
  {
cout<<"Enter the value according to the operation you want to perform\n1:insert \n2:delete\n3:search\n4:display";
cin>>res;

switch(res)
    {case 1:{
    Insert();
    break;}


        case 2:
            {Delete();
                break;}
        case 3:
            {

                Search();
        break;
            }
        case 4:
            {

                display();
                break;
            }
        default:
            {

                cout<<"Entered value is invalid";
                break;
            }

    }
    cout<<"iterate again";
    cin>>m;
    }

    return 0;
}
void  Insert(){
node * new_node=new node ;
cout<<"enter data";
cin>>new_node->data;
if(fp==NULL)
{
 fp=new_node;
 tp=new_node;
    fp=sp=tp;
}
else{

    fp=new_node;
    sp->link=fp;
    sp=fp;
    fp=NULL;
}

}
void display()
{
    while(temp!=NULL)
    {

        cout<<temp->data<<" ";
        temp=temp->link;
    }


}
void Delete(){
}
void Search(){
}
