/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>
#import <libobjc.A.dylib/SBHomeGestureDockSwitcherModifierDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureFinalDestinationSwitcherModifierDelegate.h>

@class SBCoplanarSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBDismissSiriSwitcherModifier, SBAppLayout, NSString;

@interface SBReduceMotionHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {

	SBCoplanarSwitcherModifier* _coplanarLayoutModifier;
	SBHomeGestureDockSwitcherModifier* _dockModifier;
	SBHomeGestureFinalDestinationSwitcherModifier* _finalDestinationModifier;
	SBDismissSiriSwitcherModifier* _dismissSiriModifier;
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
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(id)keyboardSuppressionMode;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)appLayoutsToResignActive;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(void)_applyPrototypeSettings;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)handleGestureEvent:(id)arg1 ;
-(id)_newDockModifierRequiringVerticalSwipeToTrackDock:(BOOL)arg1 startingEnvironmentMode:(long long)arg2 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(long long)currentFinalDestination;
-(id)_responseForActivatingFinalDestination:(long long)arg1 ;
-(void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1 ;
-(double)unconditionalDistanceThresholdForHome;
-(void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1 ;
-(id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 scrunchInitiated:(BOOL)arg4 continuingGesture:(BOOL)arg5 lastGestureWasAnArcSwipe:(BOOL)arg6 ;
@end

