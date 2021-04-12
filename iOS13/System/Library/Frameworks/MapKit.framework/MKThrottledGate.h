/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)_timerFired:(id)arg1 ;
-(BOOL)_dispatchWaitingJobsIfNecessary;
-(void)_ensureTimer;
-(BOOL)_replenishAvailableJobsIfNecessary;
-(id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3 ;
-(void)dispatch:(/*^block*/id)arg1 ;
@end

