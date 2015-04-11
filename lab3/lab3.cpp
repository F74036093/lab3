//
//  main.cpp
//  lab3
//
//  Created by hungyu hang on 2015/4/10.
//  Copyright (c) 2015年 hungyu hang. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ifstream inFile("file.in", ios::in);
    //ofstream outFile("file.out", ios::out);
    int size, temp, sum = 0;
    
    if(!inFile){
        cerr<<"failed opening infile"<<endl;
        exit(1);
    }
    /*if(!outFile){
        cerr<<"failed opening outfile"<<endl;
        exit(1);
    }*/
    
    inFile>>size;
    
    
    vector<int> v_weight(size);
    for(int i = 0; i < size; i++){
        inFile>>temp;
        v_weight.at(i) = temp;
    }
    
    sort(v_weight.begin(), v_weight.end());
    
    for(int j = size - 1; j > size - 6; j--){
        sum = sum + v_weight.at(j);
        //cout<<v_weight[j]<<endl;
        
    }
    //outFile<<sum<<endl;
    cout<<sum<<endl;
    
    
    return 0;
}
