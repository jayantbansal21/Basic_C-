#include"function.cpp"

/*
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
/*
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
*/ /*
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

    cout<<"Account number\n";
    cout<<accno;
    cout<<"Branch code\n";
    puts(bcode);
    cout<<"Name of account holder\n";
    puts(name);
    cout<<"Contact number of the person\n";
    cout<<conno;
    cout<<"Amount in your account\n";
    cout<<amount;
    }

    void Password(double &k,int &j)
    {
      clrscr();
      int choi,pass,amount;
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
		 cout<<this->amount;
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
		 cout<<this->amount;
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
*/



/*BEFORE STARTING THE PROGRAME BRO..MOVE TO LAST
 JB's BEST
@CPT.JAYANT
@MR.JUNIOR_21
 there are multiple passwords for diffrent programs
for LIST PASSWORD = 1234
for PYRAMID PASSWORD =1234567
for TABLE PASSWORD =12345
for finding VALUE of a no. with any POWER PASSWORD = 98765
to use AREEY based program enter PASSWORD = 12234
a data management system PASSWOORD = 6789
a program for a skul PASSWORD = 75657
*/



int main()
{

clrscr();
double main;
//char main[8],JB[8];
cin>>main;

/*strcpy(JB,"jaYAnt.B");
if(strcmp(main,JB)) */
if(main==123456)
{
int a;
double b;

clrscr();
int s;
cout<<endl;
for(s=5;s>=0;s--)
  {
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t "<<s<<"\b";
  delay(900);
  }

t:
textcolor(17);
//textattr(10);
//bcoz of textattr enter data cant be seen
clrscr();
cout<<"\t\t      -------------      |--          \n " ;
cout<<"\t\t            |            |   )        \n " ;
cout<<"\t\t            |            |    )       \n " ;
cout<<"\t\t            |            |   )        \n " ;
cout<<"\t\t            |            |---         \n " ;
cout<<"\t\t       (    |            |   )        \n " ;
cout<<"\t\t        (   |            |    )       \n " ;
cout<<"\t\t         (  |            |   )        \n " ;
cout<<"\t\t          (_|      ()    |__)   ()    \n " ;
delay(1000);
cout<<"\n********************************************************************************";
cout<<"\t\t\t\2   WELCOME TO JB's PLACE\n\t\t  To move further you need to enter choice \2";
cout<<"\n         (if you don't want to enter any, press 0 & press enter to exit)";
cout<<"\n********************************************************************************";
delay(1000);

cout<<"\n\t  Enter your choice";
delay(600);
cout<<"\n\t  1. For a program on list";
delay(600);
cout<<"\n\t  2. To make pyramid";
delay(600);
cout<<"\n\t  3. To create table of a given no";
delay(600);
cout<<"\n\t  4. To find the value of a no. with any power";
delay(600);
cout<<"\n\t  5. To use a program based on areey";
delay(600);
cout<<"\n\t  6. A program for a company to enter its employee details";
delay(600);
cout<<"\n\t  7. A program to enter values related to box";
delay(600);
cout<<"\n\t  8. A program for a bank";
delay(600);
cout<<"\n\t  9. A program for a school";
delay(600);
/*
cout<<"\n\t 10.  ";
delay(600);

*/
cout<<endl;
cin>>a;
switch(a)
  {
   case 0 : return 0;
	    break;
   case 1 : b=1234;

	    break;
   case 2 : b=1234567;

	    break;
   case 3 : b=12345;

	    break;
   case 4 : b=98765;

	    break;
   case 5 : b=12234;

	    break;
   case 6 : b=6789;

	    break;

   case 7 : b=246;

	    break;

   case 8 : b=4567;

	    break;

   case 9 : b=75657;

	     break;
  /* case 10 : b= ;

	    break; */

	     //put a case here for every increment in choice
   default: goto xyz;
	    break;


   }




if(b!=0)
{
s:

if(b==1234)
{
clrscr();
cout<<" \n\n\t\t\t     \4 HELLO OUT THERE";
f:
cout<<"\n\n\t\t\t        \5 Welcome\n\t\t\t Now you are in JB's place";
cout<<"\n\n\t\t\t  Enter your choice";
cout<<"\n 1. Smartphones";
cout<<"\n 2. Laptops";
cout<<"\n 3. Headphones";
cout<<"\n 4. Speakers\n";
cin>>a;
switch(a)
{
  case 1 : cout<<"\n\t\t\tSmartphones";
	   cout<<"\nwhich type of smartphone you want";
	   cout<<" 1. keypads";
	   cout<<" 2, screentouch\n";
	   cin>>a;
	   switch(a)
	   {
	   case 1 : cout<<"keypads";
		    cout<<"Not available";
	   break;
	   case 2 : cout<<"screntouch";
		    cout<<"samsung\n";
		    cout<<"micromax\n";
		    cout<<"oppo\n";
	   break;
	   }
	   break;
  case 2 : cout<<"\nlaptops";
	   cout<<"\n of which brand laptop..";
	   cout<<" \n1. acer";
	   cout<<" \n2. lenevo";
	   cout<<" \n3. apple\n";
	   cin>>a;
	   switch(a)
	   {
	   case 1 : cout<<"acer";break;
	   case 2 : cout<<"lenevo";break;
	   case 3 : cout<<"apple (awkad ke bhar hai teri)";break;
	   }
	   break;
  case 3 : cout<<"\nheadphones";
	   cout<<"of which brand??";
	   cout<< " \n1. sony";
	   cout<<" \n2. iball";
	   cout<<" \n3. lenevo\n";
	   cin>>a;
	   switch(a)
	   {
	   case 1 : cout<<"sony"; break;
	   case 2 : cout<<"iball";break;
	   case 3 : cout<<"lenevo";break;
	   }
	   break;
  case 4 : cout<<"spreaker\nof which brand u want??";
	   cout<<"\n1. iball";
	   cout<<"\n2. jbl";
	   cout<<"\n3. cluster\n";
	   cin>>a;
	   switch(a)
	   {
	   case 1 : cout<<"iball";break;
	   case 2 : cout<<"jbl(awkad ke bhar hai teri)";break;
	   case 3 : cout<<"cluster";break;
	   }
	   break;
}

cout<<"\n\t\tWANT TO CHANGE CHOICE OR TO START LIST ONE MORE TIME , PRESS 2";
cout<<"\n\t\tWant to enter other password & move to other choice press 1";
cout<<"\n\t\t    If not, press any no. & press enter key ";
cin>>a;
if(a==2)
   {
    clrscr();
    goto f;
   }
if(a==1)
   {
   clrscr();
   goto t;
   }
else
   {
   return 0;
   }
}


if(b==1234567)
  {
  clrscr();

  cout<<"\n\n\t\t Welcome to program to print pyramid using number";
  cout<<"\n\t\t\t Enter any number";
  cin>>a;
  for(int i=1;i<=a;++i)
   {
     for(int j=1;j<=i;++j)
      {
       cout<<"JB ";
      }
     cout<<"\n";
   }
  cout<<endl<<"\n\t\tWant to start program once more??\n\t\t\tPRESS 1" ;
  cout<<"\n\t\tPress any key to exit program";
  cin>>a;
  if(a==1)
   {
    goto t;
   }
  else
  {
   return 0;
  }
 }


if(b==12345)
  {
    clrscr();
    cout<<"\n\t\tEnter the number of which you want to print table\n";
    int num,digit,z,a;
    cin>>num;
    cout<<"\n\t Till which number you want to print table..?? enter number\n";
    cin>>digit;
    for(z=1;z<=digit;++z)
     {

      a=num*z;
      cout<<"\n"<<a;
      delay(500);
     }
    cout<<"\n\n\t\tWant to start program once more??\n\t\t\tPRESS 1" ;
    cout<<"\n\t\t\tPRESS 1";
    cout<<"\n\t\tPress any key to exit program";

    cin>>a;
    if(a==1)
      {
       goto t;
      }
    else
      {
       return 0;
      }
  }


if(b==98765)
  {
    clrscr();
    int no,power,value;
    cout<<"\n\t\t  Enter a no. to find its value with any power";
    cin>>no;
    cout<<"\n\t\t\tEnter the power of the no.";
    cin>>power;
    value=pow(no,power);
    cout<<"\n\n\t\t\tYour answer = "<<value;
    cout<<"\n\n\t\tWant to start program once more??\n\t\t\tPRESS 1" ;
    cout<<"\n\t\tPress any key to exit program";
    cin>>a;
    if(a==1)
     {
      goto t;
     }
    else
    {
     return 0;
    }
  }


if(b==12234)
 {
 clrscr();
 cout<<"\n\n\t\t\tWelcome to program of arrey";
 cout<<"\n\t  \2 Here you can enter number upto 50, & also can work on them";
 int g[50];
 int i;
 cout<<"\n\n\t\tNumber of elements you are going to insert";
 int elem;
 cin>>elem;

 clrscr();
 cout<<"\n\n\tENTER DATA (numbers)\n";
 for(i=0;i<elem;++i)
   {
   cin>>g[i];
   }
 mp:

 clrscr();
 cout<<"\n\n\tWhich task u want to perforn on ur entered data";
 cout<<"\n1. Want to know the value of a particuler adrees";
 cout<<"\n2. Want to add two entered value";
 cout<<"\n3. Want to multiply enter no.";
 cout<<"\n4. Want to all the data you entered?\n";
 int q,y,n,b;
 cin>>q;
 if(q<=4)
 /*change condition according to no. of cases*/
 {
  switch(q)
  {
   case 1: cout<<"Enter the Serial number\n";

	   cin>>a;
	   y=a-1;
	   cout<<"\ndata on given s.no. is "<<g[y];
	   break;
   case 2: cout<<"\nEnter the serial number of two data\n";
	   cin>>a;
	   y=a-1;
	   cin>>n;
	   b=n-1;
	   q=g[y]+g[b];
	   cout<<"\n\nsum to value of enter no = "<<g[y]<<" + "<<g[b]<<"is = "<<q;
	   break;
   case 3: cout<<"Enter the serial number of two data\n";
	   cin>>a;
	   y=a-1;
	   cin>>n;
	   b=n-1;
	   q=g[y]*g[b];
	   cout<<"\n\nMultiplication of entered no. = "<<g[y]<<" X "<<g[b]<<"is = "<<q;
   case 4: clrscr();
	   for(i=0;i<elem;++i)
	   {
	   cout<<g[i]<<endl;
	   }
   }

  cout<<"\n\nWanna repeat program?";
  cout<<"\nEnter 0 if u want ,if not enter any other no.\n";
  cin>>b;
  if(b==0)
  {
  goto t;
  }
  else
  {
  return 0;
  }
  }
  else
    {
    goto mp;
    }
  }



if(b==6789)
  {

  clrscr();
  employee emp[50];
  int n;
  int ch;
  char dept[20];
  cout<<"Enter n. of employee\n";
  cout<<"(Should less than 50)\n";
  cin>>n;
  input(emp,n);

  clrscr();
  cout<<"\nEmployee Data processing Menu";
  cout<<"\n 1. Display all employee details";
  cout<<"\n 2. Employee number serch";
  cout<<"\n 3. Exit";
  cin>>ch;
   switch(ch)
    {
     case 1: displ(emp,n);
	     break;
     case 2: cout<<"Enter employee number to be serched\n";
	     cin>>ch;
	     enosrch(emp,n,ch);
	     break;
     case 3: exit(0);
    }

  cout<<endl<<"\n\n\t\tWant to start program once more??\n\t\t\tPRESS 1" ;
  cout<<"\n\t\tPress any key to exit program";
  cin>>a;
  if(a==1)
   {
    goto t;
   }
  else
  {
   return 0;
  }
 }


if(b==4567)
{
  clrscr();
  Acc s;
  int pass;
  double accn;
  cout<<"\nWelcome to bank \n";
  cout<<"To create new account enter following details\n";
  s.IN();

  clrscr();
  cout<<"To access account\n";
  cout<<"Enter account number\n";
  cin>>accn;
  cout<<"Enter password\n";
  cin>>pass;
  s.Password(accn,pass);
  cout<<endl<<"\n\n\t\tWant to start program once more??\n\t\t\tPRESS 1" ;
  cout<<"\n\t\tPress any key to exit program";
  cin>>a;
  if(a==1)
   {
    goto t;
   }
  else
   {
   return 0;
   }
 }
  getch();

}



if(b==246)
{
  clrscr();
  int  no; ///for loop
  int x,y; //for add & sub
  More CB[5],z;     //z to store add &sub value
  cout<<"How many Box enteries you want to enter? "<<endl;
  cout<<"\t(Should less than 6)"<<endl;
  cin>>no;
  for(int i=0;i<no;i++)
  {
    clrscr();
    cout<<"Enter details of box number : "<<i+1<<endl;
    CB[i].IN();
  }
  T:
  clrscr();
  cout<<"Choose an option"<<endl;
  cout<<" 1. Want to see all entered data"<<endl;
  cout<<" 2. Want to see enteres of a particular Box"<<endl;
/*  cout<<" 3. Want to add lenght , width , height of two Boxes"<<endl;
  cout<<" 4. Want to subtract lenght , width , height of two Boxes"<<endl;*/
  int n;   //for switch
  cin>>n;
  switch(n)
  {
    case 0: exit(0);
    case 1: for(int i=0;i<no;i++)
	    {
	      cout<<"Enteries of Box number "<<i+1<<endl;
	      CB[i].OUT();
	    }
	    break;
    case 2: cout<<"Enter the Box number of which you want to see enteries"<<endl;
	    cin>>no;
	    no=no-1;
	    CB[no].OUT();
	    break;
/*    case 3: cout<<"Which box enteries you want to add"<<endl;
	    cin>>x>>y;
	    z = CB[x]+CB[y];
	    z.OUT();
	    break;
    case 4: cout<<"Which box enteries you want to subtract"<<endl;
	    cin>>x>>y;
	    z = CB[x]-CB[y];
	    z.OUT();
	    break;
*/
    default:
      cout<<"You entered a wrong choice , make choice once more"<<endl;
      cout<<"If you want to exit press 0"<<endl;
      cin>>x;
      if(x!=0)
      {
	goto T;
      }
      else
      {
	exit(0);
      }
      break;
  }
  cout<<endl<<"\n\n\t\tWant to start program once more??\n\t\t\tPRESS 1" ;
  cout<<"\n\t\tPress any key to exit program";
  cin>>a;
  if(a==1)
   {
    goto t;
   }
  else
   {
    return 0;
   }
}


if(b==75657)
{
  clrscr();
  stud S[20];
  int r,k;
  char n[20],s[7],c[10];
  cout<<"how many student you want to enter?"<<endl<<"Should less than 21 ";
  cin>>k;
  for(int i=0;i<k;i++ )
  {
    cout<<"Enter data of student "<<i+1<<endl;
    cout<<"roll no ";cin>>r;
    cout<<"name ";cin>>n;
    cout<<"subject ";cin>>s;
    cout<<"contact no ";cin>>c;

    S[i].In(r,c,n,s);
    clrscr();
  }
  cout<<"Which Data enter you want to display ";
  cin>>k;
  k=k-1;
  S[k].Out();
  getch();

   cout<<endl<<"\n\n\t\tWant to start program once more??\n\t\t\tPRESS 1" ;
  cout<<"\n\t\tPress any key to exit program";
  cin>>a;
  if(a==1)
   {
    goto t;
   }
  else
   {
    return 0;
   }
}

//can put more  IF password  condition here


else
{
xyz:
clrscr();
cout<<"\n\t\t          Sorry , but ENTERED CHOICE IS WRONG";
cout<<"\n\t\t\t         Now you need to enter password";
cout<<"\n\t     (But if u dont know the password dont waste your time)";
cout<<"\n\t\t\tpress 0 & press enter key  to exit\n";
cin>>b;

if(b!=0)
  {
   goto s;
  }
else
 {
  return 0;
 }
}
}


else
   {
    return 0 ;
   }

getch();
return 0;
}


