#!/usr/bin/env python

import os
import sys
import argparse
import random


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Obituaries')
    parser.add_argument('VerbList', nargs='?', default='verb.txt', type=str, help='Path to a list of verb phrases')
    parser.add_argument('NounList', nargs='?', default='noun.txt', type=str, help='Path to a list of noun phrases')
    parser.add_argument('PossList', nargs='?', default='poss.txt', type=str, help='Path to a list of possessives')
    args = parser.parse_args()
    
    #name = [line.rstrip('\n') for line in open(sys.stdin)]
    verb = [line.rstrip('\n') for line in open(args.VerbList)]
    noun = [line.rstrip('\n') for line in open(args.NounList)]
    poss = [line.rstrip('\n') for line in open(args.PossList)]
    
    # Object phrases should pull from the same list, so stick 'em together
    possStart = len(noun)
    noun.extend(poss)
    
    #print random.choice(verb) + random.choice(noun)
    
    v = random.randrange(len(verb) )
    p = random.randrange(len(noun) )
    o = ''
    if p >= possStart:
	o = ' ' + 'Haleigh'

    
    print '{0}{1}{2}{3}'.format(
	'Doran', verb[v], o, noun[p])