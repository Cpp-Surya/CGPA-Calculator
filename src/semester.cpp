#include "semester.h"

#include<iostream>
#include<string>
#include<cctype>

Semester::Semester(const std::string &name):name_(name){
}

void Semester::enterSubjectsInfo(){
    std::cout<<"Enter total no of subjects in "<<name_<<": ";
    int subjectCount;
    std::cin>>subjectCount;
    for(int i = 1; i <= subjectCount ; i++){
        std::string subjectName{"Subject " + std::to_string(i)};
        std::cout<<"Enter Grade for "<<name_<<" "<<subjectName<<": ";
        char subjectGrade;
        std::cin>>subjectGrade;
        if(std::islower(subjectGrade)){
            subjectGrade = std::toupper(subjectGrade);
        }
        std::shared_ptr<Subject> subject = std::make_shared<Subject>(subjectName,subjectGrade);
        subject->evaluateGradePoint();
        subjects_.push_back(subject);
    }
}

void Semester::calculateGPA(){
    for(auto &subject : subjects_){
        gpa_ = gpa_+subject->getGradePoint();
    }
    gpa_ = gpa_/subjects_.size();
}

double Semester::getGPA() const{
    return gpa_;
}

std::string Semester::getName() const{
    return name_;
}

void Semester::showSemesterInfo(){
    for(const auto& subject : subjects_){
        subject->showSubjectInfo();
    }
}