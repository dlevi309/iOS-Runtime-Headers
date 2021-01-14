/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@protocol _ASAccountAuthenticationModificationExtensionContextProtocol <NSObject>
@required
-(void)cancelRequest;
-(void)upgradeCredentialToSignInWithApple:(id)arg1 serviceIdentifier:(id)arg2 userInfo:(id)arg3;
-(void)prepareInterfaceToUpgradeCredentialToSignInWithApple:(id)arg1 serviceIdentifier:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)updatePasswordForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4;
-(void)prepareInterfaceToUpdatePasswordForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4 completion:(/*^block*/id)arg5;

@end

