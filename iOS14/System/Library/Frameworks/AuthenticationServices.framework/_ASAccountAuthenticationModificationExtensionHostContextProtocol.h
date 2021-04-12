/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@protocol _ASAccountAuthenticationModificationExtensionHostContextProtocol <NSObject>
@required
-(void)getSignInWithAppleAuthorizationWithState:(id)arg1 nonce:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)prepareToCompleteRequestWithUpdatedCredential:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prepareToCancelRequestWithError:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissRequestUI;

@end

