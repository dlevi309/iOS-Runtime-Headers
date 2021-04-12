/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	unsigned long long _direction;
	CGRect _homeScreenIconFrame;
	double _homeScreenIconCornerRadius;
	double _homeScreenIconScale;
	BOOL _homeScreenIconLocationIsFloatingDock;
	BOOL _itemContainerOverlapsDock;
	BOOL _wantsDockWindowLevelAssertion;
	SBCoplanarSwitcherModifier* _coplanarModifier;
	BOOL _shouldAcceleratedHomeButtonPressBegin;

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
-(id)topMostAppLayouts;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(double)homeScreenAlpha;
-(BOOL)wantsDockBehaviorAssertion;
-(double)dockProgress;
-(BOOL)wantsDockWindowLevelAssertion;
-(unsigned long long)dockWindowLevelPriority;
-(double)dockWindowLevel;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)transitionDidEnd;
-(BOOL)_isEffectivelyHome;
-(BOOL)_isIndexZoomAppLayout:(unsigned long long)arg1 ;
-(double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge;
-(id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3 ;
-(double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3 ;
@end

