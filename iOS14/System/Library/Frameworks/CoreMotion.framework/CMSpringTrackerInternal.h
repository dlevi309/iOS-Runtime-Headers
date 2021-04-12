/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSpringTrackerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	BOOL fTrackingStarted;
	/*^block*/id fHandler;

}
-(id)init;
-(void)_teardown;
-(void)_startWithHandler:(/*^block*/id)arg1 ;
-(void)_handleStartStopResponse:(shared_ptr<CLConnectionMessage>*)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopWithHandler:(/*^block*/id)arg1 ;
-(void)_querySpringDataFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)_isTracking;
@end

