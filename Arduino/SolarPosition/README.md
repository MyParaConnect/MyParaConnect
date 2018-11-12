https://www.nrel.gov/grid/solar-resource/solpos.html

Compiler les sources (installer gcc) :

mkdir bin
gcc -std=c99 -o bin/stest00 stest00.c solpos.c -lm

Tester :

./bin/stest00


Modifier long/lat/time et date/heure dans le source :

    pdat->longitude = -84.43;  /* Note that latitude and longitude are  */
    pdat->latitude  =  33.65;  /*   in DECIMAL DEGREES, not Deg/Min/Sec */
    pdat->timezone  =  -5.0;   /* Eastern time zone, even though longitude would
                                  suggest Central.  We use what they use.
                                  DO NOT ADJUST FOR DAYLIGHT SAVINGS TIME. */

    pdat->year      = 1999;    /* The year is 1999. */
    pdat->daynum    =  203;    /* July 22nd, the 203'rd day of the year (the
                                  algorithm will compensate for leap year, so
                                  you just count days). S_solpos can be
                                  configured to accept month-day dates; see
                                  examples below.) */

    /* The time of day (STANDARD time) is 9:45:37 */

    pdat->hour      =  9;
    pdat->minute    = 45;
    pdat->second    = 37;


Puis recompiler et retester
