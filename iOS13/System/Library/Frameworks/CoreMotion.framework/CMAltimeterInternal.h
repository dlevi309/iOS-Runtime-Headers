/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMAltimeterInternal : NSObject {

	Dispatcher* fFilteredPressureDispatcher;
	/*^block*/id fRelativeAltimeterHandler;
	NSOperationQueue* fRelativeAltimeterQueue;
	Sample fBaseAltimeterSample;
	float fBarometricBaseAltitude;
	BOOL fBaselineReceived;
	float fMostRecentFilteredPressure;
	deque<float, std::__1::allocator<float> >* fPressureSamples;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fHandler;
	/*^block*/id fSignificantElevationSampleHandler;
	double fElevationAscendedOffset;
	double fElevationDescendedOffset;
	BOOL fStopSignificantElevationUpdates;
	double fFilteredElevationOffset;
	BOOL fStopRelativeAltitudeUpdates;

}
-(id)init;
-(void)dealloc;
-(void)_teardown;
-(void)_startElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopElevationUpdates;
-(void)_startSignificantElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopSignificantElevationUpdates;
-(void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_startRelativeAltitudeUpdates;
-(void)_stopRelativeAltitudeUpdates;
@end

