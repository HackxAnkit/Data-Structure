all c++ code file

To create a new repository on GitHub using the terminal, follow these steps:

1. **Create a new repository on GitHub:**
    - Go to [GitHub](https://github.com/) and click "New repository".
    - Fill in the repository name and details, then click "Create repository".
    - Do **not** initialize with a README (if you want to push an existing project).

2. **Initialize your local project:**
    ```bash
    cd /Users/ankitbhandari/Documents/dsa/arrays
    git init
    git add .
    git commit -m "Initial commit"
    ```

3. **Add the remote repository:**
    ```bash
    git remote add origin https://github.com/your-username/your-repo-name.git
    ```

4. **Push your code:**
    ```bash
    git branch -M main
    git push -u origin main
    ```

Replace `your-username` and `your-repo-name` with your actual GitHub username and repository name.