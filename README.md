# 📅 Date & Period Libraries (C++ OOP)

A reusable **C++ Date and Time Utility Library** built using **Object-Oriented Programming (OOP)** principles.

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
* [Future Improvements](#-future-improvements)
* [Learning Source](#-learning-source)

---

## 🚀 Project Overview

Working with **dates and time calculations** is a common requirement in many applications.

Instead of rewriting date-related functions repeatedly, this project organizes a large set of **date algorithms** into a reusable **C++ class library**.

The project demonstrates how **algorithmic solutions can evolve into structured OOP libraries** that improve:
* **Code Organization:** Logical separation of concerns between dates and periods.
* **Reusability:** Write once, use across multiple projects.
* **Maintainability:** Clear structural encapsulation makes debugging and updating effortless.
* **Scalability:** Easy to extend with new calendar features without breaking existing code.

---

## ✨ Features

### 📅 Date Operations (`clsDate`)
The **`clsDate`** class provides comprehensive utilities for handling dates:

#### 1. Basic Date Utilities
* Get current system date and time automatically.
* Convert date objects from and to standardized strings.
* Validate any custom date input to prevent corrupt data entry.
* Determine and check leap years via standard astronomical matrices.

#### 2. Date Calculations
* Add or subtract major time steps seamlessly: **Days, Weeks, Months, Years, Decades, Centuries, and Millennia**.

#### 3. Date Analysis
* Calculate the absolute difference between two given dates in days.
* Calculate exact personal age measured in total days.
* Retrieve the dynamic number of days in any specific month or year.
* Count and determine business working days versus weekend cycles.

#### 4. Calendar Functions
* Print beautifully aligned **monthly calendars** directly to the console.
* Print fully structured **yearly calendars**.

#### 5. Date Comparisons
* Check if a specific date is before another target date.
* Check if two dates are completely equal.
* Check if a specific date is after another target date.

### ⏳ Period Operations (`clsPeriod`)
The **`clsPeriod`** class handles advanced operations between two boundary dates representing a distinct **time period**:
* Check if two independent time periods **overlap** with each other.
* Calculate the absolute **period length** in days.
* Check if a specific **date falls within a given period**.
* Count the exact number of **overlapping days** shared between two periods.

---

## 🧠 Concepts Applied

This project demonstrates multiple foundational and advanced programming concepts:
* **Object-Oriented Programming (OOP):** Implementing domain models using modular classes.
* **Encapsulation:** Hiding raw calendar algorithms behind clean, safe interfaces.
* **Static Methods:** Providing standalone utility functions that don't require class instantiation.
* **Function Overloading:** Enabling methods to accept strings, parameter lists, or structures interchangeably.
* **Algorithm Design:** Implementing complex logical checks for multi-tier calendar computations.
* **Clean Code Practices:** Utilizing expressive naming conventions and modular structures.

---

## 📂 Project Structure

```text
Project-9-Date-Period-Libraries-OOP
│
├── clsDate.h        # Date utility class containing all calendar algorithms
├── clsPeriod.h      # Period utility class for handling date range boundaries
├── clsString.h      # Helper string library for parsing and string tokenization
└── main.cpp         # Complete test suite showcasing the utility of both libraries
