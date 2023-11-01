#include <iostream>
#include <vector>

struct Employee {
    int id;
    int joiningYear;
    double salary;
};

int main() {
    std::vector<Employee> employees;


    for (int i = 0; i < 10; i++) {
        Employee emp;
        std::cout << "Enter Employee ID: ";
        std::cin >> emp.id;
        std::cout << "Enter Joining Year: ";
        std::cin >> emp.joiningYear;
        std::cout << "Enter Salary: ";
        std::cin >> emp.salary;
        employees.push_back(emp);
    }


    std::cout << "Employees who joined before 2009:" << std::endl;
    for (const Employee& emp : employees)
        {
        if (emp.joiningYear < 2009) {
            std::cout << "Employee ID: " << emp.id << std::endl;
        }
    }


    std::cout << "Employees with salary greater than 20,000:" << std::endl;
    for (const Employee& emp : employees)
        {
        if (emp.salary > 20000)

            {
            std::cout << "Employee ID: " << emp.id << std::endl;
        }
    }

    return 0;
}
