# Assignment1
<b>Team Members:</b><br>
 Robert Kenny - rlkenny@csu.fullerton.edu<br>
 Dustin Vuong - dhvuong@csu.fullerton.edu<br>
 Tiffanny Hernaez - tiffannyhernaez@csu.fullerton.edu<br>
 Sagar Joshi - sagar0698@csu.fullerton.edu<br>
 Stephanie Casillas - stepc25@csu.fullerton.edu<br>
 <b>For this program we used: C++<b>

## To execute this program on Tuffix, first clone the repository:
`git clone https://github.com/CPSC-351/Assignment1.git`

## For part 1 run the program on Tuffix using:
`g++ shellskel.cpp -o shellskel
`./`shellskel
## For part 2 run the program on Tuffix using:
`g++ serial.cpp -o serial
`./`serial 
`g++ parallel.cpp -o parallel
`./`parallel 

<b>Questions:</b>
1. In the output of time, what is the difference between real, user, and sys times?<br>
For the parallel downloader the real time is 1 min 54.641sec, the user time is 0 min 3.250sec, the system time is 0 min 11.661sec.
For the serial downloader the real time is 2 min 41.625sec, the user time is 0 min 3.552sec,the system time is 0 min 16.512sec.
In both of the downloaders the downloaders the real time is the longest then the user time and finally the fastest is the sys time.

2. Which is longer: user time or sys time? Use your knowledge to explain why.<br>
The sys time is longer in both of the downloaders,the user time is the amount of time spent outside of the kernel 
and the sys time is the time spent inside of the kernel. Meaning this process spends more time inside of the kernel than inside making the sys time longer
than the user time.                                                                       

3. When downloading the files above, which downloader finishes faster? Why do you think
that is?<br>
The downloader that finishes the fastest is the parallel downloader, this might be due to the fact that the parallel downloader downloads multiple files 
in parallel while the serial downloader downloads each file individually which would take more time since the files are downloading one at a time.

4. Repeat the experiment for 10 files (any reasonably large-sized files, e.g., 100 MB, will do).
Is the downloader in the previous question still faster? If not so, why do you think that
is?<br>
Yes in the other 10 files the parallel downloader finishes faster than the serial downloader.
