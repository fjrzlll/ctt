#include <iostream>
#include <string>
using namespace std;
#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    static string *notices;
    static int index;
    static void add(string str);
    static void print();
};

string* Board::notices = new string[100];
int Board::index = 0;

void Board::add(string str){
    notices[index++] = str;
}

void Board::print(){
    cout << "***** 게시판입니다. *****" << endl;
    for (int i=0; i<index; i++){
        cout << i << ":" << notices[i] << endl;
    } 
    cout << endl;
}

#endif