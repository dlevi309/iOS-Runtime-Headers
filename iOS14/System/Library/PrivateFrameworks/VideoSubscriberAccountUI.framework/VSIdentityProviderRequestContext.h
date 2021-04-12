/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class VSIdentityProviderRequest;

@interface VSIdentityProviderRequestContext : NSObject {

	BOOL _attemptedVerificationStateReset;
	VSIdentityProviderRequest* _request;

}

@property (nonatomic,retain) VSIdentityProviderRequest * request;               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL attemptedVerificationStateReset;              //@synthesize attemptedVerificationStateReset=_attemptedVerificationStateReset - In the implementation block
-(void)setRequest:(VSIdentityProviderRequest *)arg1 ;
-(VSIdentityProviderRequest *)request;
-(BOOL)attemptedVerificationStateReset;
-(void)setAttemptedVerificationStateReset:(BOOL)arg1 ;
@end

