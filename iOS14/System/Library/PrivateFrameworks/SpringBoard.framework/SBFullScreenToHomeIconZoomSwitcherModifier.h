/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _shouldUpdateIconViewVisibility;
	BOOL _shouldMatchMoveToIconView;

}

@property (assign,nonatomic) BOOL shouldUpdateIconViewVisibility;              //@synthesize shouldUpdateIconViewVisibility=_shouldUpdateIconViewVisibility - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchMoveToIconView;                   //@synthesize shouldMatchMoveToIconView=_shouldMatchMoveToIconView - In the implementation block
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)topMostLayoutElements;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(BOOL)_isIndexZoomAppLayout:(unsigned long long)arg1 ;
-(double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(CGPoint)arg1 ;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3 ;
-(BOOL)shouldMatchMoveToIconView;
-(id)layoutSettingsForTargetCenter:(CGPoint)arg1 ;
-(BOOL)wantsDockWindowLevelAssertion;
-(double)dockProgress;
-(double)dockWindowLevel;
-(double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(CGPoint)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)wantsDockBehaviorAssertion;
-(id)transitionDidEnd;
-(id)handleTimerEvent:(id)arg1 ;
-(unsigned long long)dockWindowLevelPriority;
-(void)setShouldMatchMoveToIconView:(BOOL)arg1 ;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)_isEffectivelyHome;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(BOOL)shouldUpdateIconViewVisibility;
-(id)transitionWillBegin;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3 ;
-(void)setShouldUpdateIconViewVisibility:(BOOL)arg1 ;
-(double)homeScreenAlpha;
@end

