Maze Graph Level Editor
## 📌 Project Title

Maze Level Editor using Graph Data Structure (DSA in C)

## 👥 Team Members

M.Shiva Nandheswara Reddy(CDS/2025/1801)

J.Kalyan ram(CDS/2025/1800)

## ❗ Problem Statement

To develop a maze-based game level editor that models paths and rooms using a graph data structure and allows dynamic creation and management of maze levels 

through CRUD operations (Create, Read, Update, Delete) using a menu-driven C program.

## 🧠 Data Structure Used

Graph (Adjacency List Representation)

Nodes represent rooms/points in the maze

Edges represent paths between rooms

Linked List

Used to store adjacency lists

Dynamic Memory Allocation

malloc() and free() used for memory handling

## ⚙️ Algorithm Explanation

### 1. Graph Representation

The maze is represented using an adjacency list

Each room maintains a list of connected rooms (paths)

### 2. CRUD Operations

Create (Add Node/Edge)

Add a new room or create a path between two rooms

Read (Display Maze)

Display all rooms and their connected paths

Update

Modify an existing room or path connection

Delete

Remove a room or path from the maze

### 3. Search Operation

Traverse adjacency list to find a specific room in the maze

### 4. Working Principle

User selects an option from the menu

System performs the requested graph operation

Changes are updated dynamically in the maze structure

## ▶️ Compilation Instructions

Using GCC Compiler:

Bash

gcc maze.c -o maze

./maze

📊 Sample Output
<img width="487" height="307" alt="image" src="https://github.com/user-attachments/assets/5e91ea63-d4e3-4361-8514-e677f0cd4466" />
<img width="588" height="333" alt="image" src="https://github.com/user-attachments/assets/e6901db8-4aeb-4bc9-8707-0d15d9b78a1f" />
<img width="650" height="362" alt="image" src="https://github.com/user-attachments/assets/84531a6d-fbe7-45f5-bb75-be5b33b149d8" />
<img width="446" height="344" alt="image" src="https://github.com/user-attachments/assets/c4a095f2-599a-4c7d-bc8d-7160eb186087" />
<img width="448" height="360" alt="image" src="https://github.com/user-attachments/assets/4d95957d-b390-4cf7-af17-028c697725cd" />



