/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VKTimer;

@interface MKThrottledGate : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _maxAvailableTickets;
	double _availableTickets;
	double _refreshRate;
	NSMutableArray* _waitingJobs;
	VKTimer* _timer;

}
-(id)description;
-(void)_ensureTimer;
-(BOOL)_dispatchWaitingJobsIfNecessary;
-(id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3 ;
-(BOOL)_replenishAvailableJobsIfNecessary;
-(void)dispatch:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_timerFired:(id)arg1 ;
@end

