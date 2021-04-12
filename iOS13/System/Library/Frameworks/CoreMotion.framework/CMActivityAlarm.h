/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMActivityAlarm : NSObject {

	BOOL fIsValid;
	CFRunLoopRef fRunLoop;
	NSObject*<OS_dispatch_queue> fQueue;
	/*^block*/id fHandler;
	unsigned _trigger;
	double _duration;

}

@property (assign,nonatomic) double duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned trigger;              //@synthesize trigger=_trigger - In the implementation block
+(BOOL)activityAlarmAvailable;
+(id)activityAlarmInfo;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)fire;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(unsigned)trigger;
-(void)setTrigger:(unsigned)arg1 ;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onRunLoop:(CFRunLoopRef)arg3 withHandler:(/*^block*/id)arg4 ;
@end

