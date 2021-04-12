/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject {

	CMNatalimeterInternal* _internal;

}

@property (nonatomic,readonly) CMNatalimeterInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(id)maxNatalieEntries;
+(BOOL)setUserProfile:(id)arg1 error:(id*)arg2 ;
+(double)briskMinuteMetsThreshold;
+(double)activeMetsThreshold;
+(id)userProfile;
+(id)defaultUserProfile;
+(BOOL)setUserInfo:(id)arg1 error:(id*)arg2 ;
+(BOOL)resetCalibrationDataWithError:(id*)arg1 ;
+(BOOL)isNatalimeterAvailable;
+(id)computeRestingCaloriesAtRate:(unsigned long long)arg1 user:(id)arg2 duration:(double)arg3 ;
+(double)computeTimeToActiveCalories:(id)arg1 user:(id)arg2 workoutType:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(CMNatalimeterInternal *)_internal;
-(BOOL)_shouldAllowMotionCalibrationPromptsForSession:(long long)arg1 ;
-(void)setSession:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopAbsoluteNatalimetryDataUpdates;
-(unsigned long long)getSupportedMetricsForSession:(long long)arg1 ;
-(unsigned long long)promptsNeededForSession:(long long)arg1 ;
@end

