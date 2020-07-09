#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

class stud
{
   int roll;
   char name[20],sub[7],con[10];
   public:
   static char inst[10];
/* CONSTRUCTER
    stud()
   {
    cout<<"A new class has been made";
   }

*/
   void In(int roll,char con[] ,char name[],char sub[])
   {
      this -> roll=roll;
      strcpy(this-> con,con);
      strcpy(this->name,name);
      strcpy(this->sub,sub);
   }

   void Out()
   {
      cout<<"roll no = "<<roll<<endl;
      cout<<"contact no. = "<<con<<endl;
      cout<<"Name = ";
      puts(name);
      cout<<endl<<"Subject = ";
      puts(sub);
      cout<<endl<<"institude = ";
      puts(stud::inst);
   }
/* DISTRUCTOR
    ~stud()
   {
    cout<<"Class has been destroyed";
   }
*/
};
 char stud::inst[]={"Sanmati"};

class Acc
{
    double accno;
    int pass;
    char name[15],bcode[10],conno[10];
    int amount;
    public:

    void IN()
    {
    double accno;
    char name[15],bcode[10],conno[10];
    int amount;
    int pass;

    cout<<"Enter name of account holder\n";
    gets(name);
    strcpy(this->name,name);
    cout<<"Enter contact number of the person\n";
    gets(conno);
    strcpy(this->conno,conno);
    cout<<"Enter account number\n";
    cin>>accno;
    this->accno = accno;
    cout<<"Enter Branch code\n";
    gets(bcode);
    strcpy(this->bcode,bcode);
    cout<<"Enter amount you want to credit to your account\n";
    cin>>amount;
    this->amount=amount;
    cout<<"Enter passowrd for your account\n";
    cin>>pass;
    this->pass=pass;
    }

    void OUT()
    {

    cout<<"\nAccount number\n";
    cout<<accno;
    cout<<"\nBranch code\n";
    puts(bcode);
    cout<<"\nName of account holder\n";
    puts(name);
    cout<<"\nContact number of the person\n";
    cout<<conno;
    cout<<"\nAmount in your account\n";
    cout<<amount;
    }

    void Password(double &k,int &j)
    {
      clrscr();
      int pass,amount;
      int choi;
      if(this->accno==k&&this->pass==j)
      {
       cout<<"Entered password is right \n";
       cout<<"What you want to do with your account\n";
       cout<<"1. Want to change password\n";
       cout<<"2. Want to withdwran some money\n";
       cout<<"3. Want to in more money in your account\n";
       cout<<"4. want to see all enteries\n";
       cin>>choi;
       switch(choi)
       {
	 case 1: cout<<"Your current password is\n ";
		 cout<<this->pass<<endl;
		 cout<<"Enter new password\n";
		 cin>>pass;
		 this->pass=pass;
		 break;
	 case 2: cout<<"Your current balance is\n";
		 cout<<this->amount<<endl;
		 cout<<"How much money you want to withdraw \n";
		 cin>>amount;
		 if(amount<this->amount&&amount>0)
		 {
		  cout<<"\nTransfer complete\n";
		  cout<<"Remaining amount in your account is\n ";
		  choi=this->amount-amount;
		  cout<<choi;
		 }
		 else
		 {
		 cout<<"Not possible";
		 getch();
		 exit(0);
		 }
		 break;
	 case 3: cout<<"Your current balance is\n";
		 cout<<this->amount<<endl;
		 cout<<"How much money you want to put \n";
		 cin>>amount;
		 cout<<"Tranfer complete\n";
		 cout<<"New balance is\n";
		 choi=this->amount+amount;
		 cout<<choi;
		 break;
	 case 4 :this ->OUT();
		  break;
	 default : cout<<"You entered wrong choice";
		   exit(0);
       }


      }
      else
      {
	cout<<"\nEntered password or account nuumber is wrong";
      }
    }
};


class Box
{
   protected:
   int len,wid,hei;

   public:
   Box()
   {
     len=wid=hei=0;
   }

