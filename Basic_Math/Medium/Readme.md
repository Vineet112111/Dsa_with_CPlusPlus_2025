# Reverse Integer

### 📘 Problem Statement
Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the 32-bit range `[-2^31, 2^31 - 1]`, return 0.

---

### 🧠 Approaches

1. **Brute Force** – Convert to string, reverse it, convert back.
2. **Better** – Reverse using long int and check for overflow.
3. **Optimal** – Reverse using only 32-bit and check overflow before multiplication.

---

### 🧮 Time & Space Complexities

| Approach  | Time        | Space     |
|-----------|-------------|-----------|
| Brute     | O(n)        | O(n)      |
| Better    | O(log₁₀x)   | O(1)      |
| Optimal   | O(log₁₀x)   | O(1)      |

---

### 🗂️ Files

- `question.md` → Problem description
- `brute.cpp` → String-based reverse
- `better.cpp` → Long int logic (not safe in strict environments)
- `optimal.cpp` → Fully safe, checks overflow before updating
