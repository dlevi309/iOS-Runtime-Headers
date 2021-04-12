/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@protocol VSIdentityProviderRequestManagerDelegate <NSObject>
@optional
-(void)identityProviderRequestManager:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
-(id)identityProviderRequestManager:(id)arg1 applicationControllerWithIdentityProvider:(id)arg2;
-(BOOL)identityProviderRequestManager:(id)arg1 requestsAlert:(id)arg2;

@required
-(void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3;

@end

