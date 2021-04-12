/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIScrollEventRespondable.h>

@class NSMutableArray, UIPanGestureVelocitySample, NSArray, NSString;

@interface UIPanGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable> {

	CGPoint _firstSceneReferenceLocation;
	CGPoint _lastSceneReferenceLocation;
	double _lastTouchTime;
	NSMutableArray* _touches;
	unsigned long long _lastTouchCount;
	unsigned long long _minimumNumberOfTouches;
	unsigned long long _maximumNumberOfTouches;
	double _hysteresis;
	double _allowableSeparation;
	CGPoint _lastUnadjustedSceneReferenceLocation;
	double _allowableTouchTimeSeparation;
	unsigned _delegateImplementsShouldTryToBeginHorizontally : 1;
	unsigned _delegateImplementsShouldTryToBeginVertically : 1;
	unsigned _failsPastMaxTouches : 1;
	unsigned _failsPastHysteresisWithoutMinTouches : 1;
	unsigned _canPanHorizontally : 1;
	unsigned _canPanVertically : 1;
	unsigned _delegateAllowsPanHorizontally : 1;
	unsigned _delegateAllowsPanVertically : 1;
	unsigned _queriedDelegateAllowsPanHorizontally : 1;
	unsigned _queriedDelegateAllowsPanVertically : 1;
	unsigned _ignoresStationaryTouches : 1;
	unsigned _multitouchTimerOn : 1;
	unsigned _requiresImmediateMultipleTouches : 1;
	NSMutableArray* _movingTouches;
	CGPoint _digitizerLocation;
	UIPanGestureVelocitySample* _velocitySample;
	UIPanGestureVelocitySample* _previousVelocitySample;
	BOOL _iOSMacUseNonacceleratedDelta;
	BOOL _iOSMacIgnoreScrollDirectionUserPreference;
	BOOL _iOSMacScrollingEnabled;
	long long _allowedScrollTypesMask;

}

@property (assign,nonatomic) BOOL failsPastMaxTouches; 
@property (setter=_setAllowedScrollTypes:,getter=_allowedScrollTypes,nonatomic,copy) NSArray * allowedScrollTypes; 
@property (assign,setter=_setiOSMacUseNonacceleratedDelta:,getter=_iOSMacUseNonacceleratedDelta,nonatomic) BOOL iOSMacUseNonacceleratedDelta;                                                     //@synthesize iOSMacUseNonacceleratedDelta=_iOSMacUseNonacceleratedDelta - In the implementation block
@property (assign,setter=_setiOSMacIgnoreScrollDirectionUserPreference:,getter=_iOSMacIgnoreScrollDirectionUserPreference,nonatomic) BOOL iOSMacIgnoreScrollDirectionUserPreference;              //@synthesize iOSMacIgnoreScrollDirectionUserPreference=_iOSMacIgnoreScrollDirectionUserPreference - In the implementation block
@property (assign,setter=_setiOSMacScrollingEnabled:,getter=_iOSMacScrollingEnabled,nonatomic) BOOL iOSMacScrollingEnabled;                                                                       //@synthesize iOSMacScrollingEnabled=_iOSMacScrollingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfTouches;                                                                                                                           //@synthesize minimumNumberOfTouches=_minimumNumberOfTouches - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;                                                                                                                           //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (assign,nonatomic) long long allowedScrollTypesMask;                                                                                                                                    //@synthesize allowedScrollTypesMask=_allowedScrollTypesMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
+(double)_defaultHysteresis;
+(void)_setPanGestureRecognizersEnabled:(BOOL)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(void)startMultitouchTimer:(double)arg1 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(void)multitouchExpired:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(void)clearMultitouchTimer;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_resetGestureRecognizer;
-(double)_hysteresis;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)minimumNumberOfTouches;
-(void)setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)_setCanPanHorizontally:(BOOL)arg1 ;
-(void)_setCanPanVertically:(BOOL)arg1 ;
-(unsigned long long)maximumNumberOfTouches;
-(BOOL)shouldReceiveEvent:(id)arg1 ;
-(BOOL)_isGestureType:(long long)arg1 ;
-(long long)allowedScrollTypesMask;
-(BOOL)_failsPastHysteresisWithoutMinTouches;
-(id)initWithCoder:(id)arg1 ;
-(void)_scrollingChangedWithEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)_setiOSMacUseNonacceleratedDelta:(BOOL)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowedScrollTypesMask:(long long)arg1 ;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(void)_setFailsPastHysteresisWithoutMinTouches:(BOOL)arg1 ;
-(void)_setRequiresImmediateMultipleTouches:(BOOL)arg1 ;
-(void)_setHysteresis:(double)arg1 ;
-(void)_setAllowableTouchTimeSeparation:(double)arg1 ;
-(void)_setAllowableSeparation:(double)arg1 ;
-(double)_allowableSeparation;
-(double)_allowableTouchTimeSeparation;
-(void)_touchesListChangedFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_shouldBeginHorizontally:(BOOL)arg1 vertically:(BOOL)arg2 withEvent:(id)arg3 ;
-(BOOL)_touchesExceedAllowableSeparation;
-(void)setFailsPastMaxTouches:(BOOL)arg1 ;
-(BOOL)_requiresImmediateMultipleTouches;
-(BOOL)failsPastMaxTouches;
-(BOOL)_updateMovingTouchesArraySavingOldArray:(id*)arg1 ;
-(BOOL)_canPanVertically;
-(void)_removeHysteresisFromTranslation;
-(long long)_allowedScrollTypesMask;
-(void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(/*^block*/id)arg2 ;
-(BOOL)_iOSMacUseNonacceleratedDelta;
-(void)_processScrollPhaseChanged:(id)arg1 ;
-(BOOL)_iOSMacIgnoreScrollDirectionUserPreference;
-(BOOL)_canPanHorizontally;
-(void)_ignoreTouchForTouchIdentifier:(unsigned)arg1 ;
-(id)_allowedScrollTypes;
-(void)_setAllowedScrollTypesMask:(long long)arg1 ;
-(void)_setAllowedScrollTypes:(id)arg1 ;
-(void)_setiOSMacScrollingEnabled:(BOOL)arg1 ;
-(BOOL)isIOSMacScrollingEnabled;
-(void)_setiOSMacIgnoreScrollDirectionUserPreference:(BOOL)arg1 ;
-(BOOL)_iOSMacScrollingEnabled;
-(CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
@end

