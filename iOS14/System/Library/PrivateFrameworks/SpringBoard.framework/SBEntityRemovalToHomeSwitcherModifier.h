/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBEntityRemovalToHomeSwitcherModifier : SBTransitionSwitcherModifier {

	SBSwitcherModifier* _multitaskingModifier;
	double _homeAnimationDelay;
	BOOL _canAnimateHomeScreenStyle;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(long long)wallpaperStyle;
-(double)homeScreenDimmingAlpha;
-(double)wallpaperScale;
-(id)transitionWillUpdate;
-(BOOL)wantsDockWindowLevelAssertion;
-(double)dockProgress;
-(long long)dockUpdateMode;
-(BOOL)wantsDockBehaviorAssertion;
-(id)handleTimerEvent:(id)arg1 ;
-(double)homeScreenBackdropBlurProgress;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isContainerStatusBarVisible;
-(id)transitionWillBegin;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(double)homeScreenScale;
-(double)homeScreenAlpha;
-(id)initWithTransitionID:(id)arg1 homeAnimationDelay:(double)arg2 multitaskingModifier:(id)arg3 ;
-(id)_cornerRadiusSettings;
-(BOOL)isContentStatusBarVisible;
@end

