
# ECEN 1940 - Computer Science I
## Spring 2022
### Midterm Exam

**Instructions** Follow instructions *carefully*, failure to do
so may result in points being deducted.  Hand in all your source code
files through webhandin and make sure your programs compile and run by
using the webgrader interface.  You can grade yourself and
re-handin as many times as you wish up until the due date/time.  


## Energy Conversion

A *joule* (or kilowatt hour) is a standard measure of energy.  Other
units include calories, British Thermal Units (BTUs) and foot-pound
force (ft-lb).  1 joule can be converted to the other three units
using the following conversions.
  * 1 joule is 0.2390057361 calories
  * 1 joule is 0.0009478171 BTUs (British Thermal Units)
  * 1 joule is 0.7375621493 ft-lbf (foot-pound force)

Write a the following function that takes an energy level in
joules and converts to the other three units using the pass-by-reference
variables.

`int convertJoules(double joules, double *calories, double *btu, double *ftlb);`

The function should perform basic error handling and return a non-zero
error code for any error conditions.  In addition, complete a main
driver program that reads in an energy measurement in joules (as
a command line argument) and uses
your function to convert to the other three units and output the results
to the standard output.

## Array Exercises

In this part you will write several functions that operate on
arrays.  Implement the following functions that all operate on
integer arrays containing only values 0 or 1 (if the input array(s)
contain any other values, it should be considered invalid input and
an error code should be returned).  Such arrays are known as *bit vectors*.

For all functions, return an appropriate error code (0 for no error, non-zero
for any error condition(s)) or an appropriate pointer.  A basic tester has
been provided that you can use to check your solutions.  You may add
additional functions if you like or alter or add additional tests, but you
will not hand them in.

1. Write a function that computes the *parity* of a
  bit vector: if the number of 1s in the vector is even, the parity
  is 0; otherwise if the number of 1s in the vector is odd, the parity
  is 1.  Your function should have the following signature which takes
  a bit vector of length `n`; the result should be placed
  in the pass-by-reference variable.

  For example, the bit vector [0,1,1,0,1,0,1] has 4 1s and so has
  a parity of 0.  The bit vector [0,1,1,1,0,0,0] has 3 ones and has
  a parity of 1.

  Your function should have the following signature:

  `int computeParity(const int *bitVector, int n, int *parity);`

2. Write a function to compute the *Hamming Distance* of
  two bit vectors with the same length.  The Hamming Distance is
  the number of positions or bits in which the two vectors disagree
  (have different values). For example, the two bit vectors

011**01**0**1**
011**10**0**0**

  have a Hamming Distance of 3, the places in which they disagree are
  highlighted.  Write a function that computes the Hamming Distance
  of two bit vectors of length `n`; the result should be placed
  in the pass-by-reference variable.

  Your function should have the following signature:

`int hammingDistance(const int *bitVectorA, const int *bitVectorB, int n, int *hamDistance);`

3. Given two bit vectors `a` and `b`, each of the same length, `n`, the
  *vector multiplication* is a new bit vector `c` also
  of length `n` such that each element `c[i]`
  is the multiplication of the i-th elements in `a` and `b`; in other
  words `c[i] = a[i] * b[i]`.

  Write a function that creates a new bit vector that is the multiplication
  of two input bit vectors.  

  Your function should have the following signature:

  `int * vectorMult(const int *bitVectorA, const int *bitVectorB, int n);`
