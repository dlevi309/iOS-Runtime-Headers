/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBDeckContinuityToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	SBSwitcherModifier* _fullscreenModifier;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)_isInsertingIndex:(unsigned long long)arg1 ;
-(CGRect)_initialFrameForContinuityAppLayout;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 deckModifier:(id)arg3 fullscreenModifier:(id)arg4 ;
@end

