/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifierAction.h>

@interface SBActivateReachabilitySwitcherModifierAction : SBSwitcherModifierAction {

	SBReachabilityActivationContext _reachabilityActivationContext;

}

@property (nonatomic,readonly) SBReachabilityActivationContext reachabilityActivationContext;              //@synthesize reachabilityActivationContext=_reachabilityActivationContext - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBReachabilityActivationContext)reachabilityActivationContext;
-(id)initWithReachabilityContext:(SBReachabilityActivationContext)arg1 ;
@end

