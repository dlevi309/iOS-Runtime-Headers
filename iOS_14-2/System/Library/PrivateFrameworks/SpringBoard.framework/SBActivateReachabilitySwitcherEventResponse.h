/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@interface SBActivateReachabilitySwitcherEventResponse : SBSwitcherModifierEventResponse {

	SBReachabilityActivationContext _reachabilityActivationContext;

}

@property (nonatomic,readonly) SBReachabilityActivationContext reachabilityActivationContext;              //@synthesize reachabilityActivationContext=_reachabilityActivationContext - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)type;
-(SBReachabilityActivationContext)reachabilityActivationContext;
-(id)initWithReachabilityContext:(SBReachabilityActivationContext)arg1 ;
@end

