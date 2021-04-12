/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FPPacer : NSObject {

	double _lastFireTime;
	double _minFireInterval;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_source> _timer;
	Ai _sourceSuspendCount;
	/*^block*/id _eventBlock;

}

@property (nonatomic,copy) id eventBlock;              //@synthesize eventBlock=_eventBlock - In the implementation block
-(void)dealloc;
-(void)resume;
-(void)signal;
-(void)suspend;
-(id)eventBlock;
-(id)initWithName:(id)arg1 queue:(id)arg2 minFireInterval:(double)arg3 ;
-(void)setEventBlock:(id)arg1 ;
-(void)_scheduleNextFire;
-(double)_computeNextTime;
-(void)_fire;
@end

