#include <stdio.h>
#include <stdlib.h>

#define MAX 50

// Graph structure using adjacency matrix
int graph[MAX][MAX];
int nodes = 0;

// Function to initialize graph
void initGraph() {
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            graph[i][j] = 0;
        }
    }
}

// CREATE: Add node
void addNode() {
    if(nodes >= MAX) {
        printf("Max nodes reached!\n");
        return;
    }
    nodes++;
    printf("Node %d added\n", nodes - 1);
}

// CREATE: Add edge
void addEdge(int u, int v) {
    if(u >= nodes || v >= nodes) {
        printf("Invalid nodes\n");
        return;
    }
    graph[u][v] = 1;
    graph[v][u] = 1;
    printf("Edge added between %d and %d\n", u, v);
}

// READ: Display graph
void displayGraph() {
    printf("\nAdjacency Matrix:\n");
    for(int i = 0; i < nodes; i++) {
        for(int j = 0; j < nodes; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

// UPDATE: Modify edge
void updateEdge(int u, int v, int value) {
    if(u >= nodes || v >= nodes) {
        printf("Invalid nodes\n");
        return;
    }
    graph[u][v] = value;
    graph[v][u] = value;
    printf("Edge updated between %d and %d\n", u, v);
}

// DELETE: Remove edge
void deleteEdge(int u, int v) {
    if(u >= nodes || v >= nodes) {
        printf("Invalid nodes\n");
        return;
    }
    graph[u][v] = 0;
    graph[v][u] = 0;
    printf("Edge removed between %d and %d\n", u, v);
}

// DELETE: Remove node
void deleteNode(int node) {
    if(node >= nodes) {
        printf("Invalid node\n");
        return;
    }

    for(int i = 0; i < nodes; i++) {
        graph[node][i] = 0;
        graph[i][node] = 0;
    }

    printf("Node %d removed (edges cleared)\n", node);
}

// DFS Traversal
int visitedDFS[MAX];

void DFS(int start) {
    printf("%d ", start);
    visitedDFS[start] = 1;

    for(int i = 0; i < nodes; i++) {
        if(graph[start][i] && !visitedDFS[i]) {
            DFS(i);
        }
    }
}

// BFS Traversal
void BFS(int start) {
    int queue[MAX];
    int visited[MAX] = {0};
    int front = 0, rear = 0;

    queue[rear++] = start;
    visited[start] = 1;

    while(front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        for(int i = 0; i < nodes; i++) {
            if(graph[current][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

// Maze-style display (simple visualization)
void displayMaze() {
    printf("\nMaze View (connections):\n");
    for(int i = 0; i < nodes; i++) {
        printf("Node %d -> ", i);
        for(int j = 0; j < nodes; j++) {
            if(graph[i][j]) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

// Menu
void menu() {
    printf("\n===== Maze Graph Editor =====\n");
    printf("1. Add Node\n");
    printf("2. Add Edge\n");
    printf("3. Display Graph\n");
    printf("4. Update Edge\n");
    printf("5. Delete Edge\n");
    printf("6. Delete Node\n");
    printf("7. DFS Traversal\n");
    printf("8. BFS Traversal\n");
    printf("9. Display Maze\n");
    printf("0. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int choice, u, v, val, start;

    initGraph();

    while(1) {
        menu();
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addNode();
                break;

            case 2:
                printf("Enter two nodes: ");
                scanf("%d %d", &u, &v);
                addEdge(u, v);
                break;

            case 3:
                displayGraph();
                break;

            case 4:
                printf("Enter nodes and value (0/1): ");
                scanf("%d %d %d", &u, &v, &val);
                updateEdge(u, v, val);
                break;

            case 5:
                printf("Enter nodes: ");
                scanf("%d %d", &u, &v);
                deleteEdge(u, v);
                break;

            case 6:
                printf("Enter node: ");
                scanf("%d", &u);
                deleteNode(u);
                break;

            case 7:
                printf("Enter start node: ");
                scanf("%d", &start);

                for(int i = 0; i < MAX; i++)
                    visitedDFS[i] = 0;

                printf("DFS: ");
                DFS(start);
                printf("\n");
                break;

            case 8:
                printf("Enter start node: ");
                scanf("%d", &start);
                printf("BFS: ");
                BFS(start);
                printf("\n");
                break;

            case 9:
                displayMaze();
                break;

            case 0:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
