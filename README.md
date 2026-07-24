# 🎬 Movie Ticket Booking System

A modular, console-based **Movie Ticket Booking System** written in C. Developed as a collaborative multi-member group project utilizing Git branches and modular software design principles.

---

## 👥 Group Project Division & File Mapping

| Member | Assigned Files | Core Responsibilities |
| :--- | :--- | :--- |
| **Member 1** | `main.c` | Program entry point, main menu loop, and user choice routing (1–7). |
| **Member 2** | `display.h`, `display.c` | System initialization, movie/showtime setups, displaying showtimes, and rendering the interactive seat map. |
| **Member 3** | `reservation.h`, `reservation.c` | Multi-seat booking workflow, seat availability verification, tier pricing, and discount applications. |
| **Member 4** | `management.h`, `management.c` | Booking cancellation workflow, ticket count/revenue adjustments, and searching by customer name or seat. |
| **Member 5** | `reports.h`, `reports.c` | Grand total revenue reports, input validation helpers (`getValidatedInt`), buffer clearing, and screen pauses. |

---

## 🏗️ System Architecture & File Flow

The application is broken down into independent modules that link directly back to the core execution engine:

```text
                        ┌────────────────────────┐
                        │        main.c          │ ◄─── (Member 1)
                        │  (Program Entry Point) │
                        └───────────┬────────────┘
         ┌──────────────────────────┼──────────────────────────┐
         ▼                          ▼                          ▼
┌──────────────────┐       ┌──────────────────┐       ┌──────────────────┐
│    display.c     │       │  reservation.c   │       │  management.c    │
│    (Member 2)    │       │    (Member 3)    │       │    (Member 4)    │
└──────────────────┘       └──────────────────┘       └──────────────────┘
         │                          │                          │
         └──────────────────────────┼──────────────────────────┘
                                    ▼
                           ┌──────────────────┐
                           │    reports.c     │ ◄─── (Member 5 - Utility & Reports)
                           └──────────────────┘

```
---

## 👩‍🏫 Instructions for Evaluation & Compilation
Because this project is built using a modular multi-file C architecture, individual files cannot run independently. All source files must be compiled together so the compiler can link the header files (.h) and function implementations (.c) correctly.

Evaluators/Instructors can compile and run the system using either of the two methods below:

### Method 1: Using GitHub Codespaces (Cloud / Online IDE)
**— Recommended** *(Since the project was developed and tested in this environment)*

You can compile and test the project directly in your browser without installing anything locally:

1. Navigate to the main page of this repository.
2. Click the green **Code** button.
3. Select the **Codespaces** tab and click **Create codespace on main**.
4. Once the cloud-based VS Code editor loads, open the integrated terminal and paste the following compilation command:

```bash
gcc main.c display.c reservation.c management.c reports.c -o movie_system
```

  Run the compiled executable by typing:
   ```text
   ./movie_system
```

### Method 2: Local Compilation via Terminal / Command Prompt
If you prefer running it locally on your machine (ensure you have a C compiler like GCC installed):

1. Clone or download this repository into a single local folder.
2. Open your terminal or command prompt inside that folder.
3. Compile all files together using GCC:

```bash
gcc main.c display.c reservation.c management.c reports.c -o movie_system
```

  Run the executable based on your operating system:
    Windows:
```text
      movie_system.exe
