/* 
 * File:   event.h
 * Author: Rifkiansyah Meidian C.
 *
 * Created on March 7, 2014, 1:44 PM
 */

#ifndef EVENT_H
#define	EVENT_H

#include <iostream>

#ifdef	__cplusplus
extern "C" {
#endif

    class Event{
        
        Event();
        Event(int _DT, char _K, int _ID);
        ~Event();
        
        
    };


#ifdef	__cplusplus
}
#endif

#endif	/* EVENT_H */

