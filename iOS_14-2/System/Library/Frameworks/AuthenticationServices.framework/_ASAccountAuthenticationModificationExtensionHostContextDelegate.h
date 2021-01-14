/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@protocol _ASAccountAuthenticationModificationExtensionHostContextDelegate <_ASExtensionHostContextDelegate>
@optional
-(void)getSignInWithAppleAuthorizationWithState:(id)arg1 nonce:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prepareToCompleteUpgradeToSignInWithAppleRequestWithHostContext:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prepareToCompleteRequestWithHostContext:(id)arg1 updatedCredential:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)dismissRequestUI:(id)arg1;

@end

