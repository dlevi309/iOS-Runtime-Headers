/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILongPressGestureRecognizer.h>

@class UIKBPanGestureVelocitySample;

@interface _UITextSelectionForceGesture : UILongPressGestureRecognizer {

	BOOL _shouldFailWithoutForce;
	BOOL _didLongPress;
	BOOL _touchEclipsesVelocity;
	UIKBPanGestureVelocitySample* _velocitySample;
	UIKBPanGestureVelocitySample* _previousVelocitySample;
	UIKBPanGestureVelocitySample* _liftOffSample;
	double _increasingForceTimestamp;
	double _lastTouchTime;
	long long _liftOffState;
	long long _increasingForceState;
	CGPoint _lastSceneReferenceLocation;
	CGPoint _lastUnadjustedSceneReferenceLocation;
	CGRect _velocityRange;

}

@property (assign,nonatomic) BOOL didLongPress;                                                                          //@synthesize didLongPress=_didLongPress - In the implementation block
@property (getter=_velocitySample,readonly) UIKBPanGestureVelocitySample * _velocitySample;                              //@synthesize velocitySample=_velocitySample - In the implementation block
@property (getter=_previousVelocitySample,readonly) UIKBPanGestureVelocitySample * _previousVelocitySample;              //@synthesize previousVelocitySample=_previousVelocitySample - In the implementation block
@property (getter=_liftOffSample,readonly) UIKBPanGestureVelocitySample * _liftOffSample;                                //@synthesize liftOffSample=_liftOffSample - In the implementation block
@property (assign,nonatomic) double increasingForceTimestamp;                                                            //@synthesize increasingForceTimestamp=_increasingForceTimestamp - In the implementation block
@property (assign,nonatomic) double lastTouchTime;                                                                       //@synthesize lastTouchTime=_lastTouchTime - In the implementation block
@property (assign,nonatomic) CGPoint lastSceneReferenceLocation;                                                         //@synthesize lastSceneReferenceLocation=_lastSceneReferenceLocation - In the implementation block
@property (assign,nonatomic) CGPoint lastUnadjustedSceneReferenceLocation;                                               //@synthesize lastUnadjustedSceneReferenceLocation=_lastUnadjustedSceneReferenceLocation - In the implementation block
@property (assign,nonatomic) long long liftOffState;                                                                     //@synthesize liftOffState=_liftOffState - In the implementation block
@property (assign,nonatomic) long long increasingForceState;                                                             //@synthesize increasingForceState=_increasingForceState - In the implementation block
@property (assign,nonatomic) CGRect velocityRange;                                                                       //@synthesize velocityRange=_velocityRange - In the implementation block
@property (assign,nonatomic) BOOL touchEclipsesVelocity;                                                                 //@synthesize touchEclipsesVelocity=_touchEclipsesVelocity - In the implementation block
@property (assign,nonatomic) BOOL shouldFailWithoutForce;                                                                //@synthesize shouldFailWithoutForce=_shouldFailWithoutForce - In the implementation block
-(BOOL)forceHasIncreasedForTimeInterval:(double)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(void)enoughTimeElapsed:(id)arg1 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(UIKBPanGestureVelocitySample *)_liftOffSample;
-(void)setShouldFailWithoutForce:(BOOL)arg1 ;
-(void)setIncreasingForceState:(long long)arg1 ;
-(void)_resetVelocitySamples;
-(CGPoint)lastUnadjustedSceneReferenceLocation;
-(void)setLastSceneReferenceLocation:(CGPoint)arg1 ;
-(BOOL)shouldFailWithoutForce;
-(double)lastTouchTime;
-(UIKBPanGestureVelocitySample *)_velocitySample;
-(UIKBPanGestureVelocitySample *)_previousVelocitySample;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(CGPoint)lastSceneReferenceLocation;
-(CGPoint)_centroidInView:(id)arg1 ;
-(double)increasingForceTimestamp;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(BOOL)touchEclipsesVelocity;
-(void)setLiftOffState:(long long)arg1 ;
-(long long)increasingForceState;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setVelocityRange:(CGRect)arg1 ;
-(CGRect)velocityRange;
-(void)setTouchEclipsesVelocity:(BOOL)arg1 ;
-(void)setDidLongPress:(BOOL)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(UIOffset)_offsetInViewFromSceneReferenceLocation:(CGPoint)arg1 toSceneReferenceLocation:(CGPoint)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setLastTouchTime:(double)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3 ;
-(BOOL)didLongPress;
-(void)_updateLiftOffState;
-(void)reset;
-(BOOL)shouldResetRangeForVelocity:(CGPoint)arg1 previousVelocity:(CGPoint)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(CGPoint)arg1 ;
-(CGPoint)_locationOfTouches:(id)arg1 ;
-(long long)liftOffState;
-(void)setIncreasingForceTimestamp:(double)arg1 ;
-(void)dealloc;
-(void)setLastUnadjustedSceneReferenceLocation:(CGPoint)arg1 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
@end

