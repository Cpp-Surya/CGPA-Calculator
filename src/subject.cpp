#include "subject.h"

#include<iostream>

Subject::Subject(const std::string &name, const char &grade):name_(name),grade_(grade){
}

void Subject::evaluateGradePoint(){
    if(grade_ == 'A'){
        gradePoint_ = 10;
    }else if(grade_ == 'B'){
        gradePoint_ = 9;
    }else if(grade_ == 'C'){
        gradePoint_ = 8;
    }else if(grade_ == 'D'){
        gradePoint_ = 7;
    }else if(grade_ == 'F'){
        gradePoint_ = 0;
    }else{
        std::cerr<<"Invalid grade entered"<<std::endl;
    }
}


std::string Subject::getName() const{
    return name_;
}

char Subject::getGrade() const{
    return grade_;
}

int Subject::getGradePoint() const{
    return gradePoint_;
}

void Subject::showSubjectInfo(){
    std::cout<<name_<<", "<<grade_<<", "<<gradePoint_<<std::endl;
}