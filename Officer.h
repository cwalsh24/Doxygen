/**
 * @file Officer.h
 * @author Connor Walsh
 * @date 2022-11-03
 * @brief Header file for the officer class
 * 
 * This file is the definition for the officer class   
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * This class creates and then stores various information 
 * inside of an Officer object
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
 * This method prints the Officer object information.
 *
 * @pre There must be an Officer object declared.
 * @return void This method returns nothing.
 * @post The Officer information has been printed.
 * 
 */
  void print();
  double calculatePay();

/**
 * This is the Constructor for the Officer class.
 *
 * @pre an Officer object must be declared
 * @post an Officer object has been constructed
 * 
 */
  Officer();

/**
 * This is a parameterized constructor.
 *
 * @param int ID ID number for an officer 
 * @param int years Years worked at the company
 * @param double hourlyRate amount of pay per hour
 * @param float hoursWorked number of hours worked
 * @param double evilness evil value
 * @pre There must be an Officer object declared.
 * @post An Officer object with the specified parameters has been created.
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
