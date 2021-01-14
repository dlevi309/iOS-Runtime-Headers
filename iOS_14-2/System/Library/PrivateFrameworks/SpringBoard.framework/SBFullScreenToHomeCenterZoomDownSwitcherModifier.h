/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomeCenterZoomDownSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	CGPoint _liftOffVelocity;
	double _offsetYPercentOfScreenHeight;
	SBCoplanarSwitcherModifier* _coplanarModifier;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)topMostLayoutElements;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(id)transitionWillBegin;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)_opacitySettings;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 offsetYPercentOfScreenHeight:(double)arg3 ;
-(BOOL)_isIndexCenterZoomAppLayout:(unsigned long long)arg1 ;
-(double)_offsetYForCenterZoom;
@end

