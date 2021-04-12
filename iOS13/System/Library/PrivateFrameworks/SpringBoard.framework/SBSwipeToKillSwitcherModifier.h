/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBFluidSwitcherScrollProviding;
@class SBAppLayout, SBSwitcherModifier;

@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _appLayout;
	SBSwitcherModifier*<SBFluidSwitcherScrollProviding> _multitaskingModifier;
	double _progress;
	BOOL _hasPrepared;
	BOOL _simulatingPostRemovalState;
	unsigned long long _interpolationDirection;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)appLayouts;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(id)topMostAppLayouts;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(long long)layoutUpdateMode;
-(id)appLayoutsForInsertionOrRemoval;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(double)lighteningAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(id)handleSwipeToKillEvent:(id)arg1 ;
-(id)initWithAppLayout:(id)arg1 multitaskingModifier:(id)arg2 ;
-(void)_calculateInterpolationDirection;
-(unsigned long long)_interpolatingAdjacentIndexForIndex:(unsigned long long)arg1 ;
-(void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(/*^block*/id)arg1 ;
@end

