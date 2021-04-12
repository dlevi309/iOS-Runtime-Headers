/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIForceLevelClassifier.h>

@interface _UILinearForceLevelClassifier : _UIForceLevelClassifier {

	double _smoothedForce;
	BOOL _anyForceObservations;
	double _smoothedImpulse;
	long long _impulseObservationState;
	double _lastForceForImpulse;
	double _lastTimestampForImpulse;
	double _revealThreshold;
	double _standardThreshold;
	double _strongThreshold;
	double _smoothingFactor;
	double _impulseSmoothingFactor;

}

@property (assign,nonatomic) double revealThreshold;                     //@synthesize revealThreshold=_revealThreshold - In the implementation block
@property (assign,nonatomic) double standardThreshold;                   //@synthesize standardThreshold=_standardThreshold - In the implementation block
@property (assign,nonatomic) double strongThreshold;                     //@synthesize strongThreshold=_strongThreshold - In the implementation block
@property (assign,nonatomic) double smoothingFactor;                     //@synthesize smoothingFactor=_smoothingFactor - In the implementation block
@property (nonatomic,readonly) double currentImpulse; 
@property (assign,nonatomic) double impulseSmoothingFactor;              //@synthesize impulseSmoothingFactor=_impulseSmoothingFactor - In the implementation block
-(void)_updateForceWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2 ;
-(void)touchForceMultiplierDidChange;
-(void)setImpulseSmoothingFactor:(double)arg1 ;
-(id)init;
-(void)setStrongThreshold:(double)arg1 ;
-(double)currentImpulse;
-(id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2 ;
-(void)_updateImpulseWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2 ;
-(double)impulseSmoothingFactor;
-(double)_thresholdForForceLevel:(long long)arg1 ;
-(void)setRevealThreshold:(double)arg1 ;
-(double)_calculateProgressOfTouchForceValue:(double)arg1 toForceLevel:(long long)arg2 minimumRequiredForceLevel:(long long)arg3 ;
-(long long)_forceLevelForTouchForceValue:(double)arg1 ;
-(double)standardThreshold;
-(void)reset;
-(double)strongThreshold;
-(double)smoothingFactor;
-(void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(double)revealThreshold;
-(void)setSmoothingFactor:(double)arg1 ;
-(void)debuggingPropertyForKey:(id)arg1 changedToValue:(id)arg2 ;
-(void)setStandardThreshold:(double)arg1 ;
-(double)_instantaneousImpulseForTouchForceValue:(double)arg1 atTimestamp:(double)arg2 ;
-(void)dealloc;
@end

