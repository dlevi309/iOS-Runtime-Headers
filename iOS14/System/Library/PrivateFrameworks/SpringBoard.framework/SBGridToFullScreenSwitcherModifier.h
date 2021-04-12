/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	SBAppLayout* _fullScreenAppLayout;

}
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 gridModifier:(id)arg4 ;
@end

