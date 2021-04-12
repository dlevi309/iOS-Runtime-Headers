/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>
#import <libobjc.A.dylib/SBHomeGestureDockSwitcherModifierDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureFinalDestinationSwitcherModifierDelegate.h>

@class SBCoplanarSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBAppLayout, NSString;

@interface SBReduceMotionHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {

	SBCoplanarSwitcherModifier* _coplanarLayoutModifier;
	SBHomeGestureDockSwitcherModifier* _dockModifier;
	SBHomeGestureFinalDestinationSwitcherModifier* _finalDestinationModifier;
	SBAppLayout* _selectedAppLayout;
	long long _startingEnvironmentMode;
	BOOL _continuingGesture;
	BOOL _lastGestureWasAnArcSwipe;
	BOOL _scrunchInitiated;
	CGPoint _initialTouchLocation;
	CGPoint _lastTouchLocation;
	CGPoint _translation;
	CGPoint _velocity;
	CGPoint _translationAdjustmentForStartingFromHomeScreen;
	BOOL _gestureHasBegun;
	BOOL _gestureHasEnded;
	unsigned long long _reduceMotionAxis;
	BOOL _endingGestureForAppSwitcher;
	BOOL _didWarmupReduceMotionHaptic;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(long long)wallpaperStyle;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(NSRange)fullSizeSnapshotsRange;
-(long long)liveContentRasterizationStyle;
-(BOOL)wantsMinificationFilter;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)shouldRubberbandHomeGrabberView;
-(BOOL)wantsResignActiveAssertion;
-(long long)sceneDeactivationReason;
-(long long)keyboardSuppressionMode;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(void)_applyPrototypeSettings;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(long long)currentFinalDestination;
-(id)_actionForActivatingFinalDestination:(long long)arg1 ;
-(void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1 ;
-(double)unconditionalDistanceThresholdForHome;
-(void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1 ;
-(id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 continuingGesture:(BOOL)arg4 lastGestureWasAnArcSwipe:(BOOL)arg5 ;
@end

