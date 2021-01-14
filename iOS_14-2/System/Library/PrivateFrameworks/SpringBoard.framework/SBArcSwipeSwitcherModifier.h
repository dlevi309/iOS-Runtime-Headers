/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBArcSwipeSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _toAppLayout;
	SBAppLayout* _fromAppLayout;

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
-(long long)wallpaperStyle;
-(id)keyboardSuppressionMode;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(id)appLayoutsToResignActive;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 ;
@end

