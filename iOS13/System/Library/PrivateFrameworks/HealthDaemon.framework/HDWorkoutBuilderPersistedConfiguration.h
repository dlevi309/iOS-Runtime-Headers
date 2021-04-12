/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HKWorkoutConfiguration, HDSourceEntity, NSString, HDDeviceEntity, HKQuantity;

@interface HDWorkoutBuilderPersistedConfiguration : NSObject <NSCopying> {

	NSUUID* _builderIdentifier;
	HKWorkoutConfiguration* _workoutConfiguration;
	HDSourceEntity* _sourceEntity;
	NSString* _sourceVersion;
	HDDeviceEntity* _deviceEntity;
	unsigned long long _goalType;
	HKQuantity* _goal;

}

@property (nonatomic,copy) NSUUID * builderIdentifier;                                 //@synthesize builderIdentifier=_builderIdentifier - In the implementation block
@property (nonatomic,copy) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (nonatomic,retain) HDSourceEntity * sourceEntity;                            //@synthesize sourceEntity=_sourceEntity - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                                   //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,retain) HDDeviceEntity * deviceEntity;                            //@synthesize deviceEntity=_deviceEntity - In the implementation block
@property (assign,nonatomic) unsigned long long goalType;                              //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,copy) HKQuantity * goal;                                          //@synthesize goal=_goal - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDSourceEntity *)sourceEntity;
-(NSString *)sourceVersion;
-(void)setSourceVersion:(NSString *)arg1 ;
-(void)setWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 ;
-(void)setGoalType:(unsigned long long)arg1 ;
-(void)setGoal:(HKQuantity *)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(unsigned long long)goalType;
-(HKQuantity *)goal;
-(void)setBuilderIdentifier:(NSUUID *)arg1 ;
-(void)setSourceEntity:(HDSourceEntity *)arg1 ;
-(void)setDeviceEntity:(HDDeviceEntity *)arg1 ;
-(NSUUID *)builderIdentifier;
-(HDDeviceEntity *)deviceEntity;
@end

