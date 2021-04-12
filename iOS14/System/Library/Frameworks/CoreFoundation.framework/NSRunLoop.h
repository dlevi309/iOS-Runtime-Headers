/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_new:(id)arg1 ;
+(id)mainRunLoop;
+(id)currentRunLoop;
-(CFRunLoopRef)getCFRunLoop;
-(void)_wakeup;
-(void)addTimer:(id)arg1 forMode:(id)arg2 ;
-(id)currentMode;
-(void)run;
-(id)allModes;
-(id)init;
-(void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(void)cancelPerformSelectorsWithTarget:(id)arg1 ;
-(void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2 ;
-(void)_enumerateInfoPairsWithBlock:(/*^block*/id)arg1 ;
-(id)portsForMode:(id)arg1 ;
-(void)runUntilDate:(id)arg1 ;
-(id)description;
-(void)_portInvalidated:(id)arg1 ;
-(void)_addPort:(id)arg1 forMode:(id)arg2 ;
-(void)_invalidateTimers;
-(id)limitDateForMode:(id)arg1 ;
-(void)_removePort:(id)arg1 forMode:(id)arg2 ;
-(void)removeTimer:(id)arg1 forMode:(id)arg2 ;
-(id)timersForMode:(id)arg1 ;
-(BOOL)runBeforeDate:(id)arg1 ;
-(void)addPort:(id)arg1 forMode:(id)arg2 ;
-(void)performInModes:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)containsPort:(id)arg1 forMode:(id)arg2 ;
-(BOOL)_containsPort:(id)arg1 forMode:(id)arg2 ;
-(BOOL)containsTimer:(id)arg1 forMode:(id)arg2 ;
-(BOOL)runMode:(id)arg1 beforeDate:(id)arg2 ;
-(void)removePort:(id)arg1 forMode:(id)arg2 ;
-(BOOL)runMode:(id)arg1 untilDate:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

