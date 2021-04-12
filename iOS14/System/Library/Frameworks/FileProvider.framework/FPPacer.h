/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)suspend;
-(id)eventBlock;
-(void)setEventBlock:(id)arg1 ;
-(double)_computeNextTime;
-(void)_fire;
-(void)_scheduleNextFire;
-(id)initWithName:(id)arg1 queue:(id)arg2 minFireInterval:(double)arg3 ;
-(void)signal;
-(void)resume;
-(void)dealloc;
@end

