/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_teardown;
-(void)_startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopUpdates;
-(void)_handleUpdates:(id)arg1 ;
-(void)_resetOffsets;
-(void)_querySwimUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

