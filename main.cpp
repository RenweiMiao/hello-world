/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on September 7, 2016, 09:57 AM
 * Purpose:  Calculate cost of Stock Purchase
 */

//Include system level libraries
#include <iostream>   //Input/Output Libraries
using namespace std;  //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Functional Prototypes

//Program execution begins here!
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    char s = ' '; //The space character
    char c; //Character used to create the big c
    
    //Input value
    cout <<"what character would you like to use to make a Big C,input\n";
    cin >>c;
   
    //Process value-> Map inputs to outputs
    
    
    //Display Output -> The Big C
    cout<<s<<s<<c<<c<<c<<endl;
    cout<<s<<c<<s<<s<<c<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<s<<c<<s<<s<<c<<endl;
    cout<<s<<s<<c<<c<<c<<endl;
   
    //Exit Program
    return 0;
}