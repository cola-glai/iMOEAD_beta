# I-MOEA/D-PLVF
This repository consists of experimental codes based on the paper "[**Interactive Decomposition Multiobjective Optimization Via Progressively Learned Value Functions**](https://ieeexplore.ieee.org/document/8531708)", published in IEEE TRANSACTIONS ON FUZZY SYSTEMS 2019 by Ke Li et al.

## Introduction
The paper above develops an interactive framework for the decomposition-based EMO algorithm to lead a DM to the preferred solutions of her/his choice. This framework consists of three modules, i.e., consultation, preference elicitation and optimization.</br>
In our experimental project, we collect scores of promising individuals every consultation segment, which carry the preference information towards every individual of the DM. Then, we use RBFN to learn a latent function which preserves the preference level of every individual as accurate as possible. When it comes to the way of scoring by the DM, we have tried two different ways, i.e., Chebycheff and cosine value function. Every time the RBFN has improved its capability to express the preference information of DM towards different individuals via the latest dataset, the reference points will be adjusted to guide the whole population towards the ROI of DM.

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
