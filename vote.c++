#include <iostream>
#include <string>

using namespace std;

const int MAX_CANDIDATES = 10;

struct Candidate
{
    string name;
    int votes;
};

Candidate candidates[MAX_CANDIDATES];
int numCandidates = 0;

void addCandidate(string name)
{
    if (numCandidates < MAX_CANDIDATES)
    {
        candidates[numCandidates].name = name;
        candidates[numCandidates].votes = 0;
        numCandidates++;
    }
}

void castVote(string name)
{
    for (int i = 0; i < numCandidates; i++)
    {
        if (candidates[i].name == name)
        {
            candidates[i].votes++;
            return;
        }
    }
    cout << "Candidate not found. Vote not cast." << endl;
}

void displayResults()
{
    cout << "Results:" << endl;
    for (int i = 0; i < numCandidates; i++)
    {
        cout << candidates[i].name << ": " << candidates[i].votes << endl;
    }
}

int main()
{
    addCandidate("Alice");
    addCandidate("Bob");
    addCandidate("Charlie");

    castVote("Bob");
    castVote("Alice");
    castVote("Bob");
    castVote("Charlie");

    displayResults();

    return 0;
}
