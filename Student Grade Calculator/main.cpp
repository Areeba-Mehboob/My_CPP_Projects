#include <iostream>
#include <string>
using namespace std;

// Define the class "Student"
class Student {
    public:
    // Data members of the class
    string name;
    int age;
    int roll_number;
    double GPA;
    double maths_marks;
    double english_marks;
    double science_marks;

    // Setter for student's name
    void set_name(string n) {
        name = n;
    }

    // Getter for student's name
    string get_name() {
        return name;
    }

    // Setter for student's age
    void set_age(int a) {
        age = a;
    }

    // Getter for student's age
    int get_age() {
        return age;
    }

    // Setter for student's roll number
    void set_roll_number(int rno) {
        roll_number = rno;
    }

    // Getter for student's roll number
    int get_roll_number() {
        return roll_number;
    }

    // Setter for student's GPA
    void set_GPA(double gpa) {
        GPA = gpa;
    }

    // Getter for student's GPA
    double get_GPA() {
        return GPA;
    }

    // Setter for marks in English
    void set_englishmarks(double e) {
        english_marks = e;
    }

    // Setter for marks in Mathematics
    void set_mathsmarks(double m) {
        maths_marks = m;
    }

    // Setter for marks in Science
    void set_sciencemarks(double s) {
        science_marks = s;
    }

    // Getter for marks in English
    double get_englishmarks() {
        return english_marks;
    }

    // Getter for marks in Mathematics
    double get_mathsmarks() {
        return maths_marks;
    }

    // Getter for marks in Science
    double get_sciencemarks() {
        return science_marks;
    }

    // Method to calculate the percentage based on marks of 3 subjects
    double percentage() {
        double percent;
        percent = (maths_marks + english_marks + science_marks) / 3;
        return percent;
    }

    // Method to print a summary of the student's information and performance
    void summary() {
        cout << name << " is a " << age << " years old student. Enrolled with a Roll number: " 
             << roll_number << ". Secured " << maths_marks << ", " << english_marks 
             << " & " << science_marks << " in Maths, English & Science respectively. "
             << "Total calculated percentage is: " << percentage() 
             << ". Final GPA of " << name << " is " << GPA << endl;
    }
};

// Main function to demonstrate the usage of the Student class
int main() {
    // Create two objects of the Student class
    Student student1, student2;

    // Initialize data members of student1
    student1.set_name("Alina");
    student1.set_englishmarks(97);
    student1.set_sciencemarks(99);
    student1.set_mathsmarks(100);
    student1.set_age(24);
    student1.set_roll_number(283746);
    student1.set_GPA(4.00);

    // Call the percentage function for student1
    student1.percentage();
    
    // Print the summary for student1
    student1.summary();

    // Initialize data members of student2
    student2.set_name("Alaison");
    student2.set_englishmarks(47);
    student2.set_sciencemarks(66);
    student2.set_mathsmarks(80);
    student2.set_age(24);
    student2.set_roll_number(102938);
    student2.set_GPA(3.00);

    // Call the percentage function for student2
    student2.percentage();
    
    // Print the summary for student2
    student2.summary();

    return 0;
}
