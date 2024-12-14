#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three values";
    cin>>a;
    cin>>b;
    cin>>c;

       if (a>b)
       {
           cout<<"a is the greatest number";
       }
       else if (b>a)
       {
           cout<<"b is the greatest number";
       }
       else
       {
           cout<<"c is the greatest number";
           }
return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks";
    cin>>marks;

    if (marks >=80)
    {
        cout<<"You got A+";
    }
    else if(marks >=70)
    {
        cout<<"You got B+";
    }
    else if(marks >=60)
    {
        cout<<"You got C+";
    }
    else if(marks >50)
    {
        cout<<"You Failed";
    }
}

#include<iostream>
using namespace std;
int main()
{
  int marks;
  cout<<"Enter your marks";
  cin>>marks;

  if(marks>50)
  {
    cout<<"You Passed";
  }
   else (marks<40)
   {
    cout<<"Failed\n";
   }

}
