#ifndef CGPACALCULATOR_INC_CALCULATE_CGPA_H_
#define CGPACALCULATOR_INC_CALCULATE_CGPA_H_

#include<semester.h>

#include<vector>
#include<memory>

class CalculateCGPA{
    std::vector<std::shared_ptr<Semester>> semesters_;
    double cgpa_;

public:
    void enterSemesterInfo();
    void calculateCGPA();
    double getCGPA() const;
    void displayAllSemestersInfo();
};

#endif //CGPACALCULATOR_INC_CALCULATE_CGPA_H_