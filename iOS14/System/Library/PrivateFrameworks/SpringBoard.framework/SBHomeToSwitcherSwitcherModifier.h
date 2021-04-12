/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	SBSwitcherModifier* _multitaskingModifier;

}

@property (nonatomic,readonly) long long direction;                                    //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) SBSwitcherModifier * multitaskingModifier;              //@synthesize multitaskingModifier=_multitaskingModifier - In the implementation block
-(long long)direction;
-(id)transitionWillUpdate;
-(id)handleTimerEvent:(id)arg1 ;
-(double)containerStatusBarAnimationDuration;
-(id)transitionWillBegin;
-(id)appLayoutToScrollToDuringTransition;
-(id)_dismissForEmptySwitcherResponseName;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 multitaskingModifier:(id)arg3 ;
-(BOOL)isEffectivelyHome;
-(SBSwitcherModifier *)multitaskingModifier;
@end

