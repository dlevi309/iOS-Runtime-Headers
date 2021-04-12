/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)type;
-(BOOL)enabled;
-(double)max;
-(double)min;
-(double)currentValue;
-(id)initWithType:(long long)arg1 min:(double)arg2 max:(double)arg3 currentValue:(double)arg4 ;
-(BOOL)isSingleThreshold;
@end

