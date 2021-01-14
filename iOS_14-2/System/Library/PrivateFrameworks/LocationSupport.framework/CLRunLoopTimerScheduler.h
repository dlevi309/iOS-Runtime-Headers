/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <libobjc.A.dylib/CLTimerScheduler.h>

@class CLTimer, NSTimer, NSRunLoop;

@interface CLRunLoopTimerScheduler : NSObject <CLTimerScheduler> {

	NSTimer* _underlyingTimer;
	/*^block*/id _fireBlock;
	NSRunLoop* _runloop;
	CLTimer* _timer;

}

@property (nonatomic,retain) NSTimer * underlyingTimer;              //@synthesize underlyingTimer=_underlyingTimer - In the implementation block
@property (nonatomic,copy) id fireBlock;                             //@synthesize fireBlock=_fireBlock - In the implementation block
@property (nonatomic,retain) NSRunLoop * runloop;                    //@synthesize runloop=_runloop - In the implementation block
@property (assign,nonatomic,__weak) CLTimer * timer;                 //@synthesize timer=_timer - In the implementation block
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(void)setRunloop:(NSRunLoop *)arg1 ;
-(CLTimer *)timer;
-(void)setTimer:(CLTimer *)arg1 ;
-(id)initWithRunLoopSilo:(id)arg1 ;
-(void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2 ;
-(NSRunLoop *)runloop;
-(NSTimer *)underlyingTimer;
-(void)setUnderlyingTimer:(NSTimer *)arg1 ;
-(void)dealloc;
@end

