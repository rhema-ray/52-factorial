##  Intro
I stumbled on a [youtube video](https://www.youtube.com/watch?v=hoeIllSxpEU) basically discussing that humans are bad at comprehending numbers and can't possibly comprehend 52 factorial (52!). For those who don't know, 52 is special because it's the number of cards in a deck of cards, and 52! is the number of ways in which a deck of cards can be shuffled.

For context, 52! is approximately **`8.0658e67`** or **`80,658,175,170,943,878,571,660,636,856,403,766,975,289,505,440,883,277,824,000,000,000,000`** to be exact.

If you want to learn more about factorials, here are a few links: 
- [52 factorial](https://czep.net/weblog/52cards.html)
- [Factorials](https://byjus.com/maths/factorial/)
- [Permutation and Combination](https://www.mathsisfun.com/combinatorics/combinations-permutations.html)

I am learning C, so I thought this could be a great way to dive into the deep end :)

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

- 16-may-2022 4:54am GMT+1
I have read an unnecessary amount of articles on permutation and combination🫠🫠. Although I've learnt quite a lot on this old favourite, I am only a step closer to my goal.

- 21-may-2022 3:22am GMT+1
I figured out how to do factorial calculations. The `long long unsigned int` was probably the first problem with my code. Because of it, the compiler keeps running into issues (I think). I'll try to figure out why it kept running into an error.

- 25-may-2022 3:22am GMT+1
Turns out the `long long unsigned int` wasn't the problem with my code. There was like three (unnecessary) return statements. Sha the code compiles and the time it takesis acctually a lot more dissapointing than I anticipated. I completely forgot how a complete breeze incrementing is😅. On the birght side, the code works  and i found `C`'s limit. next problem is how to pass it.

- 30-may-2022 3:22am GMT+1
Turns out i didn't commit anything on this repository, I was working on the repo on the vm the entire time and that doesn't link to here. Well, i've realized the challege isn't to increment to `52!` anymore, **it is to print a number that exceeds `C`'s limits.**

- 2-june-2022 10:18pm
Sigh...