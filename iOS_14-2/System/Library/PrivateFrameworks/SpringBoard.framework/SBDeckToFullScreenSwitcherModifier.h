/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBDeckToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	SBAppLayout* _fullScreenAppLayout;
	SBSwitcherModifier* _deckModifier;
	BOOL _wantsMinificationFilter;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)topMostLayoutElements;
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
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 deckModifier:(id)arg4 ;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(id)_appLayoutToScrollToDuringTransition;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)transitionWillBegin;
@end

