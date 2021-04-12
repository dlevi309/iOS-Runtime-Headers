/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 ;
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
+(id)wheelchairActivityTypes;
+(id)swimmingOptimizedActivityTypes;
+(id)swimmingOtherActivityTypes;
+(BOOL)shouldDisambiguateOnLocationType:(unsigned long long)arg1 ;
+(id)optimizedActivityTypesWithIsWheelchairUser:(BOOL)arg1 isSwimmingSupported:(BOOL)arg2 ;
+(id)activityTypeWithWorkout:(id)arg1 ;
+(id)defaultActivityTypesWithIsWheelchairUser:(BOOL)arg1 isSwimmingSupported:(BOOL)arg2 ;
+(id)gymKitCapableActivityTypes;
+(id)unsupportedActivityTypesWithIsWheelchairUser:(BOOL)arg1 isSwimmingSupported:(BOOL)arg2 ;
+(id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(BOOL)arg4 ;
+(unsigned long long)mapWheelchairUserActivityType:(unsigned long long)arg1 isWheelchairUser:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(id)localizedName;
-(NSString *)uniqueIdentifier;
-(NSDictionary *)metadata;
-(long long)swimmingLocationType;
-(HKQuantity *)lapLength;
-(BOOL)isIndoor;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 ;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4 ;
-(unsigned long long)auxiliaryTypeIdentifier;
-(unsigned long long)effectiveTypeIdentifier;
-(BOOL)isCategorizedOtherWorkout;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
-(id)localizedNameComponents;
-(id)activityTypeByAddingLapLength:(double)arg1 ;
-(BOOL)isWaterLockActivity;
-(BOOL)hasLocationTypePool;
-(id)activityTypePlistKey;
@end

