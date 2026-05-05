# 🧩 Maze Graph Level Editor in C

A simple **Maze / Graph Level Editor** built in **C language** that demonstrates core **Data Structures concepts** like Graph representation, CRUD operations, and Traversals (DFS & BFS).

---

## 📌 Features

* 🟢 Create Nodes and Edges
* 🔵 Read Graph (Adjacency Matrix Display)
* 🟡 Update Edge Connections
* 🔴 Delete Nodes and Edges
* 🔍 Depth First Search (DFS) Traversal
* 🔎 Breadth First Search (BFS) Traversal
* 🧱 Simple Maze-style Graph Visualization

---

## 🧠 Concepts Used

* Graph Representation using **Adjacency Matrix**
* **CRUD Operations**

  * Create → Add Node, Add Edge
  * Read → Display Graph
  * Update → Modify Edge
  * Delete → Remove Node/Edge
* Graph Traversal Algorithms:

  * DFS (Recursive)
  * BFS (Queue-based)

---

## 📂 Project Structure

```
maze-graph-editor/
│── maze_editor.c
│── README.md
```

---

## ⚙️ How to Compile and Run

### Step 1: Compile

```bash
gcc maze_editor.c -o maze
```

### Step 2: Run

```bash
./maze
```

---

## 🕹️ Menu Options

```
1. Add Node
2. Add Edge
3. Display Graph
4. Update Edge
5. Delete Edge
6. Delete Node
7. DFS Traversal
8. BFS Traversal
9. Display Maze
0. Exit
```

---

## ▶️ Example Usage

```
Add Nodes → 5
Add Edges → (0-1), (1-2), (2-3)

DFS from Node 0:
Output: 0 1 2 3
```

---

## 📸 Sample Output (Maze View)

```
Node 0 -> 1
Node 1 -> 0 2
Node 2 -> 1 3
Node 3 -> 2
```

---

## 🚀 Future Improvements

* Convert into a **2D Grid Maze Game**
* Add **Shortest Path Algorithms (Dijkstra)**
* Add **File Saving/Loading (Persistent Levels)**
* Build a **GUI version (SDL/OpenGL)**

---

## 👨‍💻 Author
MaramReddy Shiva Nandheswara Reddy
j.kalyan ram

---

## 📜 License

This project is open-source and available under the **MIT License**.

---

## ⭐ Contribution

Feel free to fork, improve, and submit pull requests!

---
