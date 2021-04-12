/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@protocol SBFluidSwitcherScrollProviding;
@class SBAppLayout, SBSwitcherModifier, SBCoplanarSwitcherModifier, SBForcePressGestureStateTrackingSwitcherModifier, UIViewFloatAnimatableProperty;

@interface SBForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {

	SBAppLayout* _selectedAppLayout;
	long long _startingEnvironmentMode;
	SBSwitcherModifier*<SBFluidSwitcherScrollProviding> _multitaskingModifier;
	SBCoplanarSwitcherModifier* _coplanarModifier;
	SBForcePressGestureStateTrackingSwitcherModifier* _stateTrackingModifier;
	double _additionalScaleForBreathing;
	UIViewFloatAnimatableProperty* _inMultitaskingChangedProperty;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)wallpaperScale;
-(double)dimmingAlpha;
-(id)handleGestureEvent:(id)arg1 ;
-(long long)wallpaperStyle;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)backdropBlurProgress;
-(long long)liveContentRasterizationStyle;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsMinificationFilter;
-(double)homeScreenScale;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)scaleSettingsForIndex:(unsigned long long)arg1 ;
-(double)homeScreenAlpha;
-(BOOL)wantsResignActiveAssertion;
-(long long)sceneDeactivationReason;
-(long long)keyboardSuppressionMode;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(void)_beginAnimatingMultitaskingPropertyWithMode:(long long)arg1 settings:(id)arg2 ;
-(double)_scaleForCoplanarModifier;
-(double)_effectivePanProgress;
-(unsigned long long)_indexOfSelectedAppLayout;
-(BOOL)_forcePressGestureCanBreathe;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4 ;
-(double)initialPanThreshold;
@end

