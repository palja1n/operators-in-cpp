#include <iostream>
using namespace std;

int main(){
    int Maths, English, Chemistry, Physics, Python;
    int sum;
    int average;
    
    cout<<"Enter marks for Maths: ";
    cin>>Maths;
    
    cout<<"Enter marks for English: ";
    cin>>English;
    
    cout<<"Enter marks for Chemistry: ";
    cin>>Chemistry;
    
    cout<<"Enter marks for Physics: ";
    cin>>Physics;
    
    cout<<"Enter marks for Python: ";
    cin>>Python;
    
    sum = Maths + English + Chemistry + Physics + Python;
    average = sum / 5;

    cout << "Average marks: " << average << endl;
    
  if (average >= 80 && average <= 90){
        cout<<"The grade is O."<<endl;
    }
    else if (average >= 70 && average < 80){
        cout<<"The grade is A+."<<endl;
    }
    else if (average >= 60 && average < 70){
        cout<<"The grade is A."<<endl;
    }
    else if (average >= 50 && average < 60){
        cout<<"The grade is B."<<endl;
    }
    else if (average >= 40 && average < 50){
        cout<<"The grade is C."<<endl;
    }
    else {
        cout<<"Fail."<<endl;
    }
}