   void IN()
   {
     int len, wid, hei;
     cout<<"Enter lenght "<<endl;
     cin>>len;
     cout<<"Enter Width "<<endl;
     cin>>wid;
     cout<<"Enter Height"<<endl;
     cin>>hei;
     this->len = len;
     this->wid = wid;
     this->hei = hei;
   }

   void OUT()
   {
     cout<<"Lenght = "<<len<<endl;
     cout<<"Width = "<<wid<<endl;
     cout<<"Height = "<<hei<<endl;;
   }

   Box operator + (Box X)
   {
     Box C;
     C.len = len + X.len;
     C.wid = wid + X.wid;
     C.hei = hei + X.hei;
     return C;
   }

   Box operator - (Box &X)
   {
     Box C;
     C.len = len - X.len;
     C.wid = wid - X.wid;
     C.hei = hei - X.hei;
     return C;
   }
};
class Colorbox : public Box
{
  protected:
  char col[10];
  int edge;

  public:

  void IN()
  {
    int edge;
    char col[10];
    Box::IN();
    cout<<"Enter numbers od edges of box"<<endl;
    cin>>edge;
    cout<<"Enter color of box"<<endl;
    gets(col);
    this->edge = edge;
    strcpy(this -> col,col);
  }

  void OUT()
  {
    Box::OUT();
    cout<<"Edge os box = "<<edge<<endl;
    cout<<"Colour of Box = ";
    puts(col);cout<<endl;
  }
};

class More : public Colorbox
{
 protected:
 int wei;

 public:

 void IN()
 {
   int wei;
   Colorbox::IN();
   cout<<"Enter weight of box "<<endl;
   cin>>wei;
   this->wei=wei;
 }

 void OUT()
 {
   Colorbox::OUT();
   cout<<"Weight of box is"<<endl;
   cout<<wei<<endl;
 }
};


struct employee
  {
  int empno;
  char ename[50];
  char phno[10];
  char dept[20];
  char desig[20];
  float salary ;
  };
  void input(employee e[],int n)
  {
   for(int i=0;i<n;i++)
     {
      cout<<"\nEnter Details of employee: "<<i+1<<endl;
      cout<<"\nEmployee Number\n";
      cin>>e[i].empno;
      cout<<"\nEmployee Name\n";
      gets(e[i].ename);
      cout<<"\nEmployee Department\n";
      cin>>e[i].dept;
      cout<<"\nEmployee phone number\n";
      cin>>e[i].phno;
      cout<<"\nEmployee Designation\n";
      cin>>e[i].desig;
      cout<<"\nEmployee salary\n";
      cin>>e[i].salary;
     }
  }

void displ(employee e[],int n)
  {
   for(int i=0;i<n;i++)
    {
     cout<<"\nDetails of employee are:"<<i+i<<endl;
     cout<<"\nEmployee Number ";
      cout<<e[i].empno;
      cout<<"\nEmployee Name ";
      cout<<e[i].ename;
      cout<<"\nEmployee Department ";
      cout<<e[i].dept;
      cout<<"\nEmployee phone number ";
      cout<<e[i].phno;
      cout<<"\nEmployee Designation ";
      cout<<e[i].desig;
      cout<<"\nEmployee salary ";
      cout<<e[i].salary;
    }
  }

void enosrch(employee e[],int n,int eno)
  {

   for(int i=0;i<n;i++)
   {
    if(e[i].empno==eno)
      {
      cout<<"\nSearch is succesful details are -\n";
      cout<<"\nEmployee Number ";
      cout<<e[i].empno;
      cout<<"\nEmployee Name ";
      cout<<e[i].ename;
      cout<<"\nEmployee Department ";
      cout<<e[i].dept;
      cout<<"\nEmployee phone number ";
      cout<<e[i].phno;
      cout<<"\nEmployee Designation ";
      cout<<e[i].desig;
      cout<<"Employee salary ";
      cout<<e[i].salary;
      }
   else
     {
      cout<<"Employee number not found";
     }
   }
 }