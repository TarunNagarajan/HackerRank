#include <bits/stdc++.h>

/*
HackerLand University rounds student grades based on these rules:

* Grades are 0-100, failing is below 40.
* Round up to the next multiple of 5 if the difference is less than 3.
* Don't round if the grade is below 38 (still fails).

**Examples:**

* 84 rounds to 85
* 29 stays at 29
* 57 stays at 57

**Task:**

Write a `gradingStudents` function that takes an array of grades and returns an array of the rounded grades.

**Input:**

* `n`: number of students
* `grades`: array of student grades

**Output:**

* array of rounded grades

**Constraints:**

* 1 <= n <= 60
* 0 <= grades[i] < 100
*/

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    for (size_t i = 0; i < grades.size(); i++) {
        if (grades[i] >= 38) {
            if ((((grades[i]/5) + 1) * 5) - grades[i] < 3) {
                grades[i] = ((grades[i]/5) + 1) * 5;
            }
        } 
    } return grades;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
