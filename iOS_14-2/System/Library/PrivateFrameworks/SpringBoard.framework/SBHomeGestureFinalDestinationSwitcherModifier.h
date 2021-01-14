/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBHomeGestureFinalDestinationSwitcherModifierDelegate;
@class SBHomeGestureDockSwitcherModifier, NSString;

@interface SBHomeGestureFinalDestinationSwitcherModifier : SBSwitcherModifier {

	CGPoint _initialTranslationAdjustment;
	CGPoint _translation;
	CGPoint _velocity;
	double _lastTouchTimestamp;
	double _lastAverageVelocityYForAcceleration;
	CGPoint _initialTouchLocation;
	CGPoint _lastTouchLocation;
	CGPoint _directionSwitchLocation;
	BOOL _movingTowardsNextLayoutState;
	double _adaptiveMinimumYVelocityForHome;
	double _adaptivePauseVelocityThresholdForAppSwitcher;
	double _adaptiveVelocitySlopeThresholdForArc;
	double _lastFinalDestination;
	long long _edgeRegionSampleCounter;
	BOOL _updateEdgeRegionSampleCounter;
	BOOL _gestureHasBegun;
	BOOL _gestureHasEnded;
	unsigned long long _numberOfTouchSamples;
	SBHomeGestureDockSwitcherModifier* _dockModifier;
	long long _startingEnvironmentMode;
	BOOL _scrunchInitiated;
	BOOL _continuingGesture;
	long long _touchType;
	BOOL _isMouseEvent;
	id<SBHomeGestureFinalDestinationSwitcherModifierDelegate> _finalDestinationDelegate;
	BOOL _hasSeenAccelerationDipForAppSwitcher;
	NSString* _finalDestinationReason;

}

@property (nonatomic,readonly) long long currentFinalDestination; 
@property (nonatomic,readonly) NSString * finalDestinationReason;                      //@synthesize finalDestinationReason=_finalDestinationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasSeenAccelerationDipForAppSwitcher;              //@synthesize hasSeenAccelerationDipForAppSwitcher=_hasSeenAccelerationDipForAppSwitcher - In the implementation block
-(id)debugDescription;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg1 ;
-(void)_applyPrototypeSettings;
-(id)studyLogData;
-(id)handleGestureEvent:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 initialTranslationAdjustment:(CGPoint)arg2 startingEnvironmentMode:(long long)arg3 continuingGesture:(BOOL)arg4 dockModifier:(id)arg5 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(void)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(void)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(void)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg1 ;
-(BOOL)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1 ;
-(long long)currentFinalDestination;
-(NSString *)finalDestinationReason;
-(BOOL)hasSeenAccelerationDipForAppSwitcher;
-(BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
-(void)_updateAdaptiveThresholdsForCurrentFinalDestination:(long long)arg1 velocityAverage:(CGPoint)arg2 ;
-(long long)_adjustedFinalDestinationAccountingForEdgeDataDistortion:(long long)arg1 location:(CGPoint)arg2 ;
-(double)_unconditionalDistanceThresholdForHome;
@end

