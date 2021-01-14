/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKWorkoutConfiguration, NSUUID;

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration {

	BOOL _requiresCoreLocationAssertion;
	BOOL _requiresRecovery;
	BOOL _supportsAppRelaunchForRecovery;
	BOOL _shouldStopPreviousSession;
	HKWorkoutConfiguration* _workoutConfiguration;
	NSUUID* _sessionUUID;

}

@property (nonatomic,copy) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (nonatomic,copy) NSUUID * sessionUUID;                                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL requiresCoreLocationAssertion;                       //@synthesize requiresCoreLocationAssertion=_requiresCoreLocationAssertion - In the implementation block
@property (assign,nonatomic) BOOL requiresRecovery;                                    //@synthesize requiresRecovery=_requiresRecovery - In the implementation block
@property (assign,nonatomic) BOOL supportsAppRelaunchForRecovery;                      //@synthesize supportsAppRelaunchForRecovery=_supportsAppRelaunchForRecovery - In the implementation block
@property (assign,nonatomic) BOOL shouldStopPreviousSession;                           //@synthesize shouldStopPreviousSession=_shouldStopPreviousSession - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSUUID *)sessionUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 ;
-(BOOL)requiresRecovery;
-(void)setShouldStopPreviousSession:(BOOL)arg1 ;
-(void)setRequiresCoreLocationAssertion:(BOOL)arg1 ;
-(void)setRequiresRecovery:(BOOL)arg1 ;
-(BOOL)shouldStopPreviousSession;
-(void)setSupportsAppRelaunchForRecovery:(BOOL)arg1 ;
-(BOOL)requiresCoreLocationAssertion;
-(BOOL)supportsAppRelaunchForRecovery;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
@end

