/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


@protocol MCUISignInViewControllerDelegate <NSObject>
@optional
-(void)signInViewController:(id)arg1 willAuthenticateWithCompletionHandler:(/*^block*/id)arg2;
-(void)signInViewControllerDidCancelAuthentication:(id)arg1;

@required
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;

@end

