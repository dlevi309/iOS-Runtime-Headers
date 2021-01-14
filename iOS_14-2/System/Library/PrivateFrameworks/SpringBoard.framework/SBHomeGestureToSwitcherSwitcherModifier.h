/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	SBSwitcherModifier* _multitaskingModifier;
	long long _startingEnvironmentMode;
	CGPoint _liftOffVelocity;
	CGPoint _liftOffTranslation;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(long long)wallpaperStyle;
-(id)handleTimerEvent:(id)arg1 ;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(id)_appLayoutToScrollToDuringTransition;
-(double)containerStatusBarAnimationDuration;
-(id)transitionWillBegin;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)_dismissForEmptySwitcherResponseName;
-(id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3 startingEnvironmentMode:(long long)arg4 liftOfVelocity:(CGPoint)arg5 liftOffTranslation:(CGPoint)arg6 ;
@end

