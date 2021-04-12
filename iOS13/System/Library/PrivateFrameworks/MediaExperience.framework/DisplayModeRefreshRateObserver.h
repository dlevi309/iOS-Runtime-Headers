/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/


@protocol OS_dispatch_queue;
@class NSObject, CADisplay;

@interface DisplayModeRefreshRateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	double _refreshRate;
	CADisplay* _tvOutDisplay;

}
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)updateHDMILatencyOnCoreAnimation:(double)arg1 ;
-(double)readHDMILatencyFromCoreAnimation;
@end

