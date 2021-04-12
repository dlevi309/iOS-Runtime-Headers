/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray, UIPanGestureVelocitySample, NSArray;

@interface UIPanGestureRecognizer : UIGestureRecognizer {

	CGPoint _firstSceneReferenceLocation;
	CGPoint _lastSceneReferenceLocation;
	double _lastTouchTime;
	id _velocitySample;
	id _previousVelocitySample;
	NSMutableArray* _touches;
	unsigned long long _lastTouchCount;
	unsigned long long _minimumNumberOfTouches;
	unsigned long long _maximumNumberOfTouches;
	double _hysteresis;
	double _allowableSeparation;
	CGPoint _lastUnadjustedSceneReferenceLocation;
	double _allowableTouchTimeSeparation;
	unsigned _failsPastMaxTouches : 1;
	unsigned _failsPastHysteresisWithoutMinTouches : 1;
	unsigned _canPanHorizontally : 1;
	unsigned _canPanVertically : 1;
	unsigned _ignoresStationaryTouches : 1;
	unsigned _multitouchTimerOn : 1;
	unsigned _requiresImmediateMultipleTouches : 1;
	NSMutableArray* _movingTouches;
	CGPoint _digitizerLocation;
	BOOL _iOSMacUseNonacceleratedDelta;
	BOOL _iOSMacIgnoreScrollDirectionUserPreference;
	BOOL _iOSMacScrollingEnabled;
	long long _allowedScrollTypesMask;

}

@property (getter=_velocitySample,readonly) UIPanGestureVelocitySample * _velocitySample;                                                                                                         //@synthesize velocitySample=_velocitySample - In the implementation block
@property (getter=_previousVelocitySample,readonly) UIPanGestureVelocitySample * _previousVelocitySample;                                                                                         //@synthesize previousVelocitySample=_previousVelocitySample - In the implementation block
@property (setter=_setAllowedScrollTypes:,getter=_allowedScrollTypes,nonatomic,copy) NSArray * allowedScrollTypes; 
@property (assign,setter=_setiOSMacUseNonacceleratedDelta:,getter=_iOSMacUseNonacceleratedDelta,nonatomic) BOOL iOSMacUseNonacceleratedDelta;                                                     //@synthesize iOSMacUseNonacceleratedDelta=_iOSMacUseNonacceleratedDelta - In the implementation block
@property (assign,setter=_setiOSMacIgnoreScrollDirectionUserPreference:,getter=_iOSMacIgnoreScrollDirectionUserPreference,nonatomic) BOOL iOSMacIgnoreScrollDirectionUserPreference;              //@synthesize iOSMacIgnoreScrollDirectionUserPreference=_iOSMacIgnoreScrollDirectionUserPreference - In the implementation block
@property (assign,setter=_setiOSMacScrollingEnabled:,getter=_iOSMacScrollingEnabled,nonatomic) BOOL iOSMacScrollingEnabled;                                                                       //@synthesize iOSMacScrollingEnabled=_iOSMacScrollingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfTouches;                                                                                                                           //@synthesize minimumNumberOfTouches=_minimumNumberOfTouches - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;                                                                                                                           //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (assign,nonatomic) long long allowedScrollTypesMask;                                                                                                                                    //@synthesize allowedScrollTypesMask=_allowedScrollTypesMask - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
+(double)_defaultHysteresis;
+(void)_setPanGestureRecognizersEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowedScrollTypesMask:(long long)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(unsigned long long)_scrollDeviceCategory;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(double)_hysteresis;
-(void)_ignoreTouches:(id)arg1 forEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)_setHysteresis:(double)arg1 ;
-(void)_setFailsPastHysteresisWithoutMinTouches:(BOOL)arg1 ;
-(void)_setRequiresImmediateMultipleTouches:(BOOL)arg1 ;
-(void)_setAllowableTouchTimeSeparation:(double)arg1 ;
-(void)_setAllowableSeparation:(double)arg1 ;
-(BOOL)_failsPastHysteresisWithoutMinTouches;
-(unsigned long long)minimumNumberOfTouches;
-(void)setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(unsigned long long)maximumNumberOfTouches;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(void)_setCanPanHorizontally:(BOOL)arg1 ;
-(void)_setCanPanVertically:(BOOL)arg1 ;
-(CGPoint)_digitizerLocation;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(BOOL)_shouldReceiveScrollEvent:(id)arg1 ;
-(void)_scrollingChangedWithEvent:(id)arg1 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)_resetVelocitySamples;
-(double)_allowableSeparation;
-(UIPanGestureVelocitySample *)_velocitySample;
-(UIPanGestureVelocitySample *)_previousVelocitySample;
-(CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(UIOffset)_offsetInViewFromSceneReferenceLocation:(CGPoint)arg1 toSceneReferenceLocation:(CGPoint)arg2 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(double)_allowableTouchTimeSeparation;
-(id)_activeTouches;
-(void)clearMultitouchTimer;
-(void)multitouchExpired:(id)arg1 ;
-(CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(CGPoint)arg1 lockingToAxis:(unsigned long long)arg2 ;
-(double)_translationDistanceInSceneInSelfAxis:(CGPoint)arg1 ;
-(BOOL)_willScrollX;
-(BOOL)_willScrollY;
-(void)_updateDigitizerLocationWithEvent:(id)arg1 ;
-(BOOL)_touchesExceedAllowableSeparation;
-(BOOL)_requiresImmediateMultipleTouches;
-(void)startMultitouchTimer:(double)arg1 ;
-(void)_touchesListChangedFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_updateMovingTouchesArraySavingOldArray:(id*)arg1 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_removeHysteresisFromTranslation;
-(void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(/*^block*/id)arg2 ;
-(long long)allowedScrollTypesMask;
-(BOOL)_iOSMacUseNonacceleratedDelta;
-(BOOL)_iOSMacIgnoreScrollDirectionUserPreference;
-(void)_processScrollPhaseChanged:(id)arg1 ;
-(void)setFailsPastMaxTouches:(BOOL)arg1 ;
-(BOOL)failsPastMaxTouches;
-(long long)_lastTouchCount;
-(void)_setIgnoresStationaryTouches:(BOOL)arg1 ;
-(BOOL)_ignoresStationaryTouches;
-(BOOL)_canPanHorizontally;
-(BOOL)_canPanVertically;
-(void)_ignoreTouchForTouchIdentifier:(unsigned)arg1 ;
-(long long)_allowedScrollTypesMask;
-(void)_setAllowedScrollTypesMask:(long long)arg1 ;
-(id)_allowedScrollTypes;
-(void)_setAllowedScrollTypes:(id)arg1 ;
-(void)_setiOSMacScrollingEnabled:(BOOL)arg1 ;
-(BOOL)isIOSMacScrollingEnabled;
-(void)_setiOSMacUseNonacceleratedDelta:(BOOL)arg1 ;
-(void)_setiOSMacIgnoreScrollDirectionUserPreference:(BOOL)arg1 ;
-(BOOL)_iOSMacScrollingEnabled;
@end

