# 📅 Date & Period Libraries (C++ OOP)

A reusable **C++ Date and Period Utility Library** built using **Object-Oriented Programming (OOP)** principles.

This project converts previously implemented **date and time algorithms** into reusable libraries by organizing them into two main classes:
* **`clsDate`**
* **`clsPeriod`**

The goal is to design **clean, reusable, and extensible components** that simplify working with dates and periods in C++ applications.

---

## 📑 Table of Contents

* [Project Overview](#-project-overview)
* [Features](#-features)
* [Concepts Applied](#-concepts-applied)
* [Project Structure](#-project-structure)
* [Example Usage](#-example-usage)
* [Example Output](#-example-output)
* [Learning Source](#-learning-source)

---

## 🚀 Project Overview

Working with **dates and time calculations** is a common requirement in many applications.

Instead of rewriting date-related functions repeatedly, this project organizes a large set of **date algorithms** into a reusable **C++ class library**.

The project demonstrates how **algorithmic solutions can evolve into structured OOP libraries** that improve:
* Code organization
* Reusability
* Maintainability
* Scalability

---

## ✨ Features

### 📅 Date Operations (`clsDate`)
The **`clsDate`** class provides many utilities for handling dates:

#### 1. Basic Date Utilities
* Get current system date
* Convert date from/to string
* Validate dates
* Determine leap years

#### 2. Date Calculations
* Add / subtract: **Days, Weeks, Months, Years, Decades, Centuries, and Millennia**

#### 3. Date Analysis
* Calculate difference between two dates
* Calculate age in days
* Get number of days in month/year
* Determine business days vs weekends

#### 4. Calendar Functions
* Print **monthly calendar**
* Print **yearly calendar**

#### 5. Date Comparisons
* Check if a date is before another
* Check if dates are equal
* Check if a date is after another

### ⏳ Period Operations (`clsPeriod`)
The **`clsPeriod`** class handles operations between two dates representing a **time period**:
* Check if two periods **overlap**
* Calculate **period length**
* Check if a **date is within a period**
* Count **overlapping days** between two periods

---

## 🧠 Concepts Applied

This project demonstrates multiple important programming concepts:
* **Object-Oriented Programming (OOP)**
* **Encapsulation**
* **Static Methods**
* **Function Overloading**
* **Algorithm Design**
* **Clean Code Practices**

---

## 📂 Project Structure

```text
Project-9-Date-Period-Libraries-OOP
│
├── clsDate.h        # Date utility class containing all date algorithms
├── clsPeriod.h      # Period utility class for handling date ranges
├── clsString.h      # Helper string library for string tokenization
└── main.cpp         # Demonstration of library usage


