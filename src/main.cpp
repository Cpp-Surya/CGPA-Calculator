#include "calculate_cgpa.h"

#include<iostream>
#include<string>
#include<memory>

int main(){
    std::shared_ptr<CalculateCGPA> cgpa = std::make_shared<CalculateCGPA>();
    cgpa->enterSemesterInfo();
    cgpa->calculateCGPA();
    double result = cgpa->getCGPA();
    cgpa->displayAllSemestersInfo();
    std::cout<<"CGPA: "<<result<<std::endl;
    return 0;
}