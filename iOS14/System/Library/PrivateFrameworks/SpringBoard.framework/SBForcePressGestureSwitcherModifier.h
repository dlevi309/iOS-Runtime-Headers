/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier, SBCoplanarSwitcherModifier, SBForcePressGestureStateTrackingSwitcherModifier, UIViewFloatAnimatableProperty;

@interface SBForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {

	SBAppLayout* _selectedAppLayout;
	long long _startingEnvironmentMode;
	SBSwitcherModifier* _multitaskingModifier;
	SBCoplanarSwitcherModifier* _coplanarModifier;
	SBForcePressGestureStateTrackingSwitcherModifier* _stateTrackingModifier;
	double _additionalScaleForBreathing;
	UIViewFloatAnimatableProperty* _inMultitaskingChangedProperty;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(double)homeScreenDimmingAlpha;
-(double)_switcherCardScale;
-(double)wallpaperScale;
-(id)keyboardSuppressionMode;
-(void)didMoveToParentModifier:(id)arg1 ;
-(double)homeScreenBackdropBlurProgress;
-(id)appLayoutsToResignActive;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)homeScreenAlpha;
-(id)_scaleSettings;
-(id)handleGestureEvent:(id)arg1 ;
-(void)_beginAnimatingMultitaskingPropertyWithMode:(long long)arg1 settings:(id)arg2 ;
-(double)_scaleForCoplanarModifier;
-(double)_effectivePanProgress;
-(unsigned long long)_indexOfSelectedAppLayout;
-(BOOL)_forcePressGestureCanBreathe;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4 ;
-(double)initialPanThreshold;
@end

