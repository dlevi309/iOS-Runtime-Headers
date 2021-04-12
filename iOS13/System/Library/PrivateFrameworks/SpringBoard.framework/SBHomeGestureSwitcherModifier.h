/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>
#import <libobjc.A.dylib/SBHomeGestureDockSwitcherModifierDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureFinalDestinationSwitcherModifierDelegate.h>

@class UIViewFloatAnimatableProperty, CADisplayLink, SBSwitcherModifier, SBCoplanarSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBAppLayout, NSString;

@interface SBHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate> {

	BOOL _inMultitasking;
	UIViewFloatAnimatableProperty* _inMultitaskingChangedProperty;
	CGPoint _touchOffset;
	double _lastFrameOffsetX;
	double _lastTranslationXForRubberbanding;
	double _translationXLostToRubberbanding;
	BOOL _hasTriggeredCardFlyIn;
	double _translationYWhenTriggeredCardFlyIn;
	BOOL _hasBecomeCoplanarSinceGestureFromSwitcherBegan;
	CGPoint _gestureLiftOffVelocity;
	CGPoint _gestureLiftOffTranslation;
	CGPoint _translationAdjustmentForStartingFromSwitcher;
	CGPoint _translationAdjustmentForStartingFromHomeScreen;
	double _progressToInSwitcherCardScale;
	double _progressToMaxTranslation;
	CGPoint _translation;
	CGPoint _velocity;
	double _stackedProgress;
	CGPoint _initialCentroid;
	CGPoint _centroid;
	CGPoint _centroidAdjustment;
	double _absoluteScale;
	CGPoint _translationWithoutScale;
	CADisplayLink* _displayLink;
	double _lastTouchTimestamp;
	long long _gestureHoldTimer;
	CGPoint _initialTouchLocation;
	CGPoint _lastTouchLocation;
	BOOL _everTranslatedUpwards;
	BOOL _cancelledGestureForEmptySwitcher;
	double _toHomeScreenAlpha;
	double _toHomeScreenBlurProgress;
	double _toDimmingAlpha;
	BOOL _didWarmupFlyInHaptic;
	BOOL _didPlayFlyInHaptic;
	BOOL _gestureHasBegun;
	BOOL _gestureHasEnded;
	SBSwitcherModifier* _multitaskingModifier;
	SBCoplanarSwitcherModifier* _coplanarLayoutModifier;
	SBHomeGestureDockSwitcherModifier* _dockModifier;
	SBHomeGestureFinalDestinationSwitcherModifier* _finalDestinationModifier;
	SBAppLayout* _selectedAppLayout;
	long long _startingEnvironmentMode;
	double _centerYOffsetWhenPresentedInSwitcher;
	BOOL _scrunchInitiated;
	BOOL _continuingGesture;
	BOOL _lastGestureWasAnArcSwipe;
	BOOL _shouldResignActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)debugDescription;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(double)wallpaperScale;
-(double)dimmingAlpha;
-(id)handleGestureEvent:(id)arg1 ;
-(long long)wallpaperStyle;
-(double)_switcherCardScale;
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
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)backdropBlurProgress;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(long long)liveContentRasterizationStyle;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsMinificationFilter;
-(double)homeScreenScale;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)layoutSettingsForIndex:(unsigned long long)arg1 ;
-(id)cornerRadiusSettingsForIndex:(unsigned long long)arg1 ;
-(double)homeScreenAlpha;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(double)lighteningAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsResignActiveAssertion;
-(long long)sceneDeactivationReason;
-(long long)keyboardSuppressionMode;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(double)_distanceYToInSwitcherCardScale;
-(void)_applyPrototypeSettings;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg1 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg1 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg1 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg1 ;
-(void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg1 ;
-(void)_updateShouldResignActiveWithEvent:(id)arg1 ;
-(void)_updateStackedProgress;
-(id)_actionForUpdatingLayoutForGestureBegan;
-(id)_actionForUpdatingIconViewVisibility:(BOOL)arg1 ;
-(id)_actionForStudyLogDidBeginGesture;
-(id)_actionForSBEventGestureBeganWithTimeDelta:(double)arg1 ;
-(CGPoint)_unadjustedGestureTranslation;
-(BOOL)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1 ;
-(id)_updateInMultitaskingIfNeededWithLocation:(CGPoint)arg1 ;
-(double)_scaleForAdjacentCards;
-(void)_updateFrameOffsetForXRubberbandingForTranslation:(CGPoint)arg1 ;
-(long long)currentFinalDestination;
-(id)_actionForActivatingFinalDestination:(long long)arg1 ;
-(id)_actionForActivatingReachabilityIfNeededWithFinalDestination:(long long)arg1 ;
-(id)_actionForStudyLogDidEndGestureWithEvent:(id)arg1 finalDestination:(long long)arg2 destinationReason:(id)arg3 ;
-(id)_actionForSBEventGestureEndWithEvent:(id)arg1 finalDestination:(long long)arg2 ;
-(void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1 ;
-(double)_gestureProgressToMaxTranslationForTranslation:(double)arg1 ;
-(BOOL)_isSelectedAppLayoutAtIndex:(unsigned long long)arg1 ;
-(CGPoint)_frameOffsetForTranslation:(CGPoint)arg1 ;
-(BOOL)_shouldPositionAdjacentCardsOffscreenForFlyIn;
-(CGPoint)_rubberbandedTranslationForAdjacentCards;
-(double)_scaleForTranslation:(CGPoint)arg1 ;
-(unsigned long long)_selectedAppLayoutIndex;
-(double)_coplanarSpacing;
-(double)_inSwitcherCenterYOffsetWhenPresented;
-(double)_centerYOffsetDuringGesture;
-(double)_scaleForOffscreenAdjacentCardsForFlyIn;
-(double)unconditionalDistanceThresholdForHome;
-(BOOL)_shouldResignActiveBasedOnCardScale;
-(BOOL)_hasPausedEnoughForFlyIn;
-(BOOL)_inMultitaskingForLocation:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(BOOL)_preventPositioningCardsOffscreenForFlatBottomEdgeSwipe;
-(void)_beginAnimatingMultitaskingPropertyWithMode:(long long)arg1 settings:(id)arg2 ;
-(BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
-(double)_distanceYToMaxTranslation;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 centerYOffsetWhenPresentedInSwitcher:(double)arg4 multitaskingModifier:(id)arg5 continuingGesture:(BOOL)arg6 lastGestureWasAnArcSwipe:(BOOL)arg7 ;
-(CGPoint)liftOffVelocityForGestureEnd;
-(CGPoint)liftOffTranslationForGestureEnd;
-(BOOL)isShowingOrAnimatingCardsForFlyIn;
@end

