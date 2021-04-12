/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKQuantity, NSUUID;

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldDisambiguateLocation;
	unsigned long long _activityType;
	long long _locationType;
	long long _swimmingLocationType;
	HKQuantity* _lapLength;
	NSUUID* _fitnessMachineSessionUUID;
	NSUUID* _predictionSessionUUID;

}

@property (nonatomic,retain) NSUUID * fitnessMachineSessionUUID;              //@synthesize fitnessMachineSessionUUID=_fitnessMachineSessionUUID - In the implementation block
@property (nonatomic,retain) NSUUID * predictionSessionUUID;                  //@synthesize predictionSessionUUID=_predictionSessionUUID - In the implementation block
@property (assign,nonatomic) BOOL shouldDisambiguateLocation;                 //@synthesize shouldDisambiguateLocation=_shouldDisambiguateLocation - In the implementation block
@property (assign) unsigned long long activityType;                           //@synthesize activityType=_activityType - In the implementation block
@property (assign) long long locationType;                                    //@synthesize locationType=_locationType - In the implementation block
@property (assign) long long swimmingLocationType;                            //@synthesize swimmingLocationType=_swimmingLocationType - In the implementation block
@property (copy) HKQuantity * lapLength;                                      //@synthesize lapLength=_lapLength - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_workoutConfigurationFromDictionary:(id)arg1 ;
-(void)setActivityType:(unsigned long long)arg1 ;
-(unsigned long long)activityType;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setLocationType:(long long)arg1 ;
-(id)description;
-(HKQuantity *)lapLength;
-(long long)locationType;
-(void)setSwimmingLocationType:(long long)arg1 ;
-(void)setLapLength:(HKQuantity *)arg1 ;
-(void)setFitnessMachineSessionUUID:(NSUUID *)arg1 ;
-(void)setShouldDisambiguateLocation:(BOOL)arg1 ;
-(BOOL)validateAndReturnError:(id*)arg1 ;
-(long long)swimmingLocationType;
-(NSUUID *)fitnessMachineSessionUUID;
-(NSUUID *)predictionSessionUUID;
-(void)setPredictionSessionUUID:(NSUUID *)arg1 ;
-(BOOL)shouldDisambiguateLocation;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

