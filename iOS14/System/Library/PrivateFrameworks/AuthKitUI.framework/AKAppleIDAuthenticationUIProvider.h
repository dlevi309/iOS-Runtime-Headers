/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@protocol AKAppleIDAuthenticationUIProvider <AKAppleIDAuthenticationLimitedUIProvider,AKAppleIDServerAuthenticationUIProvider>
@optional
-(void)dismissKeepUsingUIWithCompletion:(/*^block*/id)arg1;
-(void)presentKeepUsingUIForAppleID:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)dismissNativeRecoveryUIWithCompletion:(/*^block*/id)arg1;
-(void)presentNativeRecoveryUIWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end

