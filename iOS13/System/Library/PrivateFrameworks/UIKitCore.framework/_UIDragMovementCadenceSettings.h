/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIDragMovementCadenceSettings : NSObject {

	double _velocityMagnitudeThreshold;
	double _dwellTimeThreshold;

}

@property (assign,nonatomic) double velocityMagnitudeThreshold;              //@synthesize velocityMagnitudeThreshold=_velocityMagnitudeThreshold - In the implementation block
@property (assign,nonatomic) double dwellTimeThreshold;                      //@synthesize dwellTimeThreshold=_dwellTimeThreshold - In the implementation block
+(id)defaultSettingsForMovementPhase:(long long)arg1 cadence:(long long)arg2 ;
-(double)dwellTimeThreshold;
-(double)velocityMagnitudeThreshold;
-(id)initWithVelocityMagnitudeThreshold:(double)arg1 dwellTimeThreshold:(double)arg2 ;
-(void)_applyDragPlaceholderInitialPhaseDefaultsForCadence:(long long)arg1 ;
-(void)_applyDragPlaceholderSubsequentPhaseDefaultsForCadence:(long long)arg1 ;
-(id)initWithMovementPhase:(long long)arg1 cadence:(long long)arg2 ;
-(void)_applyImmediateSettings;
-(void)setDwellTimeThreshold:(double)arg1 ;
-(void)setVelocityMagnitudeThreshold:(double)arg1 ;
-(void)_applyInteractiveReorderInitialPhaseDefaultsForCadence:(long long)arg1 ;
-(void)_applyInteractiveReorderSubsequentPhaseDefaultsForCadence:(long long)arg1 ;
@end

