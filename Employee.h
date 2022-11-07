/**
 * @file Employee.h
 * @author Connor Walsh
 * @date 2022-11-03
 * @brief Employee header file
 *
 * This header file contains the definition of the Employee class.
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * This class creates an Employee object along with several values 
 * relating to employees.
 *
 * @class Employee Employee.h "doxygen/Employee.h"
 * @brief This is an Employee object class.
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * This method prints the values associated with the Employee object.
 *
 * @pre There must be an Employee object to print values from.
 * @return void This method returns nothing.
 * @post The values in the Employee object have been printed.
 * 
 */
  virtual void print();
  

/**
 * This method calculates the pay for an employee.
 *
 * @pre An Employee object must be declared before use. 
 * @return double This method returns a double amount for payment.
 * @post The pay for the employee has been calculated.
 * 
 */
  virtual double calculatePay();

/**
 * This function prints the ID for an employee along with their years worked. 
 * It also increases the year value by one and changes the hourlyRate.  
 *
 * @pre An Employee object must be declared by the user.
 * @return void This function returns nothing.
 * @post Information for the Employee and their years worked has been printed.
 * 
 */
  void anniversary();

/**
 * This is the constructor for the Employee class.
 *
 * @pre An Employee object must be declared.
 * @post An Employee object has been created.
 * 
 */
  Employee();

/**
 * This is a parameterized constructor for an Employee object.
 *
 * @param int ID This is the ID for an employee.
 * @param int years Number of years worked for an employee. 
 * @param double hourlyRate Payment per hour for an employee. 
 * @param float hoursWorked Number of hours worked for an Employee. 
 * @pre A valid Employee object with valid parameters must be declared.
 * @post The Employee object has been constructed.
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
