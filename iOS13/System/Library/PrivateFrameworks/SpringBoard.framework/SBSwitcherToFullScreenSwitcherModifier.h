/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBSwitcherToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	BOOL _wantsMinificationFilter;
	SBAppLayout* _fullScreenAppLayout;
	SBSwitcherModifier* _multitaskingModifier;
	long long _direction;

}

@property (nonatomic,readonly) SBAppLayout * fullScreenAppLayout;                      //@synthesize fullScreenAppLayout=_fullScreenAppLayout - In the implementation block
@property (nonatomic,readonly) SBSwitcherModifier * multitaskingModifier;              //@synthesize multitaskingModifier=_multitaskingModifier - In the implementation block
@property (assign,nonatomic) long long direction;                                      //@synthesize direction=_direction - In the implementation block
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(id)transitionWillBegin;
-(id)appLayoutToScrollToDuringTransition;
-(SBSwitcherModifier *)multitaskingModifier;
-(SBAppLayout *)fullScreenAppLayout;
-(id)appLayoutToScrollToBeforeTransitioning;
-(BOOL)wantsMinificationFilter;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 multitaskingModifier:(id)arg4 ;
-(BOOL)isEffectivelyFullScreen;
@end

