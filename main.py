#!/usr/bin/env python

import os
import sys
import argparse
import fileinput
import random


def buildPhrase(nameList, verbList, nounList, possStart):
    
    names = random.sample(nameList, 2)
    verb = random.choice(verbList)
    n = random.randrange(len(nounList) )
    noun = nounList[n]
    
    if n >= possStart:
	# ex: "Alice| was killed by| |Bob|'s gun."
	result =  '{Name}{Verb} {Name2}{Noun}'.format(
	    Name = names[0], Verb = verb, Name2 = names[1], Noun = noun)
    else:
	# ex: "Alice| was killed by| bullets."
	result =  '{Name}{Verb} {Noun}'.format(
	    Name = names[0], Verb = verb, Noun = noun)
    
    return result


if __name__ == '__main__':
    # Optional arguments for input files
    parser = argparse.ArgumentParser(description='Obituaries')
    parser.add_argument('VerbList', nargs='?', default='verb.txt', type=str, help='Path to a list of verb phrases')
    parser.add_argument('NounList', nargs='?', default='noun.txt', type=str, help='Path to a list of noun phrases')
    parser.add_argument('PossList', nargs='?', default='poss.txt', type=str, help='Path to a list of possessives')
    args = parser.parse_args()
    
    # Use standard input so entering a small list of names is easier.
    nameList = []
    for line in sys.stdin:
	nameList.append(line.rstrip('\n') )
    if len(nameList) < 2:
	sys.exit('Need at least two names.')
    #nameList = [line.rstrip('\n') for line in fileinput.input()]
    verbList = [line.rstrip('\n') for line in open(args.VerbList)]
    nounList = [line.rstrip('\n') for line in open(args.NounList)]
    possList = [line.rstrip('\n') for line in open(args.PossList)]
    # Object phrases should pull from the same list, so stick 'em together
    possStart = len(nounList)
    nounList.extend(possList)
    
    print buildPhrase(nameList, verbList, nounList, possStart)
