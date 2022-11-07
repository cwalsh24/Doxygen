/**
 * @file Officer.h
 * @author Connor Walsh
 * @date 2022-11-03
 * @brief header file for the officer class
 * 
 * this file is the definition for the officer class   
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * This class creates and then stores various information inside of an Officer object
 *
 * @class Officer Officer.h "doxygen/Officer.h"
 * @brief class for an Officer object
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * prints the officer object information
 *
 * @pre there must be an officer object declared
 * @return void this method returns nothing
 * @post the officer information has been printed
 * 
 */
  void print();
  double calculatePay();

/**
 * constructor for the officer class
 *
 * @pre an officer object must be declared
 * @post an officer object has been constructed
 * 
 */
  Officer();

/**
 * This is a parameterized constructor
 *
 * @param int ID ID number for the person
 * @param int years years worked at the company
 * @param double hourlyRate amount of pay per hour
 * @param float hoursWorked number of hours worked
 * @param double evilness evil value
 * @pre there must be an Officer object declared
 * @post an Officer object with the specified parameters has been created
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
