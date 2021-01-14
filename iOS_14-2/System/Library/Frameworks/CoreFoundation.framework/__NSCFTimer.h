/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimer.h>

@interface __NSCFTimer : NSTimer
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)fireDate;
-(oneway void)release;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
-(unsigned long long)_cfTypeID;
-(id)userInfo;
-(double)tolerance;
-(id)init;
-(void)setFireDate:(id)arg1 ;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(void)fire;
-(double)timeInterval;
-(BOOL)isValid;
-(void)setTolerance:(double)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(void)invalidate;
-(BOOL)isEqual:(id)arg1 ;
@end

