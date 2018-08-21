//
//  student_class.h
//  Top scoring student
//
//  Created by Brad on 2017/04/26.
//  Copyright © 2017 The Brad. All rights reserved.
//

#ifndef student_class_h
#define student_class_h

#include <string>

using namespace std;
class Student {
    string _name;
    string _surname;
    int _score;
    Student(){}
    
public:
    Student(const string & name, const string & surname, const int score): _name(name), _surname(surname), _score(score) {};
    
    //getter methods
    string getname() const {return _name;}
    string getsurname() const {return _surname;}
    int getscore() const {return _score;}
    
    //setter methods
    void setname(const string & name ) {_name = name;}
    void setsurname(const string & surname) {_surname = surname;}
    void setscore(const int score) {_score = score;}

};

#endif /* student_class_h */
