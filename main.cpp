//
//  main.cpp
//  DBSCAN
//
//  Created by Tony SHE on 30/4/15.
//  Copyright (c) 2015 Tony Sheh. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "dbscan.h"
using namespace std;
int main(int argc, const char * argv[]) {
    vector<Point> dataset;
    ifstream in("./3spiral.txt");
    int i=0;
    string line;
    if(in){
        float x , y;
        while (in>>x>>y) {
            Point p;
            p.x = x;
            p.y = y;
            p.lable = -1;
            dataset.push_back(p);
        }
    }else{
        cout<<"No such file"<<endl;
    }
    
   int c =  dbscan(dataset,2, 3);
    cout<<" （x, y）  cluster"<<endl;
    for (int i = 0; i<dataset.size(); i++) {
        cout<<"("<<dataset[i].x<<","<<dataset[i].y<<") "<<dataset[i].lable<<endl;
    }

    return 0;
}
