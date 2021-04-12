/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/


@protocol OS_dispatch_queue;
@class NSObject, CADisplay;

@interface DisplayModeRefreshRateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	double _refreshRate;
	CADisplay* _tvOutDisplay;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(int)updateHDMILatencyOnCoreAnimation:(double)arg1 ;
-(double)readHDMILatencyFromCoreAnimation;
-(void)dealloc;
@end

