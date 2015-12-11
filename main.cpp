#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void readArgLines(vector<string> &v, int a, string s)
{
    ifstream sourceFile(s);
    while (!sourceFile.eof() )
    {
	string line;
	getline(sourceFile, line);
	v.push_back(line);
    }
}

string buildPhrase(vector<string> nameList, vector<string> verbList,
		   vector<string> nounList, int possStart)
{
    int v = 0;
    int n = 0;
    int a = 0;
    int b = 0;
    string result;
    
    v = rand() % verbList.size();
    n = rand() % nounList.size();
    a = rand() % nameList.size();
    do b = rand() % nameList.size(); while (b == a);
    
    result = nameList[a] + verbList[v];
    if (n >= possStart) result = result + ' ' + nameList[b];
    result += nounList[n];
    
    return result;
}

int main(int argc, char** argv)
{
	srand(time(0));
	
	vector<string> nameList;
	vector<string> verbList;
	vector<string> nounList;
	int possStart = 0;
	
	const string verbFileDefault = "verb.txt";
	string verbFile = (argc > 1) ? argv[1] : verbFileDefault;
	const string nounFileDefault = "noun.txt";
	string nounFile = (argc > 1) ? argv[1] : nounFileDefault;
	const string possFileDefault = "poss.txt";
	string possFile = (argc > 1) ? argv[1] : possFileDefault;
	
	readArgLines(verbList, 1, verbFile);
	readArgLines(nounList, 2, nounFile);
	possStart = nounList.size();
	readArgLines(nounList, 3, possFile);
	
	while (!cin.eof() )
	{
	    string line;
	    getline(cin, line);
	    if (line.size() )
		nameList.push_back(line);
	}
	if (nameList.size() < 2)
	{
	    cerr << "Need at least two names.\n";
	    exit(1);
	}
	
	cout << buildPhrase(nameList, verbList, nounList, possStart) << endl;
	
	return 0;
}

