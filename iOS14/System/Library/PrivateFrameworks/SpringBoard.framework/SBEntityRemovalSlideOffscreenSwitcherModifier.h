/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSUUID, SBAppLayout, SBSwitcherModifier, SBEntityRemovalToHomeSwitcherModifier, SBEntityRemovalDosidoSlideOutAnimationSettings;

@interface SBEntityRemovalSlideOffscreenSwitcherModifier : SBTransitionSwitcherModifier {

	BOOL _isSecondStage;
	NSUUID* _transitionID;
	SBAppLayout* _appLayout;
	SBSwitcherModifier* _multitaskingModifier;
	unsigned long long _direction;
	SBEntityRemovalToHomeSwitcherModifier* _toHomeRemovalModifier;
	SBEntityRemovalDosidoSlideOutAnimationSettings* _animationSettings;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)visibleAppLayouts;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillUpdate;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(id)_layoutSettings;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3 animationSettings:(id)arg4 multitaskingModifier:(id)arg5 ;
@end

