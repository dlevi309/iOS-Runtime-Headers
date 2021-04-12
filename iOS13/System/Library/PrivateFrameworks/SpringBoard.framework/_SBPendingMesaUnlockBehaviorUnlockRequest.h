/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)request;
-(id<SBBiometricUnlockBehavior>)behavior;
-(SBAuthenticationFeedback *)feedback;
-(id)initWithBehavior:(id)arg1 request:(id)arg2 feedback:(id)arg3 ;
@end

