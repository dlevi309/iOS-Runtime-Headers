/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSOperationQueue* fAbsoluteAltitudeClientQueue;
	/*^block*/id fAbsoluteAltitudeClientHandler;

}
-(id)init;
-(void)_teardown;
-(void)_releaseHandlerObjects;
-(void)_stopElevationUpdates;
-(void)_handleAbsoluteAltitudeUpdate:(shared_ptr<CLConnectionMessage>*)arg1 ;
-(void)_startElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_startSignificantElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_startRelativeAltitudeUpdates;
-(void)_stopSignificantElevationUpdates;
-(void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_stopRelativeAltitudeUpdates;
-(void)_startAbsoluteAltitudeUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_stopAbsoluteAltitudeUpdates;
-(void)_pauseAbsoluteAltitudeUpdates;
-(void)_resumeAbsoluteAltitudeUpdates;
-(void)dealloc;
@end

