/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSDate;

@interface NSTimer : NSObject

@property (copy) NSDate * fireDate; 
@property (readonly) double timeInterval; 
@property (assign) double tolerance; 
@property (getter=isValid,readonly) BOOL valid; 
@property (retain,readonly) id userInfo; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)timerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
-(void)invalidate;
-(id)userInfo;
-(BOOL)isValid;
-(double)timeInterval;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)fire;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
-(double)_cffireTime;
-(double)interval;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(CFStringRef)copyDebugDescription;
-(long long)order;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(SCD_Struct_NS15*)context;
@end

