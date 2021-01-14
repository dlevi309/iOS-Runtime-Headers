/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMPedometerProxy;

@interface CMPedometer : NSObject {

	CMPedometerProxy* _pedometerProxy;

}

@property (nonatomic,readonly) CMPedometerProxy * pedometerProxy;              //@synthesize pedometerProxy=_pedometerProxy - In the implementation block
+(long long)authorizationStatus;
+(BOOL)isDistanceAvailable;
+(BOOL)isPaceAvailable;
+(BOOL)isPedometerEventTrackingAvailable;
+(BOOL)isAllDayElevationAvailable;
+(BOOL)isCadenceAvailable;
+(BOOL)isFloorCountingAvailable;
+(BOOL)isStepCountingAvailable;
-(id)init;
-(CMPedometerProxy *)pedometerProxy;
-(id)_pedometerDataWithRecordID:(long long)arg1 ;
-(void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)strideCalibrationDump;
-(void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopPedometerUpdates;
-(void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startPedometerEventUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopPedometerEventUpdates;
-(BOOL)sendStrideCalibrationHistoryToFile:(id)arg1 ;
-(void)queryRawSpeedToKValueBinsWithHandler:(/*^block*/id)arg1 ;
-(void)queryRemoteRawSpeedToKValueBinsWithHandler:(/*^block*/id)arg1 ;
-(void)queryStepCadenceToStrideLengthBinsWithHandler:(/*^block*/id)arg1 ;
-(void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(/*^block*/id)arg1 ;
-(void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

