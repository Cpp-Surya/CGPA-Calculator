#ifndef CGPACALCULATOR_INC_SUBJECT_H_
#define CGPACALCULATOR_INC_SUBJECT_H_

#include<string>

class Subject{
    std::string name_;
    char grade_;
    int gradePoint_;

public:
    Subject(const std::string &name, const char &grade);
    void evaluateGradePoint();
    std::string getName() const;
    char getGrade() const;
    int getGradePoint() const;
    void showSubjectInfo();
};

#endif //CGPACALCULATOR_INC_SUBJECT_H_