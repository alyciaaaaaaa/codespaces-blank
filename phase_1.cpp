#include<iostream>

using namespace std; //shirk it from std::cout to just cout
int main()
{
    //show text
    cout<<"ginger"<<" namkhing\n";
    //c out form libraly std
    cout<<"eieieiei"<<"  :))";
    cout<<endl; //same with \n 
    //endl = end line


    //variable
    int num1 =100; //or int num1=100,num2=200;
    int num2=200;
    //num1 = 100;
    //num2 = 200;

    const float SCORE = 80.5; //constan can't change
    string name = "nongtumm"; //use doublequote for string
    int age=20;
    bool pass = true; //bool from bollen true=1,false=0
    char grade = 'A'; //use singlequote
    SCORE = 0; //not change cuz line 20 declare it const

    cout << "number 1 is " << num1 << "\n";
    cout << "number 2 is " << num2 << "\n";
    cout << "score = " << SCORE << "\n";
    cout << "pass  = " <<pass <<"\n";
    cout << "grade = " << grade << "\n";
    cout << "student name  : " << name << "\n";
    cout << "age           : " << age << "\n";

    //variable name and const
    string _name = "Namkhingggg";
    cout << _name << endl;

    //operator

}