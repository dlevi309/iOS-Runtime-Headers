/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class SBSwitcherTransitionRequest;

@interface SBPerformTransitionSwitcherEventResponse : SBSwitcherModifierEventResponse {

	BOOL _gestureInitiated;
	SBSwitcherTransitionRequest* _transitionRequest;

}

@property (nonatomic,readonly) SBSwitcherTransitionRequest * transitionRequest;              //@synthesize transitionRequest=_transitionRequest - In the implementation block
@property (getter=isGestureInitiated,nonatomic,readonly) BOOL gestureInitiated;              //@synthesize gestureInitiated=_gestureInitiated - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isGestureInitiated;
-(long long)type;
-(SBSwitcherTransitionRequest *)transitionRequest;
-(id)initWithTransitionRequest:(id)arg1 gestureInitiated:(BOOL)arg2 ;
@end

