/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)wallpaperScale;
-(double)dimmingAlpha;
-(long long)wallpaperStyle;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(double)backdropBlurProgress;
-(BOOL)isContainerStatusBarVisible;
-(double)homeScreenScale;
-(id)initWithTransitionID:(id)arg1 homeAnimationDelay:(double)arg2 multitaskingModifier:(id)arg3 ;
-(id)handleTimerEvent:(id)arg1 ;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(id)cornerRadiusSettingsForIndex:(unsigned long long)arg1 ;
-(double)homeScreenAlpha;
-(BOOL)wantsDockBehaviorAssertion;
-(long long)dockUpdateMode;
-(double)dockProgress;
-(BOOL)wantsDockWindowLevelAssertion;
-(BOOL)isContentStatusBarVisible;
@end

