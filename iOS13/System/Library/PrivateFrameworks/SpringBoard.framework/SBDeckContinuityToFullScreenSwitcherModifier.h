/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBDeckContinuityToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	SBSwitcherModifier* _fullscreenModifier;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(id)layoutSettingsForIndex:(unsigned long long)arg1 ;
-(BOOL)_isInsertingIndex:(unsigned long long)arg1 ;
-(CGRect)_initialFrameForContinuityAppLayout;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 deckModifier:(id)arg3 fullscreenModifier:(id)arg4 ;
@end

