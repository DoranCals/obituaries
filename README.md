# Obituaries

Randomly generates silly death notices from a predefined list of phrases.

Takes three files as arguments: verb phrases, noun phrases, and possessives.
If no arguments are given, the program will look for files
"verb.txt", "noun.txt", and "poss.txt".
Enter names of "players" through standard input (minimum of 2).

Output consists of a player name, a line from verb.txt,
and a line from either noun.txt or poss.txt.
If a possessive phrase is chosen,
another player name will be used to complete it.

### EXAMPLES

Make Alice, Bob, and Charlie "die":
```
$ obituaries
Enter names (^D to finish):
> Alice
> Bob
> Charlie
> ^D
```

Make the names listed in deathnote.txt "die":
```
$ obituaries < deathnote.txt
```
