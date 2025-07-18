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
    git commit -m 'new file'
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
    ## Pushing Changes to Git

    After making changes to your files, you can push updates to your GitHub repository with these commands:

    ```bash
    git add .
    git commit -m "Describe your changes"
    git push
    ```

    This will stage your changes, commit them with a message, and push them to the remote repository.
Replace `your-username` and `your-repo-name` with your actual GitHub username and repository name.