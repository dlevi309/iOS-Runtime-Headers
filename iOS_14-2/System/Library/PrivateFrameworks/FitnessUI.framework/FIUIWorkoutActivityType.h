/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, HKQuantity, NSString;

@interface FIUIWorkoutActivityType : NSObject <NSSecureCoding> {

	BOOL _isIndoor;
	unsigned long long _identifier;
	unsigned long long _auxiliaryTypeIdentifier;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) unsigned long long identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long auxiliaryTypeIdentifier;              //@synthesize auxiliaryTypeIdentifier=_auxiliaryTypeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long effectiveTypeIdentifier; 
@property (nonatomic,readonly) BOOL isIndoor; 
@property (nonatomic,readonly) BOOL isCategorizedOtherWorkout; 
@property (nonatomic,readonly) NSDictionary * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long swimmingLocationType; 
@property (nonatomic,readonly) HKQuantity * lapLength; 
@property (nonatomic,readonly) BOOL isWaterLockActivity; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)nonOptimizedActivityTypes;
+(id)optimizedActivityTypesWithIsWheelchairUser:(BOOL)arg1 isSwimmingSupported:(BOOL)arg2 ;
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 ;
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
+(id)wheelchairActivityTypes;
+(id)swimmingOptimizedActivityTypes;
+(id)otherWorkoutActivityTypes;
+(id)deprecatedActivityTypes;
+(id)swimmingOtherActivityTypes;
+(BOOL)shouldDisambiguateOnLocationType:(unsigned long long)arg1 ;
+(id)activityTypeWithWorkout:(id)arg1 ;
+(id)defaultActivityTypesWithIsWheelchairUser:(BOOL)arg1 isSwimmingSupported:(BOOL)arg2 activityMoveMode:(long long)arg3 ;
+(id)gymKitCapableActivityTypes;
+(id)unsupportedActivityTypesWithIsWheelchairUser:(BOOL)arg1 isSwimmingSupported:(BOOL)arg2 ;
+(id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(BOOL)arg4 ;
+(unsigned long long)mapWheelchairUserActivityType:(unsigned long long)arg1 isWheelchairUser:(BOOL)arg2 ;
-(id)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(id)description;
-(HKQuantity *)lapLength;
-(long long)swimmingLocationType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(NSDictionary *)metadata;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
-(BOOL)isIndoor;
-(unsigned long long)auxiliaryTypeIdentifier;
-(BOOL)isCategorizedOtherWorkout;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 ;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4 ;
-(unsigned long long)effectiveTypeIdentifier;
-(id)localizedNameComponents;
-(id)activityTypeByAddingLapLength:(double)arg1 ;
-(BOOL)isWaterLockActivity;
-(BOOL)hasLocationTypePool;
-(id)activityTypePlistKey;
@end

