//
//  student_list.h
//  Top scoring student
//
//  Created by the brad on 2017/04/26.
//  Copyright © 2017 The Brad. All rights reserved.
//

#ifndef student_list_h
#define student_list_h
#include <string>
#include <map>

using namespace std;
class Student_list {

    map<int, string> student_list;
public:
    Student_list() {}
    void insert_into_list(const string & name_surname, int score) {student_list.insert({score, name_surname});}
    string get_top_scorer_name() const{ return (*(--student_list.end())).second;}
    int get_top_score() const {return (*(--student_list.end())).first;}

};

#endif /* student_list_h */
