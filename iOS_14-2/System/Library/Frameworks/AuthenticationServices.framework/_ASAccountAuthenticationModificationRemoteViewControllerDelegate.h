/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@protocol _ASAccountAuthenticationModificationRemoteViewControllerDelegate <NSObject>
@optional
-(void)accountModificationRemoteViewControllerDidFinishUpgradeToSignInWithApple:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)accountModificationRemoteViewController:(id)arg1 didFinishWithCredential:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)accountModificationRemoteViewController:(id)arg1 requestCanceledWithError:(id)arg2 completion:(/*^block*/id)arg3;
-(void)presentAccountModificationRemoteViewController:(id)arg1;
-(void)dismissAccountModificationRemoteViewController:(id)arg1;
-(void)accountModificationRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;

@end

