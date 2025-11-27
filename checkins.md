## Week 1 Summary (09/29/2025)

### This week I worked on:

This week I worked on creating a schedule for which tasks I plan to accomplish each week this semester. The goal of having this plan is to help me stay on schedule for the tasks I plan to accomplish each week. I also created my empty project in Unreal Engine and imported several large asset packs that I can use to begin creating the first environment for my game. Creating the environment for the first few quests in my game is my main objective for weeks 2 and 3.  

### This week I learned:

This week, most of my work involved processes I am already familiar with. I did change a few graphical settings in Unreal when setting up my project that were new to me. These changed were to lower the graphical quality and lighting presets so my PC doesn't sound like a steam engine each time I go to open my project.

### My successes this week were:

This week, I managed to find a few more assets to use for my first environment that I planned. Finding optimized game assets for free can be challenging, so I am pleased with my progress there.

### The challenges I faced this week were:

I have been struggling to estimate how long tasks will take me, which makes it difficult to create my weekly sprints. I am also trying to write quests for the gameplay, which has been more challenging than I realized it would be. It is one thing to write a plot, but if it's boring, it defeats the entire purpose. 

---

## Week 2 Summary (10/06/2025)
### This week I worked on:

This week I added some selected assets to my project and started working on a custom character controller script for my player character. I did not accomplish as much as I would have liked since I have been busy and it took several hours to get my environment setup done. 

### This week I learned:

This week I learned some of the syntax specific to Unreal Engine while working on my new C++ scripts. I also experimented a bit with making modifications in the code vs the engine's built in blueprints. 

### My successes this week were:

I managed to get Visual Studio connected to Unreal. It was more difficult than I expected and required me to install several plugins. I also have my project backing up on Onedrive now.

### The challenges I faced this week were:

I struggled with setting up my Github Repo for my project since Github has a max free storage amount way less than the size of the template files for one project in Unreal (roughly 5GB). For now, I decided to just copy over my unique .h and .cpp files to my repo and keep it in a separate location on my PC. 

---

## Week 3 Summary (10/13/2025)
### This week I worked on:

This week I began to build the preliminary architecture for my Player Stats. I built a general HP script that will serve as the parent class later to the Player HP script and all the enemy Stat scripts. 

### This week I learned:

This week I learned the basics of the built-in UI editor in Unreal and how to visually display information from scripts on the UI, such as player stats. I also started a custom 3rd person camera script. 

### My successes this week were:

I found several really good tutorial playlists on YouTube that I should be able to utilize for the next few weeks of work I have planned. These tutorials also appear to use better practices than others I found. 

### The challenges I faced this week were:

Most of my challenges this week were non-technical and more about time-management. I did not accomplish as much I would have liked due to heavy workloads in my other classes. 

---

## Week 4 Summary (10/20/2025)
### This week I worked on:

This week I worked on the movement system for my player character in my game. I added an asset I bought a while back as the first playable character form the user will have in the game. I also changed the default collider to fit the non-humanoid shape of the playable character. 

### This week I learned:

This week I learned the basics of Unreal Engine's new input system, which was strikingly similar to Unity's modern input system. It made programmable action events very easy to assign to input options and types. One thing I found interesting is that 3D models and the camera operate on different planes in Unreal. Put simply, the X and Y axis for each is flipped so you have to convert the axis when working with both. This conversion was necessary for me to make the camera follow the direction the player model is facing in the game. 

### My successes this week were:

My main success this week was getting the player character to move in four directions, jump, and run with keyboard or gamepad controls. 

### The challenges I faced this week were:

My primary challenges this week had to do with adapting to Visual Studio instead of Rider. After graduation, I don't want to pay for an IDE so I want to get better with VS. That said, even the basic stuff I was doing this week threw strange erros sometimes that would resolve by closing and restarting. If those types of issues persist, I may switch back to avoid wasting time. I lost at least 45 minutes this week just navigating IDE issues, unfortunately. 

---

