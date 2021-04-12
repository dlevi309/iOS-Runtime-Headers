/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HKQuantity, NSString;

@interface _HKFitnessFriendWorkout : HKSample <NSCopying> {

	BOOL _isWatchWorkout;
	BOOL _isIndoorWorkout;
	NSUUID* _friendUUID;
	unsigned long long _workoutActivityType;
	double _duration;
	HKQuantity* _totalEnergyBurned;
	HKQuantity* _totalBasalEnergyBurned;
	HKQuantity* _totalDistance;
	HKQuantity* _goal;
	unsigned long long _goalType;
	NSString* _bundleID;
	NSString* _deviceManufacturer;
	NSString* _deviceModel;
	long long _amm;
	NSString* _scwi;

}

@property (nonatomic,retain) NSUUID * friendUUID;                                 //@synthesize friendUUID=_friendUUID - In the implementation block
@property (assign,nonatomic) unsigned long long workoutActivityType;              //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) HKQuantity * totalEnergyBurned;                      //@synthesize totalEnergyBurned=_totalEnergyBurned - In the implementation block
@property (nonatomic,retain) HKQuantity * totalBasalEnergyBurned;                 //@synthesize totalBasalEnergyBurned=_totalBasalEnergyBurned - In the implementation block
@property (nonatomic,retain) HKQuantity * totalDistance;                          //@synthesize totalDistance=_totalDistance - In the implementation block
@property (nonatomic,retain) HKQuantity * goal;                                   //@synthesize goal=_goal - In the implementation block
@property (assign,nonatomic) unsigned long long goalType;                         //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                 //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL isWatchWorkout;                                 //@synthesize isWatchWorkout=_isWatchWorkout - In the implementation block
@property (assign,nonatomic) BOOL isIndoorWorkout;                                //@synthesize isIndoorWorkout=_isIndoorWorkout - In the implementation block
@property (nonatomic,retain) NSString * deviceManufacturer;                       //@synthesize deviceManufacturer=_deviceManufacturer - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) long long amm;                                       //@synthesize amm=_amm - In the implementation block
@property (nonatomic,retain) NSString * scwi;                                     //@synthesize scwi=_scwi - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fitnessFriendworkoutWithActivityType:(unsigned long long)arg1 friendUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 bundleID:(id)arg11 isWatchWorkout:(BOOL)arg12 isIndoorWorkout:(BOOL)arg13 deviceManufacturer:(id)arg14 deviceModel:(id)arg15 amm:(long long)arg16 scwi:(id)arg17 ;
+(id)fitnessFriendworkoutWithActivityType:(unsigned long long)arg1 friendUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 bundleID:(id)arg11 isWatchWorkout:(BOOL)arg12 isIndoorWorkout:(BOOL)arg13 deviceManufacturer:(id)arg14 deviceModel:(id)arg15 amm:(long long)arg16 ;
+(id)fitnessFriendWorkoutFromHKWorkout:(id)arg1 ;
+(BOOL)_isConcreteObjectClass;
-(long long)amm;
-(void)setDeviceModel:(NSString *)arg1 ;
-(HKQuantity *)goal;
-(NSString *)scwi;
-(NSString *)deviceModel;
-(HKQuantity *)totalDistance;
-(void)setDuration:(double)arg1 ;
-(void)setTotalDistance:(HKQuantity *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setScwi:(NSString *)arg1 ;
-(void)setAmm:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)friendUUID;
-(void)setFriendUUID:(NSUUID *)arg1 ;
-(HKQuantity *)totalEnergyBurned;
-(BOOL)isIndoorWorkout;
-(HKQuantity *)totalBasalEnergyBurned;
-(BOOL)isWatchWorkout;
-(id)hkWorkoutFromFriendWorkout;
-(void)setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)setTotalEnergyBurned:(HKQuantity *)arg1 ;
-(void)setTotalBasalEnergyBurned:(HKQuantity *)arg1 ;
-(void)setIsWatchWorkout:(BOOL)arg1 ;
-(void)setIsIndoorWorkout:(BOOL)arg1 ;
-(NSString *)deviceManufacturer;
-(void)setDeviceManufacturer:(NSString *)arg1 ;
-(void)setGoal:(HKQuantity *)arg1 ;
-(unsigned long long)goalType;
-(id)description;
-(unsigned long long)workoutActivityType;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)setGoalType:(unsigned long long)arg1 ;
-(double)duration;
@end

