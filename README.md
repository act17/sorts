# sorts
A variety of sorting algorithms that I've programmed.
# General Preface
  The point of this repository is to publically show implementations of sorting algorithims that I've programmed.
# Special Thanks
  Massive thanks to the YouTube Channel *udiprod* (https://www.youtube.com/c/udiprod) who gave me the primary information on sorting algorithims altogether. Another thanks is to the users of the Ubuntu Hideout Discord *Beef Broccoli*, *b-fuze (Mike32)* and *Xen* for providing me help in actually developing the program - in spite of my anger and frustration. Finally, a special thanks to *Chris7*, who pointed out an obvious error in a ``for`` loop's initialization.
  Further thanks for the development of ``quick();`` and ``bubble();`` goes to Levi Webb (@jarcode-foss on GitHub). First for helping me fix the ``bubble();``-``malloc();`` error, then helping me develop and fix bugs with the quicksort implementation.
# Current Sorts
  - Bubble Sort (As of Version 1.0)
  - Quick Sort (As of Version 1.3)
# Changelog
  *Version 1.3* (August 3rd, 2022)
  - Converted ``bubble();`` into a void macro as opposed to the ``malloc();``-failure mess that was the old ``double * bubble`` function.
  - Added quicksort through ``quick();``.
  
  *Version 1.2* (July 10th, 2022)
  - Called a float-pointer outside of the function ``bubble()``. As a result, you can now write the data from ``bubble()`` - and all future sorts - as pointers properly. As a result, the diagnostic-output routine has been commented in ``bubble()``.
  
  *Version 1.1* (June 27th, 2022)
  - Alteration to Bubble Sort; near-unusued operator ``c`` was removed from the program, as it served the same function entirely as ``a``. All mentions of ``d`` have now been replaced with ``c``.
 
  *Version 1.0* (June 26th, 2022)
  - Bubble Sort has been added.
