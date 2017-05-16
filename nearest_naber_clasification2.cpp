
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ( )

{

    int gd=DETECT,gm;

//intigraph(&gd,&gm,"c:/tc/bgi");

    initgraph(&gd, &gm, "C:\\TC\\BGI");


    vector<pair<int,int > >a,b;
    int x,y;
    cout<<"Enter the value if a....\n";
    for(int i=0; i<4; i++)
    {

        cin>>x>>y;
        a.push_back({x,y});
    }


    cout<<"Enter the value if b....\n";
    for(int i=0; i<4; i++)
    {

        cin>>x>>y;
        b.push_back({x,y});
    }


    cout<< "Enter new point \n";
    cin>>x>>y;
    int da=0;
    int db=0;
    for(int i=0; i<a.size(); i++)
    {
        da+=sqrt((x-a[i].first)*(x-a[i].first)+(y-a[i].second)*(y-a[i].second));
    }
    for(int i=0; i<a.size(); i++)
    {
        db+=sqrt((x-b[i].first)*(x-b[i].first)+(y-b[i].second)*(y-b[i].second));
    }
    int Min_a=da/a.size();
    int Min_b=db/b.size();
    if(Min_a<Min_b)
        a.push_back({x,y});
    else
        b.push_back({x,y});
    line(200,0,200,400);
    line(200,400,900,400);
    for(int i=0; i<a.size(); i++)
        circle(200+a[i].first,400-a[i].second,5);


    for(int i=0; i<b.size(); i++)
        rectangle(200+b[i].first, 400-b[i].second, 205+b[i].first, 405-b[i].second);


    getch();

    return 0;

}
