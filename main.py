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
    
    verb = [line.rstrip('\n') for line in open(args.VerbList)]
    noun = [line.rstrip('\n') for line in open(args.NounList)]
    poss = [line.rstrip('\n') for line in open(args.PossList)]
