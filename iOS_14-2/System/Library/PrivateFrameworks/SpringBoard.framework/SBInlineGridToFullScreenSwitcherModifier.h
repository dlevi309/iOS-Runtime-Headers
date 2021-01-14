/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBInlineGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fullScreenAppLayout;
	SBSwitcherModifier* _multitaskingModifier;
	UIRectCornerRadii _fullScreenCornerRadii;
	BOOL _dimInactiveCards;

}

@property (nonatomic,readonly) SBAppLayout * fullScreenAppLayout;                      //@synthesize fullScreenAppLayout=_fullScreenAppLayout - In the implementation block
@property (nonatomic,readonly) SBSwitcherModifier * multitaskingModifier;              //@synthesize multitaskingModifier=_multitaskingModifier - In the implementation block
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)topMostLayoutElements;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)plusButtonAlpha;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(long long)plusButtonStyle;
-(double)reopenClosedWindowsButtonScale;
-(double)homeScreenDimmingAlpha;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(id)appLayoutToScrollToBeforeTransitioning;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(double)homeScreenBackdropBlurProgress;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)reopenClosedWindowsButtonAlpha;
-(SBSwitcherModifier *)multitaskingModifier;
-(BOOL)_isIndexFullScreenAppLayout:(unsigned long long)arg1 ;
-(double)_unselectedCardScale;
-(SBAppLayout *)fullScreenAppLayout;
-(id)initWithTransitionID:(id)arg1 fullScreenAppLayout:(id)arg2 multitaskingModifier:(id)arg3 fullscreenCornerRadii:(UIRectCornerRadii)arg4 dimInactiveCards:(BOOL)arg5 ;
@end

