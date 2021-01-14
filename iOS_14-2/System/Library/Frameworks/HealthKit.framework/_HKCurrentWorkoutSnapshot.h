/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 sessionServerState:(long long)arg3 applicationIdentifier:(id)arg4 elapsedTime:(double)arg5 snapshotDate:(id)arg6 ;
-(long long)sessionState;
-(NSDate *)snapshotDate;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)internalState;
-(NSString *)applicationIdentifier;
-(NSUUID *)sessionIdentifier;
-(double)elapsedTime;
-(id)description;
-(BOOL)isFirstPartyWorkout;
-(HKWorkoutConfiguration *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(double)elapsedTimeAtDate:(id)arg1 ;
@end

