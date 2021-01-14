/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol AKSignInViewControllerDelegate <NSObject>
@optional
-(void)signInViewController:(id)arg1 willPerformAuthenticationWithContext:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
-(BOOL)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
-(void)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 completion:(/*^block*/id)arg5;

@end

