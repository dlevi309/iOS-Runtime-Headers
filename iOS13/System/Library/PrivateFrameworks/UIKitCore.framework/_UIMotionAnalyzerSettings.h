/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISettings.h>

@interface _UIMotionAnalyzerSettings : _UISettings {

	BOOL _showIdleIndicator;
	BOOL _jumpEnabled;
	BOOL _playJumpSound;
	BOOL _directionalLockEnabled;
	BOOL _showDirectionalLockIndicators;
	BOOL _referenceShiftEnabled;
	double _inputSmoothingFactor;
	double _referenceShiftSpeed;
	double _idleLeeway;
	double _delayBeforeIdle;
	double _jumpThreshold;
	double _directionalLockThreshold;
	double _directionalLockStickiness;
	double _directionalLockSharpness;
	double _referenceShiftDistanceDependence;

}

@property (assign) double idleLeeway;                                    //@synthesize idleLeeway=_idleLeeway - In the implementation block
@property (assign) double delayBeforeIdle;                               //@synthesize delayBeforeIdle=_delayBeforeIdle - In the implementation block
@property (assign) BOOL showIdleIndicator;                               //@synthesize showIdleIndicator=_showIdleIndicator - In the implementation block
@property (assign) BOOL jumpEnabled;                                     //@synthesize jumpEnabled=_jumpEnabled - In the implementation block
@property (assign) double jumpThreshold;                                 //@synthesize jumpThreshold=_jumpThreshold - In the implementation block
@property (assign) BOOL playJumpSound;                                   //@synthesize playJumpSound=_playJumpSound - In the implementation block
@property (assign) BOOL directionalLockEnabled;                          //@synthesize directionalLockEnabled=_directionalLockEnabled - In the implementation block
@property (assign) double directionalLockThreshold;                      //@synthesize directionalLockThreshold=_directionalLockThreshold - In the implementation block
@property (assign) double directionalLockStickiness;                     //@synthesize directionalLockStickiness=_directionalLockStickiness - In the implementation block
@property (assign) double directionalLockSharpness;                      //@synthesize directionalLockSharpness=_directionalLockSharpness - In the implementation block
@property (assign) BOOL showDirectionalLockIndicators;                   //@synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators - In the implementation block
@property (assign) BOOL referenceShiftEnabled;                           //@synthesize referenceShiftEnabled=_referenceShiftEnabled - In the implementation block
@property (assign) double referenceShiftDistanceDependence;              //@synthesize referenceShiftDistanceDependence=_referenceShiftDistanceDependence - In the implementation block
@property (assign) double inputSmoothingFactor;                          //@synthesize inputSmoothingFactor=_inputSmoothingFactor - In the implementation block
@property (assign) double referenceShiftSpeed;                           //@synthesize referenceShiftSpeed=_referenceShiftSpeed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDefaultValues;
-(void)setInputSmoothingFactor:(double)arg1 ;
-(void)setReferenceShiftEnabled:(BOOL)arg1 ;
-(void)setReferenceShiftSpeed:(double)arg1 ;
-(void)setReferenceShiftDistanceDependence:(double)arg1 ;
-(void)setIdleLeeway:(double)arg1 ;
-(void)setDelayBeforeIdle:(double)arg1 ;
-(void)setShowIdleIndicator:(BOOL)arg1 ;
-(void)setJumpEnabled:(BOOL)arg1 ;
-(void)setJumpThreshold:(double)arg1 ;
-(void)setPlayJumpSound:(BOOL)arg1 ;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(void)setDirectionalLockThreshold:(double)arg1 ;
-(void)setDirectionalLockStickiness:(double)arg1 ;
-(void)setDirectionalLockSharpness:(double)arg1 ;
-(void)setShowDirectionalLockIndicators:(BOOL)arg1 ;
-(double)inputSmoothingFactor;
-(BOOL)referenceShiftEnabled;
-(double)referenceShiftSpeed;
-(double)referenceShiftDistanceDependence;
-(double)idleLeeway;
-(double)delayBeforeIdle;
-(BOOL)showIdleIndicator;
-(BOOL)jumpEnabled;
-(double)jumpThreshold;
-(BOOL)playJumpSound;
-(BOOL)directionalLockEnabled;
-(double)directionalLockThreshold;
-(double)directionalLockStickiness;
-(double)directionalLockSharpness;
-(BOOL)showDirectionalLockIndicators;
@end

