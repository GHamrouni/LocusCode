LocusCode [![Build Status](https://secure.travis-ci.org/GHamrouni/LocusCode.png)](http://travis-ci.org/GHamrouni/LocusCode)
=======================

LocusCode allows you to perform similarity search on web scale datasets.

LocusCode efficiently computes a locality-sensitive hash. The hash can be used
to approximate the k-nearest neighbors.

WHAT'S LSH?
--------

Searching for the k most similar objects to a given object is a very common task.
Unfortunately, for high dimensional spaces the usual methods are not very 
efficient (they perform slightly better as brute force).
 
Locality-sensitive hashing (LSH) is a computationally efficient method that approximate nearest 
neighbors search. The method is particularly efficient for higher dimensional spaces and large 
databases.


Building
--------
To compile LocusCode:

    make

The compilation will produce libLocusCode.a

To compile an example:

    gcc main.c libLocusCode.a -lm -o main

Alternatively you can use clang

    clang main.c libLocusCode.a -lm -o main


References
--------
1. http://www.cs.princeton.edu/courses/archive/spr05/cos598E/bib/p253-datar.pdf
1. http://www.slaney.org/malcolm/yahoo/Slaney2008-LSHTutorial.pdf
1. http://graphics.stanford.edu/courses/cs468-06-fall/Slides/aneesh-michael.pdf





