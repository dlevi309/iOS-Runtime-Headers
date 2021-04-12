/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBSwitcherTransitionRequest;

@interface SBPerformTransitionSwitcherModifierAction : SBSwitcherModifierAction {

	BOOL _gestureInitiated;
	SBSwitcherTransitionRequest* _transitionRequest;

}

@property (nonatomic,readonly) SBSwitcherTransitionRequest * transitionRequest;              //@synthesize transitionRequest=_transitionRequest - In the implementation block
@property (getter=isGestureInitiated,nonatomic,readonly) BOOL gestureInitiated;              //@synthesize gestureInitiated=_gestureInitiated - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBSwitcherTransitionRequest *)transitionRequest;
-(BOOL)isGestureInitiated;
-(id)initWithTransitionRequest:(id)arg1 gestureInitiated:(BOOL)arg2 ;
@end

