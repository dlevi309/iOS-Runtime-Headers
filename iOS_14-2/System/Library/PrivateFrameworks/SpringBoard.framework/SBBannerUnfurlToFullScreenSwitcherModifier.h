/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBBannerUnfurlSourceContext, SBAppLayout, SBFullScreenAppLayoutSwitcherModifier;

@interface SBBannerUnfurlToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	SBBannerUnfurlSourceContext* _bannerUnfurlSourceContext;
	SBAppLayout* _fromAppLayout;
	SBFullScreenAppLayoutSwitcherModifier* _fullScreenModifier;
	SBAppLayout* _toAppLayout;
	BOOL _isScalingDown;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(id)visibleAppLayouts;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1 ;
-(id)transitionWillUpdate;
-(id)handleTimerEvent:(id)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(id)transitionWillBegin;
-(long long)transitionLiveContentRasterizationStyle;
-(BOOL)_isAppLayout:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 bannerUnfurlSourceContext:(id)arg4 ;
-(long long)backdropBlurType;
@end

