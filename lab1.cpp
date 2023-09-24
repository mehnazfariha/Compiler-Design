//token categorization
//Mehnaz

#include<iostream>
#include<string>
using namespace std;

int main()
{
   string input="";

    int length;

      cout<<"enter an input ";

  cin>>input;

   length=input.length();

for(int i=0;i<length;i++)
    {
if(!isdigit(input[i]))
        {
    cout<<"not numeric"<<endl;

return 1;
        }
    }
    cout<<"numeric"<<endl;

       return 0;

}












