/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)dimmingAlpha;
-(id)transitionWillBegin;
-(SBSwitcherModifier *)multitaskingModifier;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)_isIndexFullScreenAppLayout:(unsigned long long)arg1 ;
-(double)_unselectedCardScale;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(long long)plusButtonStyle;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)backdropBlurProgress;
-(SBAppLayout *)fullScreenAppLayout;
-(id)topMostAppLayouts;
-(id)initWithTransitionID:(id)arg1 fullScreenAppLayout:(id)arg2 multitaskingModifier:(id)arg3 fullscreenCornerRadii:(UIRectCornerRadii)arg4 dimInactiveCards:(BOOL)arg5 ;
-(double)plusButtonAlpha;
-(double)reopenClosedWindowsButtonAlpha;
-(double)reopenClosedWindowsButtonScale;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(long long)liveContentRasterizationStyle;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(id)appLayoutToScrollToBeforeTransitioning;
@end

