/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject {

	CMNatalimeterInternal* _internal;

}

@property (nonatomic,readonly) CMNatalimeterInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(double)computeTimeToActiveCalories:(id)arg1 user:(id)arg2 workoutType:(long long)arg3 ;
+(BOOL)isNatalimeterAvailable;
+(BOOL)resetCalibrationDataWithError:(id*)arg1 ;
+(id)computeRestingCaloriesAtRate:(unsigned long long)arg1 user:(id)arg2 duration:(double)arg3 ;
+(id)userProfile;
+(BOOL)setUserInfo:(id)arg1 error:(id*)arg2 ;
+(id)maxNatalieEntries;
+(double)activeMetsThreshold;
+(double)briskMinuteMetsThreshold;
+(id)defaultUserProfile;
+(BOOL)setUserProfile:(id)arg1 error:(id*)arg2 ;
-(CMNatalimeterInternal *)_internal;
-(id)init;
-(void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopAbsoluteNatalimetryDataUpdates;
-(void)dealloc;
@end

