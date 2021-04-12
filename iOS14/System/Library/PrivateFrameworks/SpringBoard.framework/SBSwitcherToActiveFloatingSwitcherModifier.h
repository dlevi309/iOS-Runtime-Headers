/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBSwitcherToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	SBAppLayout* _fullScreenAppLayout;
	SBSwitcherModifier* _floatingDeckModifier;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(BOOL)wantsSwitcherDimmingView;
-(BOOL)wantsSwitcherBackdropBlur;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)_layoutSettings;
-(long long)switcherBackdropBlurType;
-(id)transitionWillBegin;
-(long long)transitionLiveContentRasterizationStyle;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 floatingDeckModifier:(id)arg4 ;
@end

