/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSRunLoop : NSObject {

	id _rl;
	id _dperf;
	id _perft;
	id _info;
	id _ports;
	void** _reserved[6];

}
+(id)currentRunLoop;
+(id)_new:(id)arg1 ;
+(id)mainRunLoop;
-(id)init;
-(void)dealloc;
-(void)run;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFRunLoopRef)getCFRunLoop;
-(void)_enumerateInfoPairsWithBlock:(/*^block*/id)arg1 ;
-(void)_portInvalidated:(id)arg1 ;
-(BOOL)_containsPort:(id)arg1 forMode:(id)arg2 ;
-(void)_addPort:(id)arg1 forMode:(id)arg2 ;
-(void)_removePort:(id)arg1 forMode:(id)arg2 ;
-(BOOL)runMode:(id)arg1 beforeDate:(id)arg2 ;
-(void)performInModes:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addPort:(id)arg1 forMode:(id)arg2 ;
-(void)removePort:(id)arg1 forMode:(id)arg2 ;
-(BOOL)containsPort:(id)arg1 forMode:(id)arg2 ;
-(id)portsForMode:(id)arg1 ;
-(void)addTimer:(id)arg1 forMode:(id)arg2 ;
-(void)removeTimer:(id)arg1 forMode:(id)arg2 ;
-(id)timersForMode:(id)arg1 ;
-(BOOL)containsTimer:(id)arg1 forMode:(id)arg2 ;
-(id)allModes;
-(id)currentMode;
-(void)_invalidateTimers;
-(id)limitDateForMode:(id)arg1 ;
-(void)_wakeup;
-(void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2 ;
-(BOOL)runMode:(id)arg1 untilDate:(id)arg2 ;
-(void)runUntilDate:(id)arg1 ;
-(BOOL)runBeforeDate:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5 ;
-(void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(void)cancelPerformSelectorsWithTarget:(id)arg1 ;
@end

