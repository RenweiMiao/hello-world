/* 
   File:   main
   Author: Renwei Miao  
   Created on September,7 2016, 10;28 AM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT =100; //Global conversion


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short cstSurv=16500,   //Number of customer surveyed
                   cstEnrg,         //Energy drinkers
                   cstCitr;         //Citrus energy drinkers
    unsigned char  pEnergy=15,      //Percentage of energy drinkers
                   pCitrus = 58;    //Percentage of citrus energy drinkers
    
    //Input values
    cstEnrg =cstSurv * pEnergy / PERCENT;
    cstCitr= cstEnrg*pCitrus/PERCENT;
   
    //Process values -> Map inputs to Outputs
    cout<< "The number of customers surveyed = "<< cstSurv<<endl;
    cout<< "The percentage energy drinkers = "<< static_cast<int>(pEnergy)<<endl;
    cout <<"The percentage citrus energy drinkers = "<<static_cast<int>(pCitrus)<<endl;
    cout<< "The number of energy drinkers = "<<cstEnrg<<endl;
    cout<< "The number of citrus energy drinkers = "<< cstCitr<<endl;
    //Display Output

    //Exit Program
    
    
    return 0;
}