/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@protocol ASAccountAuthenticationModificationRemoteViewControllerProtocol
@required
-(void)requestToUpgradeToSignInWithAppleDidFinishWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)requestDidFinishWithCredential:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentAccountModificationRemoteViewController;
-(void)dismissAccountModificationRemoteViewController;

@end

