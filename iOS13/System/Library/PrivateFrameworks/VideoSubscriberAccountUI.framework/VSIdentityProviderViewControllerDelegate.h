/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@protocol VSIdentityProviderViewControllerDelegate <NSObject>
@optional
-(void)identityProviderViewControllerDidFinishLoading:(id)arg1;
-(void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;

@required
-(void)dismissIdentityProviderViewController:(id)arg1;
-(void)identityProviderViewControllerDidCancel:(id)arg1;
-(void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;

@end

