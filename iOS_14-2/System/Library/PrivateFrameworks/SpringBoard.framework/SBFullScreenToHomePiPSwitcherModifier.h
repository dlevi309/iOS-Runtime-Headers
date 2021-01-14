/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier, SBFullScreenToHomeIconZoomSwitcherModifier;

@interface SBFullScreenToHomePiPSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	CGPoint _finalCenter;
	double _finalScale;
	double _sourceAlpha;
	SBCoplanarSwitcherModifier* _coplanarModifier;
	SBFullScreenToHomeIconZoomSwitcherModifier* _zoomModifier;

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
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(double)rotationAngleForIndex:(unsigned long long)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(id)transitionWillBegin;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)completesWhenChildrenComplete;
-(id)initWithTransitionID:(id)arg1 zoomModifier:(id)arg2 appLayout:(id)arg3 ;
-(BOOL)_shouldApplyMorphToPipToIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexSelectedAppLayout:(unsigned long long)arg1 ;
@end

