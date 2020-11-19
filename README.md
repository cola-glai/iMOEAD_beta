# I-MOEA/D-PLVF
This repository consists of experimental codes based on the paper "**Interactive Decomposition Multiobjective Optimization Via Progressively Learned Value Functions**", published in IEEE TRANSACTIONS ON FUZZY SYSTEMS 2019 by Ke Li et al.

## Introduction


## Run the codes
This version of project is almostly written in C except that we have used the eigen package (written in C++) to do some matrix operations, which enables us to calculate the pseudo inverse matrix in a more convenient way. Besides, almost all of the parameter settings are included in a 'config.txt' file along with this project. As a result, you can get started with this demo project effortlessly.

Parameters you may need to tune are as follows:
+ Population size
+ Types of test problem.
+ Number of varibles of the test problem.
+ Number of objective functions of the test problem.
+ Step size.
+ Number of generations between consultations with DM
+ Scoring way of DM.
+ Utopia reference point or Golden point.
+ Maximum number of iterations.



