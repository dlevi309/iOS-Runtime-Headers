/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@protocol AKSignInViewControllerDelegate <NSObject>
@optional
-(void)signInViewController:(id)arg1 willPerformAuthenticationWithContext:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
-(BOOL)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
-(void)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 completion:(/*^block*/id)arg5;

@end

