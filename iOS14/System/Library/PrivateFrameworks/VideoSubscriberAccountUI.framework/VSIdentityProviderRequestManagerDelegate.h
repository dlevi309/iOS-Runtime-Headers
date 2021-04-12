/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

