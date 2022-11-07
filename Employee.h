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
 * this class creates an Employee object along with several values 
 * relating to employees
 *
 * @class Employee Employee.h "doxygen/Employee.h"
 * @brief this is an Employee object class
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
 * prints the values associated with the Employee object
 *
 * @pre there must be an Employee object to print values from
 * @return void this method returns nothing
 * @post the values in the Employee object have been printed
 * 
 */
  virtual void print();
  

/**
 * this method calculates the pay for an employee
 *
 * @pre an Employee object must be declared
 * @return double this method returns a double amount for payment
 * @post the pay for the employee has been calculated
 * 
 */
  virtual double calculatePay();

/**
 * This function prints the ID for an employee along with their years worked. 
 * It also increases the year value by one and changes the hourlyRate.  
 *
 * @pre an Employee object must be declared by the user
 * @return void this function returns nothing
 * @post information for the Employee and their years worked has been printed
 * 
 */
  void anniversary();

/**
 * this is the constructor for the Employee class
 *
 * @pre an Employee object must be declared
 * @post an Employee object has been created
 * 
 */
  Employee();

/**
 * this is a parameterized constructor for an Employee object
 *
 * @param int ID ID for employee
 * @param int years years worked
 * @param double hourlyRate payment per hour
 * @param float hoursWorked number of hours worked
 * @pre a valid Employee object with valid parameters must be declared
 * @post the Employee object has been constructed
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
