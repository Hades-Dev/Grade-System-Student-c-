#include <iostream>
#include <string>
#include <vector>

/*

Powered With Love By C++
Eng-Malik Ali
Feel Free To Contact Me : Hades_dev@protonmail.com

*/
using namespace std;

const int hours=4;
int num_course=0;
int sem_course_no=4;
float marks=0;
struct Student {
  string name;
  string nationality;
  int hours;
  int degree;
  string final_Eval;
  string age;
  float gpa;
};

int cal_hours(int all_course=sem_course_no)
{
    int total_hours=all_course*4;
    return total_hours;
}
//------- evaluateDegree Function -----------------
string evaluateDegree(double grade) {
    if (grade >= 90.0) {
        return "Excel";
    } else if (grade >= 80.0) {
        return "V.Good";
    } else if (grade >= 70.0) {
        return "Good";
    } else if (grade >= 60.0) {
        return "Accept";
    } else if (grade >= 50.0) {
        return "Pass";
    } else {
        return "Fail";
    }
}
double cal_degree(int degree)
{
    int total_degree=(degree*100)/(sem_course_no*100);
    return total_degree;
}
//---------------------------------------------------------------------------
double convert_percentage_to_gpa(double percentage) {
    if (percentage >= 95.0) {
        return 24.0;
    } else if (percentage >= 90.0) {
        return 23.0;
    } else if (percentage >= 85.0) {
        return 22.0;
    } else if (percentage >= 80.0) {
        return 21.0;
    } else if (percentage >= 75.0) {
        return 20.0;
    } else if (percentage >= 70.0) {
        return 19.0;
    } else if (percentage >= 65.0) {
        return 18.0;
    } else if (percentage >= 60.0) {
        return 17.0;
    } else if (percentage >= 55.0) {
        return 16.0;
    } else if (percentage >= 50.0) {
        return 15.0;
    } else if (percentage >= 45.0) {
        return 14.0;
    } else if (percentage >= 40.0) {
        return 13.0;
    } else if (percentage >= 35.0) {
        return 12.0;
    } else if (percentage >= 30.0) {
        return 11.0;
    } else if (percentage >= 25.0) {
        return 10.0;
    } else {
        return 0.0;
    }
}
//---------------------------------------------------------------------------

vector <float> courses_marks;


