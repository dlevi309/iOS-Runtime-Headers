/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKQuantity, NSUUID;

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _activityType;
	long long _locationType;
	long long _swimmingLocationType;
	HKQuantity* _lapLength;
	NSUUID* _fitnessMachineSessionUUID;
	NSUUID* _predictionSessionUUID;

}

@property (nonatomic,retain) NSUUID * fitnessMachineSessionUUID;              //@synthesize fitnessMachineSessionUUID=_fitnessMachineSessionUUID - In the implementation block
@property (nonatomic,retain) NSUUID * predictionSessionUUID;                  //@synthesize predictionSessionUUID=_predictionSessionUUID - In the implementation block
@property (assign) unsigned long long activityType;                           //@synthesize activityType=_activityType - In the implementation block
@property (assign) long long locationType;                                    //@synthesize locationType=_locationType - In the implementation block
@property (assign) long long swimmingLocationType;                            //@synthesize swimmingLocationType=_swimmingLocationType - In the implementation block
@property (copy) HKQuantity * lapLength;                                      //@synthesize lapLength=_lapLength - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_workoutConfigurationFromDictionary:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)activityType;
-(id)_dictionaryRepresentation;
-(void)setActivityType:(unsigned long long)arg1 ;
-(long long)locationType;
-(void)setLocationType:(long long)arg1 ;
-(void)setSwimmingLocationType:(long long)arg1 ;
-(void)setLapLength:(HKQuantity *)arg1 ;
-(void)setFitnessMachineSessionUUID:(NSUUID *)arg1 ;
-(BOOL)validateAndReturnError:(id*)arg1 ;
-(long long)swimmingLocationType;
-(HKQuantity *)lapLength;
-(NSUUID *)fitnessMachineSessionUUID;
-(NSUUID *)predictionSessionUUID;
-(void)setPredictionSessionUUID:(NSUUID *)arg1 ;
@end

