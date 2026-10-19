# 🏨 Hotel Management System in C++

A **console-based Hotel Management System** developed using C++ that helps manage hotel room availability, food inventory, customer orders, and daily sales collection. The project demonstrates the practical application of fundamental C++ programming concepts, including conditional statements, switch-case, loops, variables, and arithmetic operations.

## 📌 Project Overview

The Hotel Management System allows hotel owners or staff to enter the available quantities of rooms and food items, process customer requests, track sales, and view a summary of the hotel's daily revenue through an interactive menu-driven interface.

This project was developed as a beginner-friendly C++ application to strengthen problem-solving skills and understand how programming concepts can be used to build a practical management system.

## ✨ Features

- **Room Management:** Track available rooms and allocate rooms based on availability.
- **Food Inventory Management:** Manage quantities of pasta, burgers, shakes, sandwiches, and pizzas.
- **Order Processing:** Accept customer requests and check whether sufficient stock is available.
- **Automatic Billing:** Calculate the total collection for each item based on its quantity and predefined price.
- **Inventory Tracking:** Maintain records of sold quantities and remaining stock.
- **Sales Reports:** Display daily sales, item-wise revenue, remaining inventory, and total hotel collection.
- **Interactive Menu:** Navigate through different operations using a simple menu-driven interface.
- **Stock Validation:** Prevent orders from exceeding the available inventory.

## 🍽️ Menu and Pricing

| Item | Price per Unit |
|---|---:|
| Hotel Room | ₹1,200 |
| Pasta | ₹120 |
| Burger | ₹80 |
| Shake | ₹70 |
| Sandwich | ₹110 |
| Pizza | ₹180 |

*Prices are predefined in the program and can be modified according to requirements.*

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Compiler:** GCC / G++
- **Interface:** Command-Line Interface (CLI)
- **Development Concepts:** Variables, data types, input/output operations, switch-case statements, conditional logic, loops, arithmetic operations, and inventory management.

## ⚙️ How to Run the Project

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/Hotel-Management-System.git
```

### 2. Navigate to the project directory

```bash
cd Hotel-Management-System
```

### 3. Compile the source code

Save the C++ program as `hotel_management.cpp`, then run:

```bash
g++ hotel_management.cpp -o hotel_management
```

### 4. Execute the program

On Windows:

```bash
hotel_management.exe
```

On Linux or macOS:

```bash
./hotel_management
```

**Prerequisite:** Install a compatible C++ compiler, such as GCC/G++, before running the program.

## 🚀 How It Works

1. The program asks the hotel owner to enter the initial quantities of rooms and food items.
2. The interactive menu displays eight options for room management, food orders, sales reports, and exit.
3. The user selects an option and enters the required quantity.
4. The system checks stock availability before processing the request.
5. If sufficient stock is available, the program updates the sales quantity and calculates the collection.
6. The sales report displays the initial inventory, sold quantities, remaining stock, and total revenue.
7. The user can continue using the menu until choosing the exit option.

## 📚 Key Learning Outcomes

Through this project, I explored:

- Applying fundamental C++ concepts to a real-world-inspired problem.
- Implementing menu-driven programs using `switch-case`.
- Using conditional statements to validate inventory availability.
- Performing calculations for item-wise and overall revenue.
- Tracking inventory and sales using variables.
- Understanding program flow and repeated user interaction.
- Organizing business logic into clear, understandable operations.

## 🔮 Future Improvements

Potential enhancements for future versions include:

- Replacing `goto` with structured loops for better readability.
- Using functions to separate inventory, billing, and reporting logic.
- Implementing object-oriented programming with classes and objects.
- Adding customer billing receipts and order summaries.
- Introducing file handling or a database for persistent storage.
- Adding input validation and error handling.
- Developing a graphical user interface (GUI).
- Generating detailed sales reports and transaction histories.

## 👨‍💻 About This Project

This project is part of my journey toward improving my C++ programming, logical thinking, and software development skills. It serves as a foundation for exploring more advanced concepts such as object-oriented programming, data structures, file handling, and database integration.

**If you find this project useful, feel free to star the repository! ⭐**

---

### 🏷️ Tags

`C++` `Hotel Management System` `Inventory Management` `Console Application` `Programming Fundamentals` `Beginner Project` `Software Development` `Learning by Building`
