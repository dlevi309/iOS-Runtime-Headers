/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString;

@interface HDGymKitWorkoutAnalyticEvent : NSObject {

	unsigned long long _fitnessMachineType;
	NSString* _manufacturer;
	long long _timeToBeginExperience;
	long long _workoutEndErrorCode;

}

@property (assign,nonatomic) unsigned long long fitnessMachineType;              //@synthesize fitnessMachineType=_fitnessMachineType - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                            //@synthesize manufacturer=_manufacturer - In the implementation block
@property (assign,nonatomic) long long timeToBeginExperience;                    //@synthesize timeToBeginExperience=_timeToBeginExperience - In the implementation block
@property (assign,nonatomic) long long workoutEndErrorCode;                      //@synthesize workoutEndErrorCode=_workoutEndErrorCode - In the implementation block
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(unsigned long long)fitnessMachineType;
-(void)setFitnessMachineType:(unsigned long long)arg1 ;
-(long long)timeToBeginExperience;
-(void)setTimeToBeginExperience:(long long)arg1 ;
-(long long)workoutEndErrorCode;
-(void)setWorkoutEndErrorCode:(long long)arg1 ;
@end

