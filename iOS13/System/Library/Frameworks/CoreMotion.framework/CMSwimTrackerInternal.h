/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSwimTrackerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	BOOL fStartedUpdates;
	/*^block*/id fHandler;
	unsigned long long fStrokeCountOffset;
	double fDistanceOffset;
	unsigned long long fLapCountOffset;
	double fActiveTime;
	unsigned long long fSegmentCountOffset;

}
-(id)init;
-(void)dealloc;
-(void)_teardown;
-(void)_startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopUpdates;
-(void)_handleUpdates:(id)arg1 ;
-(void)_resetOffsets;
-(void)_querySwimUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

