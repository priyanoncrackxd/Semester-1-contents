
#include<iostream>
#include<string>
using namespace std;

class Product
{
private:
 string name;
 float price;
};
public:
    void menu();
    void admin();
    void buyer();
    void add();
    void lists();
    void receipt();
};

    void shopping :: menu()
{
int choice;
string option;
m:
cout << "\t\t\t\t\t\t\tNAMASTE\n";
cout<<"\t\t\t\t|                \n";
cout<<"\t\t\t\t|----Welcome to Priyanshu's Supermarket----          |\n";
cout<<"\t\t\t\t| ***Enter Ph NO.9812345678 , Date-24th March 2024***|\n";
cout<<"\t\t\t\t|____________________________________________________|\n";
cout<<"\t\t\t\t| What are the items that you will purchase today?   |\n";
cout<<"\t\t\t\t|____________________________________________________|\n";

  cout<<"\t\t\t\t                       \n";
  cout<<"\t\t\t\t                 \n";
  cout<<"\t\t\t\t  ** Main Menu **\n";
  cout<<"\t\t\t\t                 \n";
  cout<<"\t\t\t\t ________________\n";
  cout<<"\t\t\t\t| Item List:     |\n";
  cout<<"\t\t\t\t|________________|\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 1. Admin Login |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 2. Groceries   |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 3. Electronics |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 4. Clothes     |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 5. Exit        |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"___________________________________________________________________________________________\n";

  cin>>choice;
  }
}
switch(choice)
{
case 1:
    cout<<"\t\t\t\t Enter your email \n";
    cout>>email;
    cout<<"\t\t\t\t Enter your password \n";
    cout>>password;

    if(email="priyanshu@gmail.com && password=priyanshu")
    {
        admin()
    }
    else
    {
        cout<<"Invalid Email/Password";
    }
    break;
}
case 2:
    {
        buyer();
    }
case 3:
    {
        exit(0);
    }
default:
    {
        cout<<"Please select a correct option";
    }
    {
        goto m;
    }
    void shopping :: admin()
    {
        m:
        int choice;
        cout<<"\n\t\t\| Admin Menu";
        cout<<"\n\t\t\|1.__Add Product__|";
        cout<<"\n\t\t\|2.__Edit Product__|";
        cout<<"\n\t\t\|3.__Remove Product__|";
        cout<<"\n\t\t\|4.__Back to menu__|";
        cout<<"\n\t\t\|Please enter your choice";
        cin>>choice;
    }

    switch(choice)
    {
    case 1:
        add();
        break;
    }
    case 2:
        edit();
        break;

    case 3:
        rem();
        break;

    case 4:
        menu();
        break;

    default:
        cout<<"Invalid choice!";
        }
    goto m;
}

 void shopping :: buyer()
 {
     int choice;
     cout<<"\t\t\t\t buyer\n"
     cout<<"\t\t\t\t_______\n"
     cout<<"|1.Buy the product\n";
     cout<<"|2.Go back to menu\n";
     cout<<"|3.Enter your choice\n";
     cin>>choice;

     switch(choice)
     {
     case 1:
        receipt();
        break;

     case 2:
        menu();

     default:
        cout<<"invalid choice";
     }
 goto m;
}

void shopping :: add()
{
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;

    cout<<" add new product";
    cout<<" Code of the product";
    cin>>pcode;
    cout<<" Name of the product";
    cin>>pname;
    cout<<"price of the product";
    cin>>product
    cout<<"Discount on the product";
    cin>>dis;

    data.open("database.txt",ios::in);

    if(!data)
    {
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<product<<" "<<dis<<"\n";
        data.close();

    }
    else
    {
        data>>c>>n>>p>>d;

        while(data.eof())
        {
            if(c==pcode)
            {
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();

    }
    if(token==1)
        goto m;
    else{
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<product<<" "<<dis<<"\n";
        data.close
    }
}

bool adminLogin()
{
 string username, password;
 cout<<"Enter username: ";
 cin>>username;
 cout<<"Enter password: ";
 cin >>password;
 return username=="abc1"&&password=="discount";
}

Product Groceries[]=
{
 {"Oil",270},
 {"Sauce",300},
 {"Frozen Momo",250},
 {"Paneer",200},
 {"Milk",120},
};
int numGroceries=sizeof(Groceries)/sizeof(Groceries[0]);
Product Electronics[]=
{
 {"Samsung Phone",30000},
 {"Telephone",5000},
 {"Gaming Laptop",50000},
 {"Television",25000},
};
int numElectronics=sizeof(Electronics)/sizeof(Electronics[0]);
Product Clothes[]=
{
 {"T-shirt",20},
 {"Shirt",30},
 {"Jeans",50},
 {"Dress",70},
};
int numClothes=sizeof(Clothes)/sizeof(Clothes[0]);

void displayGroceries(Product groceries[],int numGroceries)
 {
 cout <<"Grocery Items:\n";
 for (int i = 0; i < numGroceries; i++)
    {
  cout<<i+1<<"."<<groceries[i].name<<":"<<groceries[i].price<<endl;
    }
}

void displayElectronics(Product electronics[],int numElectronics)
{
 cout<<"Electronics Items:\n";
 for (int i = 0; i < numElectronics; i++)
    {
  cout<<i + 1<<"."<<electronics[i].name<<":"<<electronics[i].price<<endl;
    }
}

void displayClothes(Product clothes[], int numClothes)
{
 cout<<"Clothes Items:\n";
 for(int i=0;i<numClothes;i++)
  {
  cout<<i+1<<"."<< clothes[i].name<<":"<<clothes[i].price<<endl;
  }
}

int main()
{
int choice;
string option;
cout << "\t\t\t\t\t\t\tNAMASTE\n";
cout<<"\t\t\t\t|                \n";
cout<<"\t\t\t\t|----Welcome to Priyanshu's Supermarket----          |\n";
cout<<"\t\t\t\t| ***Enter Ph NO.9812345678 , Date-24th March 2024***|\n";
cout<<"\t\t\t\t|____________________________________________________|\n";
cout<<"\t\t\t\t| What are the items that you will purchase today?   |\n";
cout<<"\t\t\t\t|____________________________________________________|\n";

cout<<"\t\t\t\t                       \n";

   do {
      {
  cout<<"\t\t\t\t                 \n";
  cout<<"\t\t\t\t  ** Main Menu **\n";
  cout<<"\t\t\t\t                 \n";
  cout<<"\t\t\t\t ________________\n";
  cout<<"\t\t\t\t| Item List:     |\n";
  cout<<"\t\t\t\t|________________|\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 1. Admin Login |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 2. Groceries   |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 3. Electronics |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 4. Clothes     |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"\t\t\t\t| 5. Exit        |\n";
  cout<<"\t\t\t\t|                |\n";
  cout<<"___________________________________________________________________________________________\n";

  cin>>choice;
  }

  switch(choice)
   {
    case 1:
    if (adminLogin())
      {
     cout << "Admin access granted!\n";
     break;

      }
    else
      {
     cout << "Invalid Admin credentials.\n";
      }
    break;

     case 2:
    displayGroceries(Groceries, numGroceries);
    break;

   case 3:
    displayElectronics(Electronics, numElectronics);
    break;

   case 4:
    displayClothes(Clothes, numClothes);
    break;

   default:
    cout << "You are now exiting\n";
   }
    cout<<"\t\t\t\t  Do you want to continue with the shopping(yes/no)";
    cin>>option;

   }while(option=="yes");
    return 0;
}
