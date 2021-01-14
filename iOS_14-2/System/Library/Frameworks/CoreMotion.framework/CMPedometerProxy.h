/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMPedometerProxy : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fOffsetUpdateHandler;
	/*^block*/id fCumulativeUpdateHandler;
	long long fStepCountFromStart;
	long long fPushCountFromStart;
	long long fStepCountOffset;
	long long fPushCountOffset;
	double fDistanceFromStart;
	double fDistanceOffset;
	int fFloorAscendedStart;
	int fFloorAscendedOffset;
	int fFloorDescendedStart;
	int fFloorDescendedOffset;
	double fActiveTimeFromStart;
	double fActiveTimeOffset;
	double fValidStartDate;
	BOOL fStopUpdates;
	BOOL fFloorCountingAvailable;
	BOOL fPaceAndCadenceAvailable;
	/*^block*/id fEventHandler;
	BOOL fStopEventUpdates;
	int fWorkoutType;
	int fElevationAscendedStart;
	int fElevationAscendedOffset;
	int fElevationDescendedStart;
	int fElevationDescendedOffset;
	BOOL fElevationCountingAvailable;
	int fDistanceSource;

}
-(void)_stopPedometerUpdates;
-(void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_teardown;
-(void)_handleRecordQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 shouldStartUpdates:(BOOL)arg3 ;
-(void)_internalQueryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 onQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_subscribeToCumulativePedometerUpdates:(/*^block*/id)arg1 ;
-(void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 shouldStartUpdates:(BOOL)arg3 ;
-(void)_queryPedometerCalibrationBinsWithHandler:(/*^block*/id)arg1 forType:(long long)arg2 forRemote:(BOOL)arg3 ;
-(id)_strideCalibrationDump;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_stopPedometerEventUpdates;
-(void)dealloc;
-(void)_startPedometerEventUpdatesWithHandler:(/*^block*/id)arg1 ;
@end

