/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CLTimer *)timer;
-(void)setTimer:(CLTimer *)arg1 ;
-(NSRunLoop *)runloop;
-(void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2 ;
-(id)initWithRunLoopSilo:(id)arg1 ;
-(NSTimer *)underlyingTimer;
-(void)setUnderlyingTimer:(NSTimer *)arg1 ;
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(void)setRunloop:(NSRunLoop *)arg1 ;
@end

