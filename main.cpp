// Author: Anthony Micodin
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector <string> list; //vector of strings
  int numItems = 0;
  char input;
  string item;
  
  
  
  do 
  {
  cout<<"\n==GROCERY LIST MANAGER==";
        
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  if (numItems != 0)
  {
  cout<<"\n (D)elete last item";        
  cout<<"\n (Q)uit";
  }
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

   if ( input == 'a' || input == 'A')
   {
     cout<<"What is the item?"<<endl;
     cin>>item;
      if ( numItems <  5 )
      {
              list.push_back(item);
              numItems ++;
      
    }
      else 
      {
              cout<<"You'll need a bigger list!"<<endl;
      }
   }
   else if ( numItems > 0 && ( input =='d' || input =='D' ))
     {
     cout<<list[numItems - 1]<<" was deleted from the list. \n";
     list.pop_back();
     numItems --;
     }
  }
  while(   input != 'Q' &&  input != 'q');
  cout<<"==ITEMS TO BUY=="<<endl;  
  for (int i = 0; i<numItems; i++)
  {
   cout<<i+1<<" "<<list[i]<<endl;
  }
 if ( numItems == 0)
 {
         cout<<"No items to buy!"<<endl;
  return 0;
 }
 }

