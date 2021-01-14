/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBForcePressToHomeSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _selectedAppLayout;
	long long _startingEnvironmentMode;
	double _initalPanThreshold;
	SBSwitcherModifier* _multitaskingModifier;

}
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(long long)wallpaperStyle;
-(double)_switcherCardScale;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 initialPanThreshold:(double)arg4 multitaskingModifier:(id)arg5 ;
@end

