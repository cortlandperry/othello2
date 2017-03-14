//this will have substance soon
ALSO, RUN OUR PLAYER WITH "player"


Describe how and what each group member contributed for the past two 
weeks. If you are solo, these points will be part of the next section.
Document the improvements that your group made to your AI to make it 
tournament-worthy. Explain why you think your strategy(s) will work. 
Feel free to discuss any ideas were tried but didn't work out.


Cortland completed the first 14 points of Assignment 9. He
implemented a working AI which would choose a random move of the possible
moves every time. This player is not very effective at winning games. 
Cortland also implemented the heuristic for beating SimplePlayer. The
heuristic used involved creating a value map of the favorable positions
on the board, with corners being the most valuable spots. The weighted 
score of a move was calculated by taking the final count of the player's 
pieces (after making a move) and subtracting the initial count of the player's
pieces and multiplying that number by the weight associated with the 
position on the board of the move made. The move that has the highest
weighted score is returned. Next, Alex implemented the minimax algorithm 
to consistently beat ConstantTimePlayer. This was done by simulating two
moves in the Othello match, first our AI's move and then ConstantTimePlayer's
move in response to that move. This was accomplished using two nested
for loops to iterate through all of the possible moves for our AI and
all of the possible moves for ConstantTimePlayer. At the end, the move
associated with the maximum of the minimum of the weighted scores was returned.

The main improvement made with our AI was improving our heuristic to 
effectively beat ConstantTimePlayer and BetterPlayer. Our value map was
crucial to accomplishing this task because we needed a way to calculate
the weighted score associated with each move made. Thus, within the minimax
algorithm for beating ConstantTimePlayer we return the move that has the highest
weighted score. Additionally, our minimax initially was only taking into account 
the negative weight for our opponents move two steps ahead, and did not consider
if one of the moves were good or bad for us (ex, a corner or a next to corner).
This allowed us to prevent possible negative moves that our AI was doing. 
The value map strategy and the weighted score calculation
is what will work best for us in the tournament. What did not work well for us
is our original heuristic associated with the value map. The value map
was not strong enough to allow us to beat ConstantTimePlayer at all. Updating
this improved the number of wins against ConstantTimePlayer."