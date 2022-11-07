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
 * this class represents a Supervisor object
 *
 * @class Supervisor Supervisor.h "doxygen/Supervisor.h"
 * @brief has methods to store values for various Supervisor attributes
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * prints the values stored in the Supervisor object
 *
 * @pre there must be a Supervisor object declared
 * @return void this function returns nothing
 * @post the Supervisor values have been printed
 * 
 */
  void print();

/**
 * calculates the pay for a Supervisor
 *
 * @pre there must be a supervisor object declared
 * @return double returns the value of the payment
 * @post the payment has been calculated and returned
 * 
 */
  double calculatePay();

/**
 * constructor for the Supervisor class
 *
 * @pre the Supervisor object must be declared
 * @post the Supervisor object has been constructed
 * 
 */
  Supervisor();

/**
 * parameterized constructor for a Supervisor object
 *
 * @param int ID ID number
 * @param int years years worked
 * @param double hourlyRate pay by hour
 * @param float hoursWorked number of hours worked
 * @param int numSupervised number of people supervised by the supervisor
 * @pre there must be a Supervisor object declared
 * @post a Supervisor object with the specified parameters has been created
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
