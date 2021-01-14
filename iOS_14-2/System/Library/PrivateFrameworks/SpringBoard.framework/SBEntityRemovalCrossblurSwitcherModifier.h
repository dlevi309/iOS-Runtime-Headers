/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSUUID, SBAppLayout, SBSwitcherModifier, SBEntityRemovalToHomeSwitcherModifier;

@interface SBEntityRemovalCrossblurSwitcherModifier : SBTransitionSwitcherModifier {

	BOOL _animateOpacity;
	NSUUID* _transitionID;
	SBAppLayout* _appLayout;
	SBSwitcherModifier* _multitaskingModifier;
	SBEntityRemovalToHomeSwitcherModifier* _toHomeRemovalModifier;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillUpdate;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)transitionDidEnd;
-(id)handleTimerEvent:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 multitaskingModifier:(id)arg3 ;
@end

