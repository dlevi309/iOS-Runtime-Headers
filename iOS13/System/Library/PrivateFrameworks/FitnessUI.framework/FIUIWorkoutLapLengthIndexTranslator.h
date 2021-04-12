/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

