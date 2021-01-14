/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)activityAlarmInfo;
+(BOOL)activityAlarmAvailable;
-(void)setDuration:(double)arg1 ;
-(unsigned)trigger;
-(void)fire;
-(void)setTrigger:(unsigned)arg1 ;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(BOOL)isValid;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onRunLoop:(CFRunLoopRef)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)invalidate;
-(double)duration;
-(void)dealloc;
@end

