/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3 animationSettings:(id)arg4 multitaskingModifier:(id)arg5 ;
@end

