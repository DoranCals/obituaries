# Obituaries

Randomly generates silly death notices from a predefined list of phrases.
Intended for use similar to "fortune".

This repo includes an extensive phrase list,
and an example name.txt file with a list of default names.
Feel free to add to the phrase list,
but I suggest creating your own names for use on your own.
For instance, try piping file or process names into this program.

## Usage

Takes three files as arguments: verb phrases, noun phrases, and possessives.
If no arguments are given, the program will look for files
"verb.txt", "noun.txt", and "poss.txt".
Enter names of "players" through standard input (minimum of 2).

Output consists of a player name, a line from verb.txt,
and a line from either noun.txt or poss.txt.
If a possessive phrase is chosen,
another player name will be used to complete it.

### EXAMPLES

Make Alice, Bob, or Charlie "die":
```
$ obituaries
> Alice
> Bob
> Charlie
> ^D
```

Make the names listed in deathnote.txt "die":
```
$ obituaries < deathnote.txt
```
