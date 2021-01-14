/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBForcePressToFullScreenAppLayoutSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	SBSwitcherModifier* _multitaskingModifier;
	long long _startingEnvironmentMode;

}
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(long long)wallpaperStyle;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 ;
@end

