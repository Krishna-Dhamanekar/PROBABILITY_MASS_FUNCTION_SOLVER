# Probability Mass Function (PMF) Solver in C

This C program computes and analyzes **discrete probability distributions**.  
It calculates the **normalizing constant (k)**, **mean**, **variance**, **standard deviation**, and allows interactive calculation of **various probabilities**.

---

## Features

- Works with **any discrete probability distribution**.
- Calculates **k**, **mean**, **variance**, and **standard deviation**.
- Interactive probability calculations:
  - P(X ≤ a)
  - P(X ≥ b)
  - P(X < a)
  - P(X > b)
  - P(c ≤ X ≤ d)
  - P(c < X < d)
  - P(a < X ≤ b)
  - P(a ≤ X < b)
- Supports different types of distributions:
  - Uniform
  - Binomial
  - Custom
- Displays a clear **probability table**.

---

## Program Workflow

Start Program
|
v
Enter number of values (X)
|
v
Enter values of X
|
v
Enter coefficients of k
|
v
Calculate k, Mean, Variance, SD
|
v
Display Probability Table
|
v
Interactive Probability Menu
|
v
Exit Program


## Future Improvements

- Add CDF calculations and plots.
- Extend to continuous distributions.
- Save probability tables to CSV/Excel.
- Improve input validation.
- Add batch probability queries.
- Include GUI for easier interaction.
- Support different types of question patterns and distributions for more flexible probability calculations.

## How to Run

1. Clone the repository
      git clone https://github.com/your-username/your-repo.git


2. Navigate to the project folder
       cd your-repo


3. Compile the C program
      gcc pmf_solver.c -o pmf_solver -lm


4. Run the program
      ./pmf_solver


## Author
 
 Krishna B Dhamanekar

