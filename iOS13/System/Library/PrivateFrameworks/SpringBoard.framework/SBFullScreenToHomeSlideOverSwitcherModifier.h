/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBFullScreenAppLayoutSwitcherModifier;

@interface SBFullScreenToHomeSlideOverSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	unsigned long long _direction;
	SBFullScreenAppLayoutSwitcherModifier* _fullScreenModifier;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(id)transitionWillBegin;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(double)homeScreenAlpha;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3 ;
-(BOOL)_isIndexSlideOverAppLayout:(unsigned long long)arg1 ;
-(BOOL)_shouldApplySlideOverLayoutToIndex:(unsigned long long)arg1 ;
@end

