## Problem Understanding
- **What the problem is asking:** The problem asks to encrypt and decrypt texts using the concepts of Caesar Cipher(for Level 1)

- **Key concepts involved:** 1) usage of '%'(modulo)
2) ASCII Table and dealing with characters

- **My approach:** Asked input for text and shift. Then, normalized the shift to be under 26. Then, created conditions for capital and small letters and wrapped the final char around using modulo then printed it. To decode an encrypted text with known shift, the user has to type in negative of the known shift. For example for "Svesb", user types shift '-1', and it prints "Rudra".

---

##  Conceptual Learning

### **New Concepts I Discovered**
- **[getline]:** used for input. termimates at endl instead of whitespace

### **How I Applied These Concepts**
- used getline for text input from user
