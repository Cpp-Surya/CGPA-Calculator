#ifndef CGPACALCULATOR_INC_SEMESTER_H_
#define CGPACALCULATOR_INC_SEMESTER_H_

#include "subject.h"

#include<vector>
#include<memory>

class Semester{
    std::string name_;
    std::vector<std::shared_ptr<Subject>> subjects_;
    double gpa_;

public:
    Semester(const std::string &name);
    void enterSubjectsInfo();
    void calculateGPA();
    double getGPA() const;
    std::string getName() const;
    void showSemesterInfo();
};

#endif //CGPACALCULATOR_INC_SEMESTER_H_