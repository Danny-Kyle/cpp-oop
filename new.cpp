#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void RequestPromotion() = 0;
}

class Employee: AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;
public:
void setName(string name){
    Name = name;
}
string getName() {
    return Name;
}
void setCompany(string company){
    Company = company;
}
string getCompany() {
    return Company;
}
void setAge(int age){
    if (age >= 18)
    Age = age;
}
int getAge() {
    return Age;
}

    void introduction(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void RequestPromotion(){
        if(Age > 30)
            std::cout <<Name<<" got promotion"<<std::endl;
        else
            std::cout <<Name<<" was denied promotion"<<std::endl;
    }
};

class Developer :Employee{
public:
    string FavProgrammingLanguage;
};
int main()
{
    Employee employee1 = Employee("Daniel", "OKCK", 21);
    Employee employee2 = Employee("Lenny", "Crep", 22);

    employee1.RequestPromotion();
    employee1.RequestPromotion();
}