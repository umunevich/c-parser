# C Parser

This project is a syntax analyzer for the C programming language, implemented in C using Lex/Yacc (Flex/Bison).  
It performs code analysis.
---

## How to Run

1. **Build the project:**
```
make
```

2. **Run the project:**
```
./parser < TestFiles/test1.c
```

3. **Run the python server to see AST:**
```
python3 -m http.server 8000  
```
(Ctrl+C to stop)

4. **Go to:**

[http://127.0.0.1:8000/tree.html](http://127.0.0.1:8000/tree.html)

Now you can see parse tree.

6. **Clean the project (if needed):**
```
make clean
```

