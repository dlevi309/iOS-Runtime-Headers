/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@protocol SBFluidSwitcherScrollProviding;
@class SBSwitcherModifier;

@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	SBSwitcherModifier*<SBFluidSwitcherScrollProviding> _multitaskingModifier;

}

@property (nonatomic,readonly) long long direction;                                                                   //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) SBSwitcherModifier*<SBFluidSwitcherScrollProviding> multitaskingModifier;              //@synthesize multitaskingModifier=_multitaskingModifier - In the implementation block
-(long long)direction;
-(id)transitionWillBegin;
-(id)appLayoutToScrollToDuringTransition;
-(id)transitionWillUpdate;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 multitaskingModifier:(id)arg3 ;
-(double)containerStatusBarAnimationDuration;
-(BOOL)isEffectivelyHome;
-(SBSwitcherModifier*<SBFluidSwitcherScrollProviding>)multitaskingModifier;
@end

