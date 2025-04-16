#include <iostream>
class Person
    {
        protected :
            string Name;
            int Age;
        public :
            string GetName()
                return Name;
            int GetAge()
                return Age;
    }
    
    class Student : private Person
    {
        private : 
            double Avg;
        public :
            double GetAvg()
                 return Avg;
            string GetStudentName()
                return Name;
    }          
    
    class Teacher : public Person
    {
        private :
            double Salary;
        public :
            double GetSalary()
                return Salary:
    }
int main()
{  
    Person p; 
    p.GetName(); //correct
    p.GetAge(); //correct
    p.Name; //incorrect
    p.Age; //incorrect
    
    Student s; 
    s.GetName(); //correct
    s.GetAge(); //correct
    s.Avg; //incorrect
    s.GetAvg(); //correct
    s.GetStudentName(); //correct
    
    Teacher t;
    t.GetName(); //correct
    t.GetAge(); //correct
    t.GetSalary(); //correct
    t.Salary; //incorrect