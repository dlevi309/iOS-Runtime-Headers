/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@interface NLWorkoutTargetZone : NSObject {

	long long _type;
	double _min;
	double _max;
	double _currentValue;

}

@property (nonatomic,readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double min;                       //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) double max;                       //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) double currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,readonly) BOOL enabled; 
+(id)restoreFromDictionary:(id)arg1 activityType:(id)arg2 ;
+(id)restoreFromDictionary:(id)arg1 ;
+(long long)mapTargetZoneTypeStringToEnum:(id)arg1 ;
+(id)mapTargetZoneTypeEnumToString:(long long)arg1 ;
+(id)serializeTargetZone:(id)arg1 ;
+(unsigned long long)stateForZone:(id)arg1 distanceUnit:(id)arg2 ;
+(id)targetZoneForActivityType:(id)arg1 ;
+(void)saveTargetZone:(id)arg1 forActivityType:(id)arg2 ;
+(id)targetZoneFromMetadata:(id)arg1 ;
+(id)metadataForTargetZone:(id)arg1 ;
-(BOOL)enabled;
-(double)min;
-(id)description;
-(double)max;
-(long long)type;
-(unsigned long long)hash;
-(double)currentValue;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(long long)arg1 min:(double)arg2 max:(double)arg3 currentValue:(double)arg4 ;
-(BOOL)isSingleThreshold;
@end

