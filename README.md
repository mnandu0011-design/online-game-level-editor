Maze Graph Level Editor
## 📌 Project Title

Maze Level Editor using Graph Data Structure (DSA in C)

## 👥 Team Members

JESWITH VENKATA SAI.P (CDS/2025/1819)

LAKSHMAN.M (CDS/2025/1787)

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



