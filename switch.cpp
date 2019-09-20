#include<iostream>
using namespace std;

class obj{
public:
    char x;
    void getobj();

};
void obj::getobj(){
cout<<"MCQ Test Exam" <<endl<<endl<<endl<<endl;
cout<<"Enter your Answer Carefully,because Once you chose your Answer it can't be Overwritten." <<endl<<endl;

cout<<"1. Which is logical operator?"<<endl;
cout<<"a) + "<<endl;
cout<<"b) >= "<<endl;
cout<<"c) AND "<<endl;
cout<<"d) << "<<endl;

cout<<"your Answer: ";
cin>>x;
switch(x)
{
case'b':
    cout<<"Right Answer..Welldone!! "<<endl;
    break;
default:
    cout<<"Wrong Answer..The correct is: (b)"<<endl;
}
cout<<endl;
cout<<"2.Which language is used to build website?" <<endl;
cout<<"a)Python" <<endl;
cout<<"b)java " <<endl;
cout<<"c)html" <<endl;
cout<<"d)C++ " <<endl;

cout<<"Your Answer: ";
cin>>x;
switch(x)
{
case'c':
    cout<<"Wright Answer!! Bravo!! "<<endl;
    break;
default:
    cout<<"Wrong Answer!..Right Answer Is: (c)"<<endl;
}
cout<<endl;
cout<<"3. What is hotspot ?"<<endl;
cout<<"a) special security system"<<endl;
cout<<"b)cable connected Internet system"<<endl;
cout<<"c)Wireless Internet system"<<endl;
cout<<"d) special kind of software"<<endl;

cout<<"Your Answer: ";
cin>>x;
switch(x)
{
case'c':
    cout<<"Right Answer ";
    break;
default:
    cout<<"Wrong Answer..Right answer is (C) "<<endl;
}
cout<<endl;
cout<<"4.How many bits in Unicode?"<<endl;
cout<<"a)4"<<endl;
cout<<"b)8"<<endl;
cout<<"c)16"<<endl;
cout<<"d)32"<<endl;
cout<<"Your Answer: ";
cin>>x;
switch(x)
{
case'c':
    cout<<"Right Answer!! "<<endl;
    break;
default:
    cout<<"Wrong Answer....Right Answer is (c) "<<endl;
}
cout<<endl;
cout<<"5.Which keyword used in C language?"<<endl;
cout<<"a)select"<<endl;
cout<<"b)href"<<endl;
cout<<"c)Carry"<<endl;
cout<<"d)for"<<endl;
cout<<"your Answer: ";
cin>>x;
switch(x)
{
case'd':
    cout<<"Right Answer!! clap clap!!!!..you're a Genius! "<<endl;
    break;
default:
    cout<<"Wrong Answer.....Right Answer is (d)"<<endl;
}




}
int main()
{
    obj s;
    s.getobj();
    return 0;
}
