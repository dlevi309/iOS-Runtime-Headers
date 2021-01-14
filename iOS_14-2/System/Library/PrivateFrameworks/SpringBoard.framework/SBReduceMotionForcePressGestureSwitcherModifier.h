/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBAppLayout, SBForcePressGestureStateTrackingSwitcherModifier;

@interface SBReduceMotionForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {

	SBAppLayout* _selectedAppLayout;
	long long _startingEnvironmentMode;
	SBForcePressGestureStateTrackingSwitcherModifier* _stateTrackingModifier;

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
-(id)keyboardSuppressionMode;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)appLayoutsToResignActive;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(double)_effectivePanProgress;
-(unsigned long long)_indexOfSelectedAppLayout;
-(double)initialPanThreshold;
-(id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 ;
@end

