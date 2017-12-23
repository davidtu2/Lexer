/*
Project 1 Lexer.cpp

CPSC 323, Spring 2016, Prof. Song Choi, Assignment 1

NAME:			David Tu, Section 2 (david.tu2@csu.fullerton.edu)
DESCRIPTION:	Rat16 Compiler - Lexical Analyzer implementation (Assignment 1)
REVISIONS:		Version 1
MODIFIED BY:	2016/03/06
*/

#include "stdafx.h"
#include "LexicalAnalyzer.h"

LexicalAnalyzer NewLA;

int main()
{
	if (NewLA.readFileOpen()) {
		NewLA.lexer();
	}
	else {
		cout << "ERROR: Cannot open the file!!!" << endl;
		exit(1);
	}

	NewLA.closeReadFile();
	NewLA.closeOutputFile();

	return 0;
}