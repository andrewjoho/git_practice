/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: andrewjoho
 *
 * Created on August 10, 2019, 1:07 AM
 */

#include <cstdlib>
#include <iostream>
#include <cstdint> // Clarifys byte size regardless of XX-bit machine
#include <cmath>
#include <ctime>

using namespace std;

double times10(double input_number, double multiplier);
// returns the input_number * multiplier
double times10(double input_number, double multiplier1, double multiplier2);
// returns the input_number * multiplier * multiplier

const double PI = 3.14;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout<<"PI="<<PI<<endl;
    
    cout<<R"(c:\files\)";
    cout<<"Hi\vBye";
    cout<<R"(c:\files\)";
    double x = -32767.4;
    cout<<"\nx="<<x<<endl;
    auto w = x;
    cout<<"w="<<w<<endl;
    
    bool test = 0;
    cout<<test<<endl;
    
    if (test==true) { cout<<"TRUE::True\n"; }
    if (test==false) { cout<<"FALSE::False\n"; }
    if (test==1) { cout<<"TRUE::1\n"; }
    if (test==0) { cout<<"FALSE::0\n"; }
    
    int i = 0;
    do {
        cout<<i<<endl;
        i++;
    } while (i<3);
    
    double z = 3.3456e1;
    cout<<endl<<z<<endl;
    
    //START to set precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //END to set precision
    
    cout<<endl<<z<<endl;
    
    enum my_name {zero, one, minus_two=-2, minus_one=-1};
    cout<<zero<<one<<minus_two<<minus_one;
    cout<<endl<<my_name::zero<<my_name::minus_one<<endl;
    
    int a=0;
    cout<<"Outside 1: "<<a<<endl;
    {
        cout<<"Inside 1: "<<a<<endl;
        //int a=1;
        {
            int a=2;
            cout<<a<<endl;
        }
        cout<<a<<endl;
    }
    
    srand(time(0));
    cout<<"Random #: "<<(rand()%6)+1<<endl;
    int re = 9;
    cout<<"Int: "<<re<<", Type Cast Double: "<<static_cast<double>(re)<<endl;
    
    cout<<times10(5,6)<<endl;
    
    cout<<times10(5,6,2)<<endl;
    
    printf("HEY");
    
    return 0;
}


double times10(double input_number, double multiplier) {
    return input_number*multiplier;
}
double times10(double input_number, double multiplier1, double multiplier2) {
    return input_number*multiplier1*multiplier2;
}