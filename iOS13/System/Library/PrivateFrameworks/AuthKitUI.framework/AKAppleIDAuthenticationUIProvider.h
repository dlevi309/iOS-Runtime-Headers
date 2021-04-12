/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@protocol AKAppleIDAuthenticationUIProvider <AKAppleIDAuthenticationLimitedUIProvider,AKAppleIDServerAuthenticationUIProvider>
@optional
-(void)presentKeepUsingUIForAppleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissKeepUsingUIWithCompletion:(/*^block*/id)arg1;

@required
-(void)presentNativeRecoveryUIWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissNativeRecoveryUIWithCompletion:(/*^block*/id)arg1;

@end

