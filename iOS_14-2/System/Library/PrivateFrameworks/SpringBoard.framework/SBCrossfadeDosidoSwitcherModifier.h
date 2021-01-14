/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBHomeScreenSwitcherModifier, SBAppLayout;

@interface SBCrossfadeDosidoSwitcherModifier : SBTransitionSwitcherModifier {

	SBHomeScreenSwitcherModifier* _homeScreenModifier;
	SBAppLayout* _fromAppLayout;
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
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(double)homeScreenDimmingAlpha;
-(double)wallpaperScale;
-(double)homeScreenBackdropBlurProgress;
-(unsigned long long)transactionCompletionOptions;
-(BOOL)isWallpaperRequiredForSwitcher;
-(id)transitionWillBegin;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(double)homeScreenAlpha;
-(BOOL)_isToAppLayoutAtIndex:(unsigned long long)arg1 ;
-(id)_opacitySettings;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 ;
-(BOOL)_isFromAppLayoutAtIndex:(unsigned long long)arg1 ;
-(BOOL)_shouldEnsureHomeScreenVisible;
@end

