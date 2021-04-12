/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSTimer.h>

@interface NSCFTimer : NSTimer
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(BOOL)retainWeakReference;
-(BOOL)allowsWeakReference;
-(void)invalidate;
-(id)userInfo;
-(BOOL)isValid;
-(unsigned long long)_cfTypeID;
-(double)timeInterval;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(id)fireDate;
-(void)setFireDate:(id)arg1 ;
-(void)fire;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
@end

