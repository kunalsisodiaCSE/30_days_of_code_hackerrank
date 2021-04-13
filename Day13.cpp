//correct 13
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book
{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a)
        {
            title=t;
            author=a;
        }
        virtual void display()=0;

};
class MyBook
{
public:
string title,author;
int price;
MyBook(string a1,string b,int d)
{
title=a1;
author=b;
price=d;
}
void display()
{
cout<<"Title: "<<title<<endl;
cout<<"Author: "<<author<<endl;
cout<<"Price: "<<price<<endl;
}
};
int main()
 {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}