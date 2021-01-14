/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKit/UIViewAnimatingPrivate.h>
#import <UIKit/UIViewImplicitlyAnimating.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UITimingCurveProvider;
@class UIViewPropertyAnimatorTrackingState, NSString, CAMediaTimingFunction, _UICompoundObjectMap, _UIAppCACommitFuture, UIViewAnimationState, NSUUID, NSMutableArray, NSMutableDictionary, NSArray;

@interface UIViewPropertyAnimator : NSObject <_UIBasicAnimationFactory, UIInteractionProgressObserver, UIViewAnimatingPrivate, UIViewImplicitlyAnimating, NSCopying> {

	UIViewPropertyAnimatorTrackingState* _trackingState;
	NSString* _trackingDescription;
	double _fractionComplete;
	double _fractionCompleteWhenContinued;
	double _drag;
	BOOL _running;
	BOOL _reversed;
	BOOL _pausedAsSpring;
	BOOL _optionsAreExplicit;
	BOOL _addedPacingAnimation;
	BOOL _hasFinalized;
	double _baseDuration;
	double _internalDuration;
	double _delay;
	UIViewPropertyAnimator* _outerAnimator;
	NSString* _pacingAnimationKey;
	CAMediaTimingFunction* _timingFunctionPriorToPause;
	CAMediaTimingFunction* _timingFunctionWhenPaused;
	id<UITimingCurveProvider> _timingProviderWhenContinued;
	_UICompoundObjectMap* _originalToValueMap;
	_UICompoundObjectMap* _originalFromValueMap;
	_UICompoundObjectMap* _additiveOffsetsForAnimationKeysMap;
	_UICompoundObjectMap* _continuedWithSpringForAnimationKeyMap;
	_UIAppCACommitFuture* _caContinuationCommitFuture;
	BOOL _useCoreAnimation;
	BOOL _pausesOnCompletion;
	BOOL _userInteractionEnabled;
	BOOL _manualHitTestingEnabled;
	BOOL _interruptible;
	BOOL _scrubsLinearly;
	BOOL _starting;
	BOOL _pausedOnCompletion;
	BOOL _shouldLayoutSubviews;
	BOOL _introspectable;
	UIViewAnimationState* _viewAnimationState;
	NSUUID* _trackingIdentifier;
	id<UITimingCurveProvider> _timingParameters;
	long long _animationState;
	NSMutableArray* _animations;
	NSMutableArray* _completions;
	long long _finishingPosition;
	NSMutableDictionary* _animationDescriptionMap;
	unsigned long long _options;

}

@property (assign,setter=_setAnimationState:,getter=_animationState,nonatomic) long long animationState;                                                    //@synthesize animationState=_animationState - In the implementation block
@property (nonatomic,readonly) BOOL useCoreAnimation;                                                                                                       //@synthesize useCoreAnimation=_useCoreAnimation - In the implementation block
@property (assign,nonatomic) double internalDuration;                                                                                                       //@synthesize internalDuration=_internalDuration - In the implementation block
@property (setter=_setAnimations:,getter=_animations,nonatomic,retain) NSMutableArray * animations;                                                         //@synthesize animations=_animations - In the implementation block
@property (setter=_setCompletions:,getter=_completions,nonatomic,retain) NSMutableArray * completions;                                                      //@synthesize completions=_completions - In the implementation block
@property (setter=_setViewAnimationState:,getter=_viewAnimationState,nonatomic,retain) UIViewAnimationState * viewAnimationState;                           //@synthesize viewAnimationState=_viewAnimationState - In the implementation block
@property (setter=_setTrackingIdentifier:,getter=_trackingIdentifier,nonatomic,retain) NSUUID * trackingIdentifier;                                         //@synthesize trackingIdentifier=_trackingIdentifier - In the implementation block
@property (assign,setter=_setFinishingPosition:,getter=_finishingPosition,nonatomic) long long finishingPosition;                                           //@synthesize finishingPosition=_finishingPosition - In the implementation block
@property (setter=setAnimationDescriptionMap:,getter=_animationDescriptionMap,nonatomic,retain) NSMutableDictionary * animationDescriptionMap;              //@synthesize animationDescriptionMap=_animationDescriptionMap - In the implementation block
@property (assign,setter=_setOptions:,getter=_options,nonatomic) unsigned long long options;                                                                //@synthesize options=_options - In the implementation block
@property (assign,setter=_setStarting:,getter=_isStarting,nonatomic) BOOL starting;                                                                         //@synthesize starting=_starting - In the implementation block
@property (assign,setter=_setPausedOnCompletion:,getter=_isPausedOnCompletion,nonatomic) BOOL pausedOnCompletion;                                           //@synthesize pausedOnCompletion=_pausedOnCompletion - In the implementation block
@property (setter=_setTimingParameters:,nonatomic,copy) id<UITimingCurveProvider> timingParameters;                                                         //@synthesize timingParameters=_timingParameters - In the implementation block
@property (assign,setter=_setShouldLayoutSubviews:,nonatomic) BOOL shouldLayoutSubviews;                                                                    //@synthesize shouldLayoutSubviews=_shouldLayoutSubviews - In the implementation block
@property (assign,nonatomic) double pacedFractionComplete; 
@property (assign,getter=isIntrospectable,nonatomic) BOOL introspectable;                                                                                   //@synthesize introspectable=_introspectable - In the implementation block
@property (nonatomic,readonly) NSArray * animationDescriptions; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                                                                   //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (assign,getter=isManualHitTestingEnabled,nonatomic) BOOL manualHitTestingEnabled;                                                                 //@synthesize manualHitTestingEnabled=_manualHitTestingEnabled - In the implementation block
@property (assign,getter=isInterruptible,nonatomic) BOOL interruptible;                                                                                     //@synthesize interruptible=_interruptible - In the implementation block
@property (assign,nonatomic) BOOL scrubsLinearly;                                                                                                           //@synthesize scrubsLinearly=_scrubsLinearly - In the implementation block
@property (assign,nonatomic) BOOL pausesOnCompletion;                                                                                                       //@synthesize pausesOnCompletion=_pausesOnCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double unitDuration; 
@property (nonatomic,readonly) long long state; 
@property (getter=isRunning,nonatomic,readonly) BOOL running;                                                                                               //@synthesize running=_running - In the implementation block
@property (assign,getter=isReversed,nonatomic) BOOL reversed;                                                                                               //@synthesize reversed=_reversed - In the implementation block
@property (assign,nonatomic) double fractionComplete; 
+(BOOL)_trackedAnimationsStartPaused;
+(id)_animatorForTrackedAnimationsUUID:(id)arg1 ;
+(void)_removeTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3 ;
+(id)_getPropertyAnimationForState:(id)arg1 ;
+(void)_setTrackedAnimationsStartPaused:(BOOL)arg1 ;
+(id)observedsOfAnimatorWithTrackingId:(id)arg1 ;
+(id)_animatorWithTimingAttributesMatchingAnimation:(id)arg1 forLayer:(id)arg2 wasReused:(BOOL*)arg3 ;
+(void)_setTrackedAnimationsUserInteractionEnabled:(BOOL)arg1 ;
+(void)removeObserved:(id)arg1 forObservingAnimatorWithId:(id)arg2 ;
+(double)_delayForAnimation:(id)arg1 forLayer:(id)arg2 ;
+(BOOL)_trackedAnimationsScrubLinearly;
+(id)_animatorsForTrackedAnimationsUUID:(id)arg1 ;
+(void)_removeReferenceToActivePropertyAnimator:(id)arg1 ;
+(id)_currentPropertyAnimator;
+(id)runningPropertyAnimatorWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(id)_currentTrackedAnimationsUUID;
+(id)_currentTrackedAnimationsState;
+(id)_performWhileTrackingAnimations:(/*^block*/id)arg1 ;
+(void)animator:(id)arg1 isObserving:(id)arg2 ;
+(id)_trackAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forAnimationKey:(id)arg3 trackingSetup:(/*^block*/id)arg4 ;
+(void)_setTrackedAnimationsScrubLinearly:(BOOL)arg1 ;
+(id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2 forAnimatorWithTrackingIdentifier:(id)arg3 ;
+(void)_removeReferenceToPropertyAnimatorWithTrackingIdentifier:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)_saveReferenceToActivePropertyAnimator:(id)arg1 ;
+(id)_propertyAnimatorWithUUID:(id)arg1 ;
+(id)_trackAdditiveAnimationWithAnimator:(id)arg1 nonAdditiveAnimation:(id)arg2 withAnimationKey:(id)arg3 forKeyPath:(id)arg4 forLayer:(id)arg5 ;
+(void)_setTrackedAnimationsOptimizationsEnabled:(BOOL)arg1 ;
+(BOOL)_trackedAnimationsUserInteractionEnabled;
+(id)_startTrackingAnimations;
+(/*^block*/id)_animationBlockForTrackingAnimation:(id)arg1 animator:(id)arg2 trackingSetup:(/*^block*/id)arg3 ;
+(void)_finishTrackingAnimations;
+(BOOL)_canEnableTrackingAnimationsWithAnimators;
+(void)_saveTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3 ;
+(id)_trackNonAdditiveAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3 ;
+(void)removeAllObservedForObservingAnimatorWithId:(id)arg1 ;
+(BOOL)_containsAnimatorForTrackedAnimationsUUID:(id)arg1 ;
+(void)_saveReferenceToPropertyAnimator:(id)arg1 ;
+(BOOL)_trackedAnimationsOptimizationsEnabled;
+(BOOL)_trackingAnimationsCurrentlyEnabled;
-(id)_originalToValueForKey:(id)arg1 inLayer:(id)arg2 ;
-(void)_setupAnimationTracking:(/*^block*/id)arg1 ;
-(BOOL)_isActive;
-(id)_trackingIdentifier;
-(void)_clearAnimationState;
-(id)_animationDescriptionMap;
-(void)addAnimations:(/*^block*/id)arg1 delayFactor:(double)arg2 durationFactor:(double)arg3 ;
-(id)initWithDuration:(double)arg1 timingParameters:(id)arg2 ;
-(void)_runCompletions:(long long)arg1 finished:(BOOL)arg2 ;
-(id)_previousAnimatorForKeyPath:(id)arg1 inLayer:(id)arg2 compoundKeys:(id*)arg3 ;
-(void)stopAnimation:(BOOL)arg1 ;
-(void)setIntrospectable:(BOOL)arg1 ;
-(void)_setAnimations:(id)arg1 ;
-(void)setFractionComplete:(double)arg1 ;
-(void)_setKVOCompliantReversed:(BOOL)arg1 ;
-(void)_setKVOCompliantState:(long long)arg1 fromState:(long long)arg2 ;
-(double)_pauseAnimation:(id)arg1 ;
-(void)setScrubsLinearly:(BOOL)arg1 ;
-(void)setReversed:(BOOL)arg1 ;
-(BOOL)useCoreAnimation;
-(id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2 ;
-(id)initWithDuration:(double)arg1 curve:(long long)arg2 animations:(/*^block*/id)arg3 ;
-(void)_setAddedPacingAnimation:(BOOL)arg1 animationKey:(id)arg2 ;
-(void)finalizeStoppedAnimationWithPosition:(long long)arg1 ;
-(void)_setAnimationState:(long long)arg1 ;
-(void)startAnimationAsPaused:(BOOL)arg1 ;
-(void)_setKVOCompliantRunning:(BOOL)arg1 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_setKVOCompliantState:(long long)arg1 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(CGVector)arg4 animations:(/*^block*/id)arg5 ;
-(void)_scheduleCACommitFuture;
-(id)timingFunctionForPause;
-(void)pauseAnimationTransiently;
-(void)_setOriginalToValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3 ;
-(void)pauseAnimation;
-(void)setUnitDuration:(double)arg1 ;
-(double)fractionComplete;
-(void)_setTrackingIdentifier:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setShouldLayoutSubviews:(BOOL)arg1 ;
-(void)finishAnimationAtPosition:(long long)arg1 ;
-(void)_setOptions:(unsigned long long)arg1 ;
-(BOOL)pausesOnCompletion;
-(id)initWithDuration:(double)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 animations:(/*^block*/id)arg4 ;
-(void)_setupWithDuration:(double)arg1 timingParameters:(id)arg2 animations:(/*^block*/id)arg3 ;
-(double)internalDuration;
-(id<UITimingCurveProvider>)timingParameters;
-(BOOL)_wasContinuedWithNewSpringForAnimationKey:(id)arg1 forLayer:(id)arg2 ;
-(double)pacedFractionComplete;
-(void)_setFinishingPosition:(long long)arg1 ;
-(void)setInterruptible:(BOOL)arg1 ;
-(BOOL)_setContinuedWithNewSpring:(BOOL)arg1 forAnimationKey:(id)arg2 forLayer:(id)arg3 ;
-(void)continueAnimation;
-(void)_executeCompletionHandlerWithFinalPosition:(long long)arg1 ;
-(BOOL)_addedPacingAnimation;
-(double)unitDuration;
-(void)clearAnimationDescriptions;
-(BOOL)isReversed;
-(void)_setPausesOnCompletion:(BOOL)arg1 ;
-(void)_notePropertyAnimationUpdate:(id)arg1 forView:(id)arg2 ;
-(void)setPausesOnCompletion:(BOOL)arg1 ;
-(void)startAnimation;
-(void)_untrackPropertyAnimationsForKeys:(id*)arg1 inLayer:(id)arg2 ;
-(BOOL)isIntrospectable;
-(double)_dragAdjustedDuration;
-(BOOL)scrubsLinearly;
-(id)_animations;
-(void)setAnimationDescriptionMap:(NSMutableDictionary *)arg1 ;
-(BOOL)_computeSmallestDisplacementFractionComplete:(double*)arg1 ;
-(void)_setAdditiveOffset:(double)arg1 forKey:(id)arg2 inLayer:(id)arg3 ;
-(void)setManualHitTestingEnabled:(BOOL)arg1 ;
-(void)_setTimingParameters:(id)arg1 ;
-(void)_setViewAnimationState:(id)arg1 ;
-(BOOL)_isStarting;
-(void)_continueWithTimingParameters:(id)arg1 duration:(double)arg2 ;
-(id)_currentTimingFunction;
-(void)_restoreLayerValueIfReversed:(id)arg1 animation:(id)arg2 toValue:(id)arg3 ;
-(long long)_animationState;
-(BOOL)shouldLayoutSubviews;
-(void)startAnimationAfterDelay:(double)arg1 ;
-(id)_newAnimationUpdateForProperty:(id)arg1 implicit:(BOOL)arg2 additive:(BOOL)arg3 ;
-(void)_setOriginalFromValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3 ;
-(id)_viewAnimationState;
-(id)_explicitAnimationUpdateForProperty:(id)arg1 forView:(id)arg2 withValue:(id)arg3 ;
-(id)animationsDescription;
-(id)_stateAsString;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(unsigned long long)_options;
-(void)_setPausedOnCompletion:(BOOL)arg1 ;
-(double)_effectiveAdditiveOffsetForKey:(id)arg1 inLayer:(id)arg2 ;
-(void)setInternalDuration:(double)arg1 ;
-(BOOL)_pausesOnCompletion;
-(id)init;
-(void)_setupAssociatedViewAnimationState:(id)arg1 ;
-(id)_completions;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setPacedFractionComplete:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_runAnimations;
-(void)_setStarting:(BOOL)arg1 ;
-(unsigned long long)_optionsForNestedLegacyAnimation:(unsigned long long)arg1 ;
-(id)_animationDescriptionForView:(id)arg1 ;
-(BOOL)_isPausedOnCompletion;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)_springAnimationForXComponent:(id*)arg1 forYComponent:(id*)arg2 ;
-(BOOL)isManualHitTestingEnabled;
-(void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2 ;
-(BOOL)isInterruptible;
-(NSArray *)animationDescriptions;
-(BOOL)_generatePointValueSpringAnimationsForKeyPath:(id)arg1 ;
-(id)initWithDuration:(double)arg1 dampingRatio:(double)arg2 animations:(/*^block*/id)arg3 ;
-(BOOL)isUserInteractionEnabled;
-(double)_additiveOffsetForKey:(id)arg1 inLayer:(id)arg2 ;
-(void)_setCompletions:(id)arg1 ;
-(void)addAnimations:(/*^block*/id)arg1 delayFactor:(double)arg2 ;
-(double)_drag;
-(long long)_finishingPosition;
-(BOOL)_computeDisplacementFractionComplete:(id)arg1 withKey:(id)arg2 inLayer:(id)arg3 fromValue:(id)arg4 toValue:(id)arg5 fractionComplete:(double*)arg6 displacement:(double*)arg7 ;
-(NSString *)description;
-(double)delay;
-(BOOL)isRunning;
-(long long)state;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(double)duration;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
