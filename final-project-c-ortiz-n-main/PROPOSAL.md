For my final proposal I want to create a 2-player soccer game.<br>
My game will have two players (which will be represented by circles) that can move with different keys. <br> 
Player one will move with W, A, S, and D and player two will move with the up, down, left, and right arrow 
keys. The goal of the game is for both players to score a goal with a ball by using these keys, the player
who reaches a specific amount of goals or who has the greatest amount of goals by the end of the game wins, 
if both players have the same amount of goals by the end of the match then they have tied the game and will 
need to play until a goal is scored. The first player who scores this goal wins (this will be known as Golden Goal).

This project will consist of a physics class, a player class, a ball class, and a map class. <br>
The physics class will have the code for the ball collisions with the players and the walls as well as the changes
of the ball's velocity when it collides with the different surfaces. 
The player class will store a player's size, color, velocity, and current state.
The player state means that the player will be able to have different power-ups, such as making the ball go faster
upon collision, increasing the player's size, and also slowing down the opposing player, while also having a default 
state, which is predetermined. The power ups will not last for the rest of the game as they will all have a time limit. 
The ball class will simply store the size of the ball as well as its velocity which will change according to the state
of the player. 
The map class will create the container as well as draw out the labels for the scores of each player and display a sign
that displays the time left.

For the first week I plan on creating the map, allowing the players to move, and implementing the ball collision. 
For week two, I plan on incorporating the different player power ups as well as creating the time and the time displays.
For week three, I am planning on creating different game modes that players can choose, such as playing golden goal, or 
a number of other game modes that combine the player states. 
If I have end up having time I will include audio, as well as special skins for the players that they can choose. 