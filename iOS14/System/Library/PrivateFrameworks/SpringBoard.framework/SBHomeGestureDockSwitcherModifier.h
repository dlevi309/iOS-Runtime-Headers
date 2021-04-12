/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBHomeGestureDockSwitcherModifierDelegate;
@interface SBHomeGestureDockSwitcherModifier : SBSwitcherModifier {

	CGPoint _lastTouchLocation;
	CGPoint _unadjustedGestureTranslation;
	CGPoint _velocity;
	CGPoint _translationAdjustmentForFloatingDock;
	BOOL _currentlyTrackingDock;
	BOOL _wasTrackingDockWhenGestureBegan;
	BOOL _hadOpenDockFolderWhenGestureBegan;
	BOOL _hadOpenHomeScreenFolderWhenGestureBegan;
	BOOL _verticallyRubberbandedOutOfDock;
	BOOL _wantsDockAssertion;
	BOOL _highEnoughToShowDock;
	BOOL _gestureHasBegun;
	BOOL _gestureHasEnded;
	id<SBHomeGestureDockSwitcherModifierDelegate> _delegate;
	long long _startingEnvironmentMode;
	BOOL _requireVerticalSwipeToTrackDock;

}

@property (getter=isCurrentlyTrackingDock,nonatomic,readonly) BOOL currentlyTrackingDock;              //@synthesize currentlyTrackingDock=_currentlyTrackingDock - In the implementation block
-(id)debugDescription;
-(BOOL)wantsDockWindowLevelAssertion;
-(double)dockProgress;
-(long long)dockUpdateMode;
-(double)dockWindowLevel;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)wantsDockBehaviorAssertion;
-(unsigned long long)dockWindowLevelPriority;
-(void)_applyPrototypeSettings;
-(id)studyLogData;
-(id)handleGestureEvent:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 startingEnvironmentMode:(long long)arg2 requireVerticalSwipeToTrackDock:(BOOL)arg3 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(CGPoint)translationForAdjustedTranslation:(CGPoint)arg1 ;
-(CGPoint)adjustedTranslationForTranslation:(CGPoint)arg1 ;
-(BOOL)isCurrentlyTrackingDock;
-(BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
-(long long)adjustedFinalDestinationForDestination:(long long)arg1 withTranslation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1 ;
-(BOOL)_rubberbandedOutOfDockHorizontally;
-(BOOL)_shouldPresentDockForFinalDestination:(long long)arg1 ;
@end

