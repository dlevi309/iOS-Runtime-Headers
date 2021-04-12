/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherToFullScreenSwitcherModifier.h>

@interface SBGridToFullScreenSwitcherModifier : SBSwitcherToFullScreenSwitcherModifier
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)wallpaperScale;
-(long long)wallpaperStyle;
-(id)transitionWillBegin;
-(id)appLayoutToScrollToDuringTransition;
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
-(BOOL)_isIndexFullScreenAppLayout:(unsigned long long)arg1 ;
-(double)_unselectedCardScale;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)backdropBlurProgress;
-(id)topMostAppLayouts;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(double)homeScreenAlpha;
@end

