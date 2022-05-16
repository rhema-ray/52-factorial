##  Intro
I stumbled on a youtube video [youtube video](https://www.youtube.com/watch?v=hoeIllSxpEU) basically discussing that humans are bad at comprehending numbers and can't possibly comprehend 52 factorial (52!). For those who don't know, 52 is special because it's the number of cards in a deck of cards, and 52! is the number of ways in which a deck of cards can be shuffled.

For context, 52! is approximately **`8.0658e67`** or **`80,658,175,170,943,878,571,660,636,856,403,766,975,289,505,440,883,277,824,000,000,000,000`** to be exact.

If you want to learn more about factorials, here are a few links: 
- [52 factorial](https://czep.net/weblog/52cards.html)
- [Factorials](https://byjus.com/maths/factorial/)
- [Permutation and Combination](https://www.mathsisfun.com/combinatorics/combinations-permutations.html)

I am learning C, so I thought this could be a great way to dive into the deep ends :)

## Goals
My initial goal was to write a simple counter that increments its way to 52! whilst measuring how long it took, then probably sleep afterwards. But unfortunately, this has proven to be quite a burden. Although, this quest has led me to two goals:

- print 52!
- visualise the counter on a web page

Sadly, I don't currently know how to make `c` interact with a web page. If I can't figure out a way, I'll finish this with Javascript.

## Limitations 

The limitations I have met so far are: 
- I currently don't know how to increment my way to this impossible number.
- The number is too big to be printed in a terminal window or to a file.
 
I found out C (and probably all 64byte machines) has a number limit of `18,446,744,073,709,551,615` and it is weird because a 64byte can clearly translate to `1.3407807929942597099574024998206e+154` which is more than enough room for my goal.


## Files

- [52.c](52.c): is the file to which the underlining code for 52! will be written.
- [10.c](10.c): This file is a test. To get to my goal, I must first figure out how to print out factorials.

## Log

- 16-may-2022 4:54am
I have read an unnecessary amount of articles on permutation and combination🫠🫠. Although I've learnt quite a lot on this old favourite, I am only a step closer to my goal.