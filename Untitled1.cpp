#include <iostream>
using namespace std;

class person {
    protected:
        string name;
        int age;

    public:
        person(string n, int a) : name(n), age(a) {}

        string GetName()
        { return name; }

        int GetAge() 
        { return age; }
};

class student : public person {
    private:
        double Avg;

    public:
        student(string n, int a, double avg) : person(n, a), Avg(avg) {}
        
        string GetStudentName() 
        { return name; }
        
        int GetStudentAge()
        { return age; }

        double GetStudentAvg() 
        { return Avg; }

};

class teacher : public person {
    private:
        double salary;

    public:
        teacher(string n, int a, double s) : person(n, a), salary(s) {}

        
        string GetTeacherName() 
        { return name; }
        
        int GetTeacherAge() 
        { return age; }

        double GetTeacherSalary() 
        { return salary; }
};

// ***********************************

int main() {

    cout << endl;
    
    // ....person....//
    person p("sam", 21);
    cout << "p.GetName(): " << p.GetName() << endl; 
    cout << "p.GetAge(): " << p.GetAge() << endl;

    // cout << "p.name: " << p.name << endl;
    // cout << "p.age: " << p.age << endl;

    cout << endl;

    // ....student....//
    student s("mahi", 17, 16);
    cout << "s.GetStudentName(): " << s.GetStudentName() << endl;
    cout << "s.GetStudentAge(): " << s.GetStudentAge() << endl;
    cout << "s.GetStudentAvg(): " << s.GetStudentAvg() << endl;

    cout << "s.GetName(): " << s.GetName() << endl;
    cout << "s.GetAge(): " << s.GetAge() << endl;
    
    // cout << "s.Avg: " << s.Avg << endl;
    

    cout << endl;

    // ....teacher....//
    teacher t("nima", 42 , 62000);
    cout << "t.GetTeacherName(): " << t.GetTeacherName() << endl;
    cout << "t.GetTeacherAge(): " << t.GetTeacherAge() << endl;
    cout << "t.GetTeacherSalary(): " << t.GetTeacherSalary() << endl;

    cout << "t.GetName(): " << t.GetName() << endl;
    cout << "t.GetAge(): " << t.GetAge() << endl;

    // cout << "t.salary: " << t.salary << endl;

    cout << endl;
    

    return 0;
}