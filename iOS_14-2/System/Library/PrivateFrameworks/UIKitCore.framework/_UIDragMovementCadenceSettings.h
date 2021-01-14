/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIDragMovementCadenceSettings : NSObject {

	double _velocityMagnitudeThreshold;
	double _dwellTimeThreshold;

}

@property (assign,nonatomic) double velocityMagnitudeThreshold;              //@synthesize velocityMagnitudeThreshold=_velocityMagnitudeThreshold - In the implementation block
@property (assign,nonatomic) double dwellTimeThreshold;                      //@synthesize dwellTimeThreshold=_dwellTimeThreshold - In the implementation block
+(id)defaultSettingsForMovementPhase:(long long)arg1 cadence:(long long)arg2 ;
-(void)_applyInteractiveReorderSubsequentPhaseDefaultsForCadence:(long long)arg1 ;
-(void)_applyDragPlaceholderSubsequentPhaseDefaultsForCadence:(long long)arg1 ;
-(void)_applyInteractiveReorderInitialPhaseDefaultsForCadence:(long long)arg1 ;
-(id)initWithVelocityMagnitudeThreshold:(double)arg1 dwellTimeThreshold:(double)arg2 ;
-(void)_applyDragPlaceholderInitialPhaseDefaultsForCadence:(long long)arg1 ;
-(double)velocityMagnitudeThreshold;
-(id)initWithMovementPhase:(long long)arg1 cadence:(long long)arg2 ;
-(void)_applyImmediateSettings;
-(void)setDwellTimeThreshold:(double)arg1 ;
-(void)setVelocityMagnitudeThreshold:(double)arg1 ;
-(double)dwellTimeThreshold;
@end

