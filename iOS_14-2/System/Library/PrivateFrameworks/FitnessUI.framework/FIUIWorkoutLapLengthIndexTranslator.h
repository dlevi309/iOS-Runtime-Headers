/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class HKUnit;

@interface FIUIWorkoutLapLengthIndexTranslator : NSObject {

	HKUnit* _distanceUnit;

}

@property (nonatomic,retain) HKUnit * distanceUnit;              //@synthesize distanceUnit=_distanceUnit - In the implementation block
-(void)setDistanceUnit:(HKUnit *)arg1 ;
-(HKUnit *)distanceUnit;
-(double)valueForIndex:(long long)arg1 ;
-(long long)indexForValue:(double)arg1 ;
-(double)valueTranslatedIntoDistanceUnit:(double)arg1 ;
-(double)valueTranslatedFromDistanceUnit:(double)arg1 ;
-(id)initWithDistanceUnit:(id)arg1 ;
@end

