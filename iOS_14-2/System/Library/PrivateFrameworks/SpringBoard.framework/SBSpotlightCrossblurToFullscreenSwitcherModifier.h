/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBSpotlightCrossblurToFullscreenSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _toAppLayout;

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
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(double)homeScreenBackdropBlurProgress;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)transitionWillBegin;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(double)homeScreenAlpha;
-(BOOL)_isToAppLayoutAtIndex:(unsigned long long)arg1 ;
-(id)_opacitySettings;
-(id)initWithTransitionID:(id)arg1 toAppLayout:(id)arg2 ;
@end

