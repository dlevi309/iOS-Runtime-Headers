/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)handleGestureEvent:(id)arg1 ;
-(BOOL)_shouldPresentDockForFinalDestination:(long long)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)wantsDockBehaviorAssertion;
-(long long)dockUpdateMode;
-(double)dockProgress;
-(BOOL)wantsDockWindowLevelAssertion;
-(unsigned long long)dockWindowLevelPriority;
-(double)dockWindowLevel;
-(id)studyLogData;
-(void)_applyPrototypeSettings;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 startingEnvironmentMode:(long long)arg2 requireVerticalSwipeToTrackDock:(BOOL)arg3 ;
-(CGPoint)translationForAdjustedTranslation:(CGPoint)arg1 ;
-(CGPoint)adjustedTranslationForTranslation:(CGPoint)arg1 ;
-(BOOL)isCurrentlyTrackingDock;
-(BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
-(long long)adjustedFinalDestinationForDestination:(long long)arg1 withTranslation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1 ;
-(BOOL)_rubberbandedOutOfDockHorizontally;
@end

