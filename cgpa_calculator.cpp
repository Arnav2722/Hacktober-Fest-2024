#include <iostream>
#include <vector> // for multiple enteries
using namespace std;

double calculateCGPA(const vector<double>& grades, const vector<int>& credits) {
    // for calculating the CGPA
    double totalPoints = 0.0;
    int totalCredits = 0;
    for (size_t i = 0; i < grades.size(); ++i) {
        totalPoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }
    if (totalCredits == 0) {
        return 0.0; // To avoid division by zero
    }
    return totalPoints / totalCredits;
}

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<double> grades(numCourses);
    vector<int> credits(numCourses);

    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grades[i];
        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credits[i];
    }
    double cgpa = calculateCGPA(grades, credits);
    cout << "Your CGPA is: " << cgpa << endl;
    return 0;
}
