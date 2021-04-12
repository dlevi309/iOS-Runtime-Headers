/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)_isTracking;
-(void)_teardown;
-(void)_startWithHandler:(/*^block*/id)arg1 ;
-(void)_handleStartStopResponse:(shared_ptr<CLConnectionMessage>*)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopWithHandler:(/*^block*/id)arg1 ;
-(void)_querySpringDataFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

