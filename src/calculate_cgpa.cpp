#include "calculate_cgpa.h"

#include<iostream>

void CalculateCGPA::enterSemesterInfo(){
    std::cout<<"Enter no of semesters attended: ";
    int semesterCount;
    std::cin>>semesterCount;
    std::cout<<std::endl;
    for(int i = 1 ; i <= semesterCount ; i++){
        std::string semesterName{"SEMESTER "+std::to_string(i)};
        std::shared_ptr<Semester> semester = std::make_shared<Semester>(semesterName);
        semester->enterSubjectsInfo();
        semester->calculateGPA();
        semesters_.push_back(semester);
        std::cout<<std::endl;
    }
}

void CalculateCGPA::calculateCGPA(){
    for(auto& semester : semesters_){
        cgpa_ = cgpa_ + semester->getGPA();
    }
    cgpa_ = cgpa_/semesters_.size();
}

double CalculateCGPA::getCGPA() const{
    return cgpa_;
}

void CalculateCGPA::displayAllSemestersInfo(){
    if(!semesters_.empty()){
        for(const auto& semester : semesters_){
            std::cout<<semester->getName()<<std::endl;
            std::cout<<"Name, Grade, Grade Point"<<std::endl;
            semester->showSemesterInfo();
            std::cout<<std::endl;
        }
    }else{
        std::cout<<"Data not present"<<std::endl;
    }
}