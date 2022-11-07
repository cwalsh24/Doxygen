/**
 * @file Supervisor.h
 * @author Connor Walsh
 * @date 2022-11-03
 * @brief Supervisor header file
 * 
 * This header file contains the definition of the Supervisor class.
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * This class represents a Supervisor object.
 *
 * @class Supervisor Supervisor.h "doxygen/Supervisor.h"
 * @brief This class contains methods to store values for 
 * various Supervisor attributes. 
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * This method prints the values stored in the Supervisor object.
 *
 * @pre There must be a Supervisor object declared.
 * @return void This function returns nothing.
 * @post The Supervisor values have been printed.
 * 
 */
  void print();

/**
 * Calculates the pay for a Supervisor.
 *
 * @pre There must be a supervisor object declared.
 * @return double The method returns the value of the payment as a double.
 * @post The payment has been calculated and returned.
 * 
 */
  double calculatePay();

/**
 * This is the Constructor for the Supervisor class.
 *
 * @pre The Supervisor object must be declared.
 * @post The Supervisor object has been constructed. 
 * 
 */
  Supervisor();

/**
 * This is the parameterized constructor for a Supervisor object.
 *
 * @param int ID ID number for an employee
 * @param int years Employee years worked
 * @param double hourlyRate Employee pay by the hour
 * @param float hoursWorked Number of hours worked by the Employee 
 * @param int numSupervised Number of people supervised by the supervisor
 * @pre There must be a Supervisor object declared.
 * @post A Supervisor object with the specified parameters has been created.
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
