# EMPLOYEE MANAGEMENT

This project is a simple employee management system in C++, allowing for registration, display, salary increase, average salary calculation, and listing of employees with salaries above a specified value.

## Features

1. **Register Employee**: Adds a new employee to the system, requesting information such as ID, name, salary, and age.
2. **Display Employees**: Lists all registered employees with their respective information.
3. **Increase Salary**: Allows increasing an employee's salary by providing their ID and the increment amount.
4. **Display Employees with Salary Above a Certain Value**: Shows employees with salaries higher than a user-specified value.
5. **Calculate Average Salary**: Calculates and displays the average salary of all registered employees.

## Data Structure

The system uses a `struct` called `Funcionario` to store the following information:
- **id**: Unique identifier for the employee (integer).
- **nome**: Employee's name (string up to 50 characters).
- **salario**: Employee's salary (float).
- **idade**: Employee's age (integer).

## Limitations

- The system supports up to **100 employees**.
- Employee names are limited to **50 characters**.
