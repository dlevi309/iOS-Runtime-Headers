/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBBiometricUnlockBehavior;
@class SBAuthenticationFeedback;

@interface _SBPendingMesaUnlockBehaviorUnlockRequest : NSObject {

	id<SBBiometricUnlockBehavior> _behavior;
	id _request;
	SBAuthenticationFeedback* _feedback;

}

@property (nonatomic,readonly) id<SBBiometricUnlockBehavior> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) id request;                                          //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) SBAuthenticationFeedback * feedback;                 //@synthesize feedback=_feedback - In the implementation block
-(SBAuthenticationFeedback *)feedback;
-(id<SBBiometricUnlockBehavior>)behavior;
-(id)request;
-(id)initWithBehavior:(id)arg1 request:(id)arg2 feedback:(id)arg3 ;
@end

