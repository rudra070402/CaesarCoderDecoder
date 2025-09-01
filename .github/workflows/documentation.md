## Problem Understanding
**What the problem is asking:** [Explain in your own words]

**Key concepts involved:** [List the main ideas/algorithms needed]

**My approach:** [High-level strategy you chose]

---

##  Conceptual Learning

### **New Concepts I Discovered**
- **[Concept Name]:** [What it is and why it's useful]
- **[Another Concept]:** [Brief explanation and application]

### **How I Applied These Concepts**
[Explain how you used the concepts to solve the problem]

### **Real-World Connections**
[Where might you see this problem or similar concepts in real applications?]




    # Steps represent a sequence of tasks that will be executed as part of the job
    steps:
      # Checks-out your repository under $GITHUB_WORKSPACE, so your job can access it
      - uses: actions/checkout@v4

      # Runs a single command using the runners shell
      - name: Run a one-line script
        run: echo Hello, world!

      # Runs a set of commands using the runners shell
      - name: Run a multi-line script
        run: |
          echo Add other actions to build,
          echo test, and deploy your project.