## Week 5 Summary (10/27/2025)
### This week I worked on:

This week I worked a bit more on the player input controls. I also configured more of the animations for the starting player character. 

### This week I learned:

This week I learned a bit more about Unreal Engine's animation system and their animation transition tree. 

### My successes this week were:

Honestly, working on my project at all given how busy I was with other classes. 

### The challenges I faced this week were:

I struggled to manage my time well last week and did not make nearly as much progress as I had hoped. Next week will also be a challenge in this regard, so I will need to block off time on my calendar specifically for this project. 

---

## Week 6 Summary (11/3/2025)
### This week I worked on:

This week I shifted back toward working on the environment. My work mostly involved aligning modular assets on the world grid. 

### This week I learned:

Nothing I worked on this week was new to me, but the practice I did in level design and assembly helepd me become faster at aligning assets correctly so the 3D shapes don't overlap.

### My successes this week were:

I now have a functional space for the first few player objectives in my game's story. This will make it signifcantly easier for me to implement the gameplay scripts and objects for the first few objectives of the game. 

### The challenges I faced this week were:

By far the most difficult aspect of level design using modular assets is avoiding overlap of the edges of 3D objects. I can usually make this process more straightforward by adjusitng the assets to have more "round number" dimensions so I can adjust their positions numerically. For example, it's significantly easier to move a floor tile to x = 1 than x = 0.89967. High significant figures are a nightmare to work with for object dimensions and positions.  

---

## Week 7 Summary (11/10/2025)
### This week I worked on:

This week I continued working on the locomotion script for my player character. I added directional motion for mouse/keyboard controls and gamepad controls. 

### This week I learned:

This week I learned about some of Unreal's built in math functions, which are actually different than the math library in C++. You can technically use either, but best practices for Unreal often involve using the engine's math structures. 

### My successes this week were:

I made a bit of progress this week at all, which is a win for me at this time. 

### The challenges I faced this week were:

This week I began to think about how the velocity vectors responsible for my player character's motion and jumping may need to be modified once the player's model changes. I am still trying to determine how to best architecture this and weighing between possible code duplication or simplicity. 

---

## Week 8 Summary (11/17/2025)
### This week I worked on:

This week I did not have time to work on much. I worked a bit on my schematics for the UI I will continue working on, bit did not more any new code changes this week due to time constraints. 

### This week I learned:

This week I did not work on anything new to me. I did do some research on what other games have done for their gameplay focused UIs to get some inspiration. 

### My successes this week were:

I added several draft images to my schematic document to serve as guides for what my remaining UIs will look like. 

### The challenges I faced this week were:

Mostly time constraints. This week will also be difficult since I have two exams Friday and my biology thesis due Friday, I plan to accomplish a lot over Thanksgiving break. 

---

## Week 9 Summary (MM/DD/YYYY)
### This week I worked on:

[Your answer here]

### This week I learned:

[Your answer here]

### My successes this week were:

[Your answer here]

### The challenges I faced this week were:

[Your answer here]

---

## Week 10 Summary (MM/DD/YYYY)
### This week I worked on:

[Your answer here]

### This week I learned:

[Your answer here]

### My successes this week were:

[Your answer here]

### The challenges I faced this week were:

[Your answer here]

---

## Week 11 Summary (MM/DD/YYYY)
### This week I worked on:

[Your answer here]

### This week I learned:

[Your answer here]

### My successes this week were:

[Your answer here]

### The challenges I faced this week were:

[Your answer here]

---

## Week 12 Summary (MM/DD/YYYY)
### This week I worked on:

[Your answer here]

### This week I learned:

[Your answer here]

### My successes this week were:

[Your answer here]

### The challenges I faced this week were:

[Your answer here]

---

## Week 13 Summary (MM/DD/YYYY)
### This week I worked on:

[Your answer here]

### This week I learned:

[Your answer here]

### My successes this week were:

[Your answer here]

### The challenges I faced this week were:

[Your answer here]

---
