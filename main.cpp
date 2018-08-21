//
//  main.cpp
//  Top scoring student
//
//  Created by the brad on 2017/04/26.
//  Copyright © 2017 The Brad. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <sstream>
#include "student_class.h"
#include "student_list.h"

using namespace std;

void make(){
    string mysrt;

    getline(cin, mysrt);
    cout<<mysrt<<endl;
    getline(cin, mysrt);
    cout<<mysrt<<endl;
}

int main(int argc, const char * argv[]) {
    Student brad = Student("bradford", "Sawadye", 53);
    //std::cout << "name: " + brad.getname()<<endl;
    Student_list list = Student_list();
    const int buffersize = 128;

    //list.insert_into_list("drr", 43);
    //list.insert_into_list("rtt", 8);

    // create file for writing

    const char * fn = "test.txt";
    FILE * fw = fopen(fn, "w");
    //for (int i = 0; i < 6; ++i) {
        string str;
       // stringstream(i) >> str;
       // string fr = "brad" + str + "," + "saw" + str + "," + str;
       const char * st ="brad,saw,12\n";
        const char * st1 = "brim,fish,13\n";
        const char * st2 = "brace,chase, 15\n";
        fputs(st, fw);
    fputs(st1, fw);
    fputs(st2, fw);
    //}
    fclose(fw);

    // open file and write
    char buf[buffersize];
    FILE * fs = fopen(fn, "r");

    while (fgets(buf, buffersize, fs)) {
        string stri(buf);
        int score;
        size_t commapoint = stri.rfind(",");
        string name_surname = stri.substr(0,commapoint);
        string sscore = stri.substr(1 + commapoint, stri.size() - (1 + commapoint));
        stringstream(sscore) >> score;
        list.insert_into_list(name_surname, score);
    }

    fclose(fs);

    cout << list.get_top_scorer_name() + "  " << list.get_top_score()<<endl;
    cout<< list.get_top_scorer_name().size()<<endl;

    // string myst;
    // getline(cin, myst);
    // cout<<myst<<"brad"<<endl;
    // make();
    return 0;

}
