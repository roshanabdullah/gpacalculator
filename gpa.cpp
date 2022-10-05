#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int courses=5;
    string course_name;
    string grade;
    int credit;
    double grade_points;
    float total_grade_points=0;
    int total_credits=0;
    float final_gpa;
    
    
    for(int i=0; i<courses; i++){
        cout << "Enter course name \n";
        cin >> course_name;
        cout << "Enter credit \n";
        cin >> credit;
        cout << "Enter Grade \n";
        cin >> grade;
        
        cout << "Your course name : " + course_name + " \n"   ;
        cout << "Your course credit : " + to_string(credit) + " \n";
        cout << "Your Grade : " + grade + " \n";
        
        if(grade == "A+"){
        grade_points=credit*4.3;
        }
        else if(grade == "A"){
            grade_points=credit*4.0;
        }
        else if(grade == "A-"){
            grade_points=credit*3.7;
        }
        else if(grade == "B+"){
            grade_points=credit*3.3;
        }
        else if(grade == "B"){
            grade_points=credit*3.0;
        }
        else if(grade == "B-"){
            grade_points=credit*2.7;
        }
        else if(grade == "C+"){
            grade_points=credit*2.3;
        }
        else if(grade == "C"){
            grade_points=credit*2.0;
        }
        else if(grade == "C-"){
            grade_points=credit*1.7;
        }
        else if(grade == "D+"){
            grade_points=credit*1.3;
        }
        else if(grade == "D"){
            grade_points=credit*1.0;
        }
        else if(grade == "F"){
            cout << "Fail \n";
        }
        
        total_grade_points=total_grade_points+grade_points;
        total_credits=total_credits+credit;
        
    }
    
    cout << total_grade_points << endl;
    cout << total_credits << endl;
    
    final_gpa=total_grade_points/total_credits;
    cout << final_gpa << endl;
}
