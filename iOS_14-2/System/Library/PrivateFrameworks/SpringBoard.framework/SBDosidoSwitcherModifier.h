/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDosidoSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	unsigned long long _direction;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(long long)wallpaperStyle;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)transitionWillUpdate;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 direction:(unsigned long long)arg4 ;
@end

