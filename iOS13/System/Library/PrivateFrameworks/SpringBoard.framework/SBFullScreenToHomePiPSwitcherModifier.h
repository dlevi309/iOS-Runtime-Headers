/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomePiPSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	CGPoint _finalCenter;
	double _finalScale;
	double _sourceAlpha;
	SBCoplanarSwitcherModifier* _coplanarModifier;

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
-(BOOL)_shouldApplyMorphToPipToIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexSelectedAppLayout:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 ;
@end

