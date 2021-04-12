/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HKWorkoutConfiguration, NSString, NSDate;

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding> {

	NSUUID* _sessionIdentifier;
	HKWorkoutConfiguration* _configuration;
	NSString* _applicationIdentifier;
	long long _sessionState;
	long long _internalState;
	NSDate* _snapshotDate;
	double _elapsedTime;

}

@property (nonatomic,readonly) NSUUID * sessionIdentifier;                          //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) HKWorkoutConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;               //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isFirstPartyWorkout; 
@property (nonatomic,readonly) long long sessionState;                              //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) long long internalState;                             //@synthesize internalState=_internalState - In the implementation block
@property (nonatomic,readonly) NSDate * snapshotDate;                               //@synthesize snapshotDate=_snapshotDate - In the implementation block
@property (nonatomic,readonly) double elapsedTime;                                  //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSString *)applicationIdentifier;
-(HKWorkoutConfiguration *)configuration;
-(long long)sessionState;
-(NSUUID *)sessionIdentifier;
-(double)elapsedTime;
-(BOOL)isFirstPartyWorkout;
-(long long)internalState;
-(double)elapsedTimeAtDate:(id)arg1 ;
-(id)_initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 sessionServerState:(long long)arg3 applicationIdentifier:(id)arg4 elapsedTime:(double)arg5 snapshotDate:(id)arg6 ;
-(NSDate *)snapshotDate;
@end

