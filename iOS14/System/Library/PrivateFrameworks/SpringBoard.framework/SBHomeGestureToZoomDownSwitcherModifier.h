/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	SBSwitcherModifier* _nonGestureInitiatedZoomModifier;
	long long _startingEnvironmentMode;
	CGPoint _liftOffVelocity;
	unsigned long long _iconGridSizeClass;
	BOOL _overshootScaleForWidgetZoomDown;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)appLayoutsToCacheSnapshots;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(long long)wallpaperStyle;
-(id)transitionWillUpdate;
-(id)handleTimerEvent:(id)arg1 ;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)_scaleSettings;
-(id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3 ;
-(BOOL)completesWhenChildrenComplete;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 nonGestureInitiatedZoomModifier:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 liftOffVelocity:(CGPoint)arg5 ;
-(id)_positionSettings;
-(double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
@end