int main()
{   courses_marks.push_back(0);
     Student student;
    cout<<"\t\t\t|*************************************|\n";
    cout<<"\t\t\t|        Grade System Software        |\n";
    cout<<"\t\t\t|       Powered With Love By C++      |\n";
    cout<<"\t\t\t|*************************************|\n";
    cout << "Enter student name: ";
    getline(cin, student.name);
    cout << "Enter student Nationality: ";
    getline(cin, student.nationality);
    cout << "Enter student Age: ";
    getline(cin, student.age);

  for (int l=1;l<=3;l++)//Loop for Leves
  {
      cout<< "-----------Level: "<<l<<" ----------------\n";
      for (int s=1;s<=2;s++) //Loop for semesters
      {
          cout<< "*** Please Enter Degrees for Semester: "<<s<<" ***\n";
           if (s==1 && l==1){for (int c=1;c<=4;c++) {
            cout<<"Enter Mark For Course "<<c<<": ";
            cin>>marks;
            courses_marks.push_back(marks);
            num_course+=1;
                }}
          if (s==2 && l==1) // Level 1 semester 2
           {
              // cout<<"inside sem 2\n";
            for (int c=5;c<=8;c++) //Loop for Courses
                {
            cout<<"Enter Mark For Course "<<c<<": ";
            cin>>marks;
            courses_marks.push_back(marks);
            num_course+=1;
                }
            }
//----------------------- Level 2 -----------------------------------------
            if (s==1 && l==2)  {for (int c=9;c<=12;c++) {  // Level 2 semester 1
           cout<<"Enter Mark For Course "<<c<<": ";
            cin>>marks;
            courses_marks.push_back(marks);
            num_course+=1;}/*End of For Loop*/ }// End of If condition
          if (s==2 && l==2){ for (int c=13;c<=16;c++){ // Level 2 semester 2
            cout<<"Enter Mark For Course "<<c<<": ";
            cin>>marks;
            courses_marks.push_back(marks);
            num_course+=1; }}
//----------------------- Level 3 -----------------------------------------
            if (s==1 && l==3)  {for (int c=17;c<=20;c++) {  // Level 3 semester 1
           cout<<"Enter Mark For Course "<<c<<": ";
            cin>>marks;
            courses_marks.push_back(marks);
            num_course+=1;}/*End of For Loop*/ }// End of If condition
          if (s==2 && l==3){ for (int c=21;c<=24;c++){ // Level 3 semester 2
            cout<<"Enter Mark For Course "<<c<<": ";
            cin>>marks;
            courses_marks.push_back(marks);
            num_course+=1; }}

      }  //End of Semesters For loop

  } //End of level For Loop
  //------------------------------------------------
    student.hours=cal_hours(num_course);  //send all hours in all semesters

    int lv1_sem1=0;for(auto i=1;i<=4;i++) {lv1_sem1=lv1_sem1+courses_marks[i];} // Level 1 ,Semester 1 degree
    int lv1_sem2=0;for(auto i=5;i<=8;i++) {lv1_sem2=lv1_sem2+courses_marks[i];} // Level 1 ,Semester 2 degree

    int lv2_sem1=0;for(auto i=9;i<=12;i++) {lv2_sem1=lv2_sem1+courses_marks[i];} // Level 2 ,Semester 1 degree
    int lv2_sem2=0;for(auto i=13;i<=16;i++) {lv2_sem2=lv2_sem2+courses_marks[i];} // Level 2 ,Semester 2 degree

    int lv3_sem1=0;for(auto i=17;i<=20;i++) {lv3_sem1=lv3_sem1+courses_marks[i];} // Level 3 ,Semester 1 degree
    int lv3_sem2=0;for(auto i=21;i<=24;i++) {lv3_sem2=lv3_sem2+courses_marks[i];} // Level 3 ,Semester 2 degree

    float final_grade=((lv1_sem1+lv1_sem2+lv2_sem1+lv2_sem2+lv3_sem1+lv3_sem2)*100)/(num_course*100);
    student.degree=final_grade;
    student.final_Eval=evaluateDegree(final_grade);
    student.gpa=convert_percentage_to_gpa(final_grade);

   cout<<"|-------------------------------------------------------------------------|\n";
   cout<<"|                         In The Name of Allah                            |\n";
   cout<<"|                                                                         |\n";
   cout<<"|-------      Name:"<<student.name<<"\t\tNationality: "<<student.nationality<<"\t  |\n";
   cout<<"|      |      Age :"<<student.age<<"\t\t\t\t\t\t\t  |\n";
   cout<<"|      |      Hours:"<<student.hours<<"\tGPA:("<<student.gpa<<")\t\tGrade: "<<student.degree<<"%   "<<student.final_Eval<<"\t  |\n";
   cout<<"|-------                                                                  |\n";
  cout<<"___________________________________________________________________________\n";

  cout<<"| Level:1\t\t\t\t\t\t\t\t  |\n";
  cout<<"| Semester:1 "<<cal_hours()<<"H  "<<cal_degree(lv1_sem1)<<"%  "<<evaluateDegree(cal_degree(lv1_sem1))<<"\t| Semester:2 "<<cal_hours()<<"H  "<<cal_degree(lv1_sem2)<<"%  "<<evaluateDegree(cal_degree(lv1_sem2))<<"\t\t  |\n|_________________________________________________________________________|\n";
  for (int m=1;m <=4;m++)
  {
      cout<<"|Course"<<m <<":\t"<<sem_course_no<<"  "<<courses_marks[m]<<"  "<< evaluateDegree(courses_marks[m])<<"\t|Course :"<<m+sem_course_no <<":\t"<<sem_course_no<<"  "<<courses_marks[m+sem_course_no]<<"  "<<evaluateDegree(courses_marks[m+sem_course_no])<<"\t\t  |"<<endl;
  }

  cout<<"|_________________________________________________________________________|\n";
  cout<<"| Level:2\t\t\t\t\t\t\t\t  |\n";
  cout<<"| Semester:1  "<<cal_hours()<<"H  "<<cal_degree(lv2_sem1)<<"% "<<evaluateDegree(cal_degree(lv2_sem1))<<"\t| Semester:2 "<<cal_hours()<<"H  "<<cal_degree(lv2_sem2)<<"%  "<<evaluateDegree(cal_degree(lv2_sem2))<<"\t\t  |\n|_________________________________________________________________________|\n";
   for (int m=9;m <=12;m++)
  {
      cout<<"|Course"<<m <<":\t"<<sem_course_no<<"  "<<courses_marks[m]<<"  "<< evaluateDegree(courses_marks[m])<<"\t|Course"<<m+sem_course_no <<":\t"<<sem_course_no<<"  "<<courses_marks[m+sem_course_no]<<"  "<<evaluateDegree(courses_marks[m+sem_course_no])<<"\t\t  |"<<endl;
  }

  cout<<"|_________________________________________________________________________|\n";
  cout<<"| Level:3\t\t\t\t\t\t\t\t  |\n";
  cout<<"| Semester:1  "<<cal_hours()<<"H  "<<cal_degree(lv2_sem1)<<"% "<<evaluateDegree(cal_degree(lv2_sem1))<<"\t| Semester:2 "<<cal_hours()<<"H  "<<cal_degree(lv3_sem2)<<"%  "<<evaluateDegree(cal_degree(lv3_sem2))<<"\t\t  |\n|_________________________________________________________________________|\n";
   for (int m=17;m <=20;m++)
  {
      cout<<"|Course"<<m <<":\t"<<sem_course_no<<"  "<<courses_marks[m]<<"  "<< evaluateDegree(courses_marks[m])<<"\t|Course"<<m+sem_course_no <<":\t"<<sem_course_no<<"  "<<courses_marks[m+sem_course_no]<<"  "<<evaluateDegree(courses_marks[m+sem_course_no])<<"\t\t  |"<<endl;
  }

  cout<<"|_________________________________________________________________________|\n";

  return 0;
}
