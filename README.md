🎮 Maze Graph Level Editor
📌 Project Title
Maze Level Editor using Graph Data Structure (DSA in C)
👥 Team Members
SHIVA NANDHESWARA REDDY(CDS/2025/1801)
J.KALYAN RAM (CDS/2025/1800)
❗ Problem Statement
To develop a maze-based game level editor that models paths and rooms using a graph data structure and allows dynamic creation and management of maze levels through CRUD operations (Create, Read, Update, Delete) using a menu-driven C program.
🧠 Data Structure Used
Graph (Adjacency List Representation)
Nodes represent rooms/points in the maze
Edges represent paths between rooms
Linked List
Used to store adjacency lists
Dynamic Memory Allocation
malloc() and free() used for memory handling
⚙️ Algorithm Explanation
1. Graph Representation
The maze is represented using an adjacency list
Each room maintains a list of connected rooms (paths)
2. CRUD Operations
Create (Add Node/Edge)
Add a new room or create a path between two rooms
Read (Display Maze)
Display all rooms and their connected paths
Update
Modify an existing room or path connection
Delete
Remove a room or path from the maze
3. Search Operation
Traverse adjacency list to find a specific room in the maze
4. Working Principle
User selects an option from the menu
System performs the requested graph operation
Changes are updated dynamically in the maze structure
▶️ Compilation Instructions
Using GCC Compiler:
Bash
gcc maze.c -o maze
./maze
📊 Sample Output

Enter number of rooms: 5

===== Maze Level Editor Menu =====

1. Add Path
2. Delete Path
3. Update Room
4. Search Room
5. Display Maze
6. Exit

Enter your choice: 1
Enter source and destination rooms: 0 1
Path added successfully

Enter your choice: 1
Enter source and destination rooms: 0 2
Path added successfully

Enter your choice: 1
Enter source and destination rooms: 1 3
Path added successfully

Enter your choice: 5

===== Maze Structure =====
Room 0: -> 2 -> 1
Room 1: -> 3
Room 2:
Room 3:
Room 4:

Enter your choice: 4
Enter room to search: 3
Room 3 found connected to Room 1

Enter your choice: 3
Enter old room value and new value: 3 5
Room updated successfully

Enter your choice: 5

===== Maze Structure =====
Room 0: -> 2 -> 1
Room 1: -> 5
Room 2:
Room 3:
Room 4:

Enter your choice: 2
Enter path to delete (room): 2
Path deleted successfully

Enter your choice: 6
Exiting program...
🎥 Demo Video Link
(Replace with your actual demo video link before submission)
