/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
+(id)timerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(double)_cffireTime;
-(NSDate *)fireDate;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
-(id)userInfo;
-(double)tolerance;
-(void)setFireDate:(NSDate *)arg1 ;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(double)interval;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(void)fire;
-(double)timeInterval;
-(SCD_Struct_NS9*)context;
-(BOOL)isValid;
-(CFStringRef)copyDebugDescription;
-(void)setTolerance:(double)arg1 ;
-(void)invalidate;
-(long long)order;
@end

