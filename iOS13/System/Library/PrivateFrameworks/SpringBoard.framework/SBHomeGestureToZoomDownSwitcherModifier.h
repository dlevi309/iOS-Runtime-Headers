/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}
-(id)handleEvent:(id)arg1 ;
-(long long)wallpaperStyle;
-(id)layoutSettings;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(NSRange)fullSizeSnapshotsRange;
-(id)positionSettingsForIndex:(unsigned long long)arg1 ;
-(id)scaleSettingsForIndex:(unsigned long long)arg1 ;
-(id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3 ;
-(double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 nonGestureInitiatedZoomModifier:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 liftOffVelocity:(CGPoint)arg5 ;
@end

