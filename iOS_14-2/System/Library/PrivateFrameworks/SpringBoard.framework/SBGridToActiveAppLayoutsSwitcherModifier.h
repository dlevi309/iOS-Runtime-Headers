/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSArray, SBSwitcherModifier;

@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	NSArray* _activeAppLayouts;
	SBSwitcherModifier* _gridModifier;
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
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(double)wallpaperScale;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(double)homeScreenBackdropBlurProgress;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)transitionWillBegin;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)homeScreenAlpha;
-(double)_unselectedCardScale;
-(BOOL)_isEffectivelyFullScreen;
-(BOOL)_isIndexActive:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 activeAppLayouts:(id)arg3 gridModifier:(id)arg4 ;
@end

