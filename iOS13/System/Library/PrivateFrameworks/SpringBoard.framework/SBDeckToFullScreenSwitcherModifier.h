/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherToFullScreenSwitcherModifier.h>

@class SBAppLayout, SBDeckSwitcherModifier;

@interface SBDeckToFullScreenSwitcherModifier : SBSwitcherToFullScreenSwitcherModifier {

	SBAppLayout* _fullScreenAppLayout;
	SBDeckSwitcherModifier* _deckLayoutModifier;

}
-(long long)wallpaperStyle;
-(id)transitionWillBegin;
-(id)appLayoutToScrollToDuringTransition;
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
-(id)topMostAppLayouts;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 multitaskingModifier:(id)arg4 ;
@end

