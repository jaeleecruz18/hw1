//
// main.cpp
//  HW1
//
//  Created by Jaelee Cruz on 5/23/17.
//  Copyright © 2017 Jaelee Cruz. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
void ex02();
void ex03();
void ex04();
void ex05();
int Double(int integer);
int Random (int number1, int number2);
int Parameter (int integer);
void Array(int list[], int arraySize);
void ArrayValue (int list[], int arraySize);
int main() {
    ex02();
    ex03();
    ex04();
    ex05();
    return 0;
}

void ex02() {
    int hasPassedTest = 1;
    
    int x = 200;
    int y = 100;
    cout << "x > y" << (x>=y) << endl;  //is this less than or equal to?
    
    int numberOfShares;
    cout << "enter a value" << endl;
    cin >> numberOfShares;
    if (numberOfShares < 100)
        cout << "numberOfShares < 100" << endl;
    else
        cout << "numberOfShares > 100" << endl;
    
    int box, bulk;
    cout << "What is the box width and the book width? " << endl;
    cin >> box >> bulk;
    cout << "bulk / box" << bulk % box << endl;
    
    
    int chocolateLife, temperature;
    cout << "What is the shell life of a box of chocolate? " << endl;
    cin >> chocolateLife;
    cout << "What is the temperature outside? " << endl;
    cin >> temperature;
    if (temperature > 90)
        cout << chocolateLife - 4 << endl;
    
}

void ex03(){
    int areaOfSquare;
    cout << "what is the area of the square? ";
    cin >> areaOfSquare;
    cout << areaOfSquare * sqrt(2) << endl; //Output the length of the diagonal for that square
    
    char u;
    cout << "Do you like C++" << endl;
    cin >> u;
    if (u == 'y')
        cout << "yes" << endl;
    if (u == 'n')
        cout << "no" << endl;
    
    
    cout << "enter a character " ;
    char ch;
    cin >>ch;
    cout << "the tab char is " << '\t' << endl;
    
    string mailingAddress;
    cout << "What is your mailing address?" << endl;
    cin >> mailingAddress;
    
    string var="";
    
}

void ex04() {
    int number;
    cout << "enter a number 1 through 10 " << endl;
    cin >> number;
    while (number > 10)
        cout << "enter a number 1 through 10 " << endl;
    while (number < 11)
        cout << "your input is " << number << endl;

    int sum = 0;
    for (int i = 0; i < number; i++)
    {
        sum += (number * number * number);
    }
    cout << "the sum of the cubes is " << sum << endl;
    
    int i = 0;
    do{
        cout << '*' << endl;
        i++;
    } while(i < number);
    
    
    for (int i = 0; i < number ; i++)
    {
        cout << (i += 2) << endl;
    }
    
    
    cout << Double(number);
    
    cout << Random (rand() % 10, rand() % 10);
    
    cout << Parameter(9);
    
}

int Double(int integer) {
    return (integer + integer);
    
}

int Random (int number1, int number2){
    return (number1 + number2);
}


int Parameter (int integer){
    return (integer + 1);
}

void ex05() {
    int numbers[5];
    for (int i =0; i < 5; i++){
        cin >> numbers[i];
    }
    
    int x,y;
    cout << "input numbers for x and y ";
    cin >> x;
    cin >> y;
    cout << (x+y);
    cout << (x*y);
    
    
    Array (numbers, 5);
    
    ArrayValue(numbers, 5);
}


void Array(int list[], int arraySize){
    for (int i = 0; i < arraySize; i++)
    {
        cout << list[i] << "  ";
    }

}

void ArrayValue (int list[], int arraySize){
    int value;
    for (int i = 0; i < arraySize; i++)
    {
        
        cout << "enter a value " << endl;
        cin >> value;
        if (value = arraySize)
            cout << "your value is in the array" << endl;
        else
            cout << "your value is not in the array" <<endl;
    }
}

