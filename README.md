##  Intro
I  stumbled on a [youtube video](https://www.youtube.com/watch?v=hoeIllSxpEU) basically discussing that humans are bad at comprihending nmbers and can't possiblily comprehend 52 factorial (52!). 
For those who don't know, 52 is special because its the number of cards in a deck of cards, and 52! is the number of ways in which a deck of cards of cards can be shuffled.

For context, 52! is approximately **8.0658e67** or **80,658,175,170,943,878,571,660,636,856,403,766,975,289,505,440,883,277,824,000,000,000,000** to be exact.

If you want to learn more about factorials here are a few link:
- [52 factorial](https://czep.net/weblog/52cards.html)
- [Factorials](https://byjus.com/maths/factorial/)
- [Permutation and Combination](https://www.mathsisfun.com/combinatorics/combinations-permutations.html)

I am learning C so I thought ths could be great way to dive into the deep ends :)

## Goals
My initial goals was to write a simple counter that increments its way to 52! whilsts measuring how long it takes then probably sleep afterwards. But unffortunately, this has proven quiet the burden. This quest has lead me to two goals:

- print 52!
- visualise the counter on a web page

Sadly i don't currently know how to make `c` interact with a web page. If i can't figure out a way i'll finish this with javascript

## Limitations 

The limitation i have met so far are:
- i currently don't know how to increment my way to this immpossible number
- The number is too big to be printed in a terminal window or to a file 
 
I found out C (and probably all 64byte machines) has a number limit of `18,446,744,073,709,551,615` and it is weird because a 64byte can clearly translates to `1.3407807929942597099574024998206e+154` which is more than enough room for my goal.


## Files

- [52.c](52.c): Is the file to which the underlining code for 52! will be writen
- [10.c](10.c): Is a test file. To get to my goal I must first figure how to print out factorials.

## Log

16-may-2022 4:54am
I have read an unecceary amount of articles on permutation an combination 🫠🫠